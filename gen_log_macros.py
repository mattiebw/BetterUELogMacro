import os
from pathlib import Path

# Check the template exists, if it doesn't there's no point proceeding
if not Path("Template/").exists():
    print("Template doesn't exist, check your install")
    quit()

short_name_valid = False
while not short_name_valid:
    short_name = input("Shorthand name (eg: UE): ")

    # Check for spaces
    if ' ' in short_name:
        print("Short name should not contain spaces.")
        continue

    short_name_valid = True

long_name_valid = False
while not long_name_valid:
    long_name = input("Long name (no spaces, eg: UnrealEngine): ")

    if ' ' in long_name:
        print("Long name should not contain spaces.")
        continue

    long_name_valid = True

output_dir_valid = False
while not output_dir_valid:
    output_dir = input("Output Directory (leave blank for working dir): ")

    if output_dir == "":
        output_dir_valid = True
        break

    if os.path.isabs(output_dir):
        if not os.path.isdir(output_dir):
            print(f"Output path \"{output_dir}\" is invalid (probably doesn't exist).")
            continue
    else:
        path = Path.cwd() / output_dir
        if not path.exists():
            print(f"Output path \"{output_dir}\" is invalid (probably doesn't exist).")
            continue

    output_dir = output_dir.replace('\\', '/')
    if not output_dir.endswith('/'): # Add path sep if needed
        output_dir += '/'
    print(f"Set output path: {output_dir}")
    output_dir_valid = True

msg_log_name = input("Message log name: ")

print("Generating")

def format_string(input: str):
    input = input.replace("{LongName}", long_name)
    input = input.replace("{LongNameCaps}", long_name.upper())
    input = input.replace("{ShortName}", short_name)
    input = input.replace("{ShortNameCaps}", short_name.upper())
    input = input.replace("{MsgLogName}", msg_log_name)
    return input

submodules = []
for subdir, dirs, files in os.walk("Template/"):
    for file in files:
        fullPath = os.path.join(subdir, file)
        fullPathFormatted = format_string(fullPath)
        fullPathFormatted = fullPathFormatted.replace("Template/", output_dir)
        fullPathFormatted = fullPathFormatted.replace("\\", "/")
        path = Path(fullPathFormatted)
        path.parent.mkdir(parents=True, exist_ok=True)
        
        contents = open(fullPath, 'r', encoding="utf8").read()
    
        contents = format_string(contents)
        open(fullPathFormatted, "w", encoding="utf8").write(contents)
        print(f"Wrote {fullPathFormatted}")

print("Done")
