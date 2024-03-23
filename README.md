# Better UE Log Macro

### Description
This python script generates a header and cpp file that contain a better (in my opnion) log function and macros for UE C++.
The function allows for logging to the output log, message log, and viewport console.
The main logging function has the following parameters:
  - **const uint8 LogVerbosity** - an ELogVerbosity representing the.. verbosity of the log message.
  - **const bool bLogToConsole** - if true, the message is printed to the viewport console. This requires WorldContext to be non-nullptr. Doesn't work in shipping builds (but will not crash).
  - **const bool bLogToMsgLog** - if true, the message is printed to the Message Log. This only works in WITH_EDITOR builds (but will not crash).
  - **const bool bShowLocation** - if true, the printed message contains the call location. Since this isn't for C++20 (so no std::source_location), the location related parameters should be filled in via a macro.
  - **const bool bShowMsgLog** - if true, if bLogToMsgLog is true and verbosity is Error or above, the message log window will be shown.
  - **const char\* File** - Shown if bShowLocation is true.
  - **const int Line** - Shown if bShowLocation is true.
  - **const char\* Function** - Shown if bShowLocation is true.
  - **UObject\* WorldContext** - Used to log to the viewport console if bLogToConsole is true. If nullptr and bLogToConsole is true, a crash will occur.
  - **const FmtType& Fmt** - Format string
  - **Types... Args** - Format arguments

### Usage
#### Macros
While you *could* use the function directly, the intended way to use it is through the macros. 

_LOG macros log to the output log, and message log when in editor. They only need a format string and parameters.
Examples:
```cpp
TEST_LOG("Test");
TEST_LOG("The integer is: %d", i);
TEST_LOG("Name: %s", *GetName());
TEST_LOG_ERROR("Oh no, the %s is broken", *Thing->GetName());
```
_LOGC macros take in a world context object, and will also log to the viewport console. Examples:
```cpp
TEST_LOGC(GetWorld(), "Test");
TEST_LOGC(GetWorld(), "Destroying %d children... not like that!", ChildElements.Num());
```
_LOGS macros don't add the TEXT() macro to the format string, so can be used to use an FString object (for example) as a format string. Example:
```cpp
FString String = "Test";
TEST_LOGS(String);
```
These macro suffixes can be combined.
#### Generator
Using the generator is simple. Run it with a Python 3.6 or above, and give the required input. Running the generator will output a .cpp and .h file to the otput directory you set, which should be placed in your modules Source directory (probably under Private). Also, make sure to add the following code to your modules Build.cs:

```cs
if (Target.bBuildEditor)
    PrivateDependencyModuleNames.Add("MessageLog");
```
