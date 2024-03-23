#include "{LongName}Log.h"

#if WITH_EDITOR
	#include "MessageLogModule.h"
#endif

DEFINE_LOG_CATEGORY(Log{LongName});

void Init{LongName}Log()
{
#if WITH_EDITOR
	FMessageLogModule& MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>("MessageLog");
	FMessageLogInitializationOptions InitOptions;
	InitOptions.bShowPages = true;
	InitOptions.bAllowClear = true;
	InitOptions.bShowFilters = true;
	MessageLogModule.RegisterLogListing("{LongName}", NSLOCTEXT("{LongName}", "{LongName}LogLabel", "{MsgLogName}"), InitOptions);
#endif
}

void Deinit{LongName}Log()
{
#if WITH_EDITOR
	if (FModuleManager::Get().IsModuleLoaded("MessageLog"))
	{
		// Unregister message log
		FMessageLogModule& MessageLogModule = FModuleManager::GetModuleChecked<FMessageLogModule>("MessageLog");
		MessageLogModule.UnregisterLogListing("{LongName}");
	}
#endif
}
