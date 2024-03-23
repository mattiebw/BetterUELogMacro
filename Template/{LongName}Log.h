// copyright lololol

#pragma once

#if WITH_EDITOR
	#include "MessageLogModule.h"
#endif

#if !UE_BUILD_SHIPPING
	#include "Engine/Console.h"
#endif

DECLARE_LOG_CATEGORY_EXTERN(Log{LongName}, Log, All);

#define {ShortNameCaps}_LOG(fmt, ...) {LongName}Log(ELogVerbosity::Log, false, true, true, false, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOG_VERBOSE(fmt, ...) {LongName}Log(ELogVerbosity::Verbose, false, true, true, false, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOG_WARN(fmt, ...) {LongName}Log(ELogVerbosity::Warning, false, true, true, false, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOG_ERROR(fmt, ...) {LongName}Log(ELogVerbosity::Error, false, true, true, true, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOG_FATAL(fmt, ...) {LongName}Log(ELogVerbosity::Fatal, false, true, true, true, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)

#define {ShortNameCaps}_LOGC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Log, true, true, true, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOGC_VERBOSE(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Verbose, true, true, true, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOGC_WARN(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Warning, true, true, true, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOGC_ERROR(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Error, true, true, true, true, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOGC_FATAL(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Fatal, true, true, true, true, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)

#define {ShortNameCaps}_LOGS(fmt, ...) {LongName}Log(ELogVerbosity::Log, false, true, true, false, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGS_VERBOSE(fmt, ...) {LongName}Log(ELogVerbosity::Verbose, false, true, true, false, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGS_WARN(fmt, ...) {LongName}Log(ELogVerbosity::Warning, false, true, true, false, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGS_ERROR(fmt, ...) {LongName}Log(ELogVerbosity::Error, false, true, true, true, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGS_FATAL(fmt, ...) {LongName}Log(ELogVerbosity::Fatal, false, true, true, true, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)

#define {ShortNameCaps}_LOGSC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Log, true, true, true, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGSC_VERBOSE(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Verbose, true, true, true, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGSC_WARN(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Warning, true, true, true, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGSC_ERROR(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Error, true, true, true, true, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGSC_FATAL(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Fatal, true, true, true, true, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)

#define {ShortNameCaps}_LOG_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Log, false, true, false, false, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOG_VERBOSE_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Verbose, false, true, false, false, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOG_WARN_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Warning, false, true, false, false, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOG_ERROR_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Error, false, true, false, true, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOG_FATAL_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Fatal, false, true, false, true, __FILE__, __LINE__, __FUNCTION__, nullptr, TEXT(fmt), __VA_ARGS__)

#define {ShortNameCaps}_LOGC_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Log, true, true, false, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOGC_VERBOSE_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Verbose, true, true, false, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOGC_WARN_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Warning, true, true, false, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOGC_ERROR_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Error, true, true, false, true, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)
#define {ShortNameCaps}_LOGC_FATAL_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Fatal, true, true, false, true, __FILE__, __LINE__, __FUNCTION__, WorldContext, TEXT(fmt), __VA_ARGS__)

#define {ShortNameCaps}_LOGS_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Log, false, true, false, false, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGS_VERBOSE_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Verbose, false, true, false, false, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGS_WARN_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Warning, false, true, false, false, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGS_ERROR_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Error, false, true, false, true, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGS_FATAL_NOLOC(fmt, ...) {LongName}Log(ELogVerbosity::Fatal, false, true, false, true, __FILE__, __LINE__, __FUNCTION__, nullptr, fmt, __VA_ARGS__)

#define {ShortNameCaps}_LOGSC_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Log, true, true, false, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGSC_VERBOSE_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Verbose, true, true, false, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGSC_WARN_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Warning, true, true, false, false, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGSC_ERROR_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Error, true, true, false, true, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)
#define {ShortNameCaps}_LOGSC_FATAL_NOLOC(WorldContext, fmt, ...) {LongName}Log(ELogVerbosity::Fatal, true, true, false, true, __FILE__, __LINE__, __FUNCTION__, WorldContext, fmt, __VA_ARGS__)

void Init{LongName}Log();
void Deinit{LongName}Log();

template <typename FmtType, typename... Types>
FORCEINLINE void {LongName}Log(const uint8 LogVerbosity, const bool bLogToConsole, const bool bLogToMsgLog, const bool bShowLocation,
                      const bool bShowMsgLog, const char* File, const int Line, const char* Function, UObject* WorldContext,
                      const FmtType& Fmt, Types... Args)
{
	static_assert(TIsArrayOrRefOfTypeByPredicate<FmtType, TIsCharEncodingCompatibleWithTCHAR>::Value, "Formatting string must be a TCHAR array.");
	static_assert(TAnd<TIsValidVariadicFunctionArg<Types>...>::Value, "Invalid argument(s) passed to {LongName}Log");
	
	FString Msg = FString::Printf(Fmt, Args...);
	if (bShowLocation)
	{
		Msg = FString::Printf(TEXT("%s(%d): %s: %s"), ANSI_TO_TCHAR(File), Line, ANSI_TO_TCHAR(Function), *Msg);
	}

	switch (LogVerbosity)
	{
	case ELogVerbosity::Verbose:
		UE_LOG(Log{LongName}, Verbose, TEXT("%s"), *Msg);
		break;
	case ELogVerbosity::Log:
	default:
		UE_LOG(Log{LongName}, Log, TEXT("%s"), *Msg);
		break;
	case ELogVerbosity::Warning:
		UE_LOG(Log{LongName}, Warning, TEXT("%s"), *Msg);
		break;
	case ELogVerbosity::Error:
		UE_LOG(Log{LongName}, Error, TEXT("%s"), *Msg);
		break;
	case ELogVerbosity::Fatal:
		UE_LOG(Log{LongName}, Fatal, TEXT("%s"), *Msg);
		break;
	}
	
#if !UE_BUILD_SHIPPING
	if (bLogToConsole)
	{
		WorldContext->GetWorld()->GetGameViewport()->ViewportConsole->OutputText(Msg);
	}
#endif

#if WITH_EDITOR
	if (bLogToMsgLog)
	{
		switch (LogVerbosity)
		{
		case ELogVerbosity::Verbose:
		case ELogVerbosity::Log:
		default:
			FMessageLog("{LongName}").Info(FText::FromString(Msg));
			break;
		case ELogVerbosity::Warning:
			FMessageLog("{LongName}").Warning(FText::FromString(Msg));
			break;
		case ELogVerbosity::Error:
		case ELogVerbosity::Fatal:
			FMessageLog("{LongName}").Error(FText::FromString(Msg));
			break;
		}

		if (bShowMsgLog)
		{
			FMessageLogModule& MessageLogModule = FModuleManager::LoadModuleChecked<FMessageLogModule>("MessageLog");
			MessageLogModule.OpenMessageLog("{LongName}");
		}
	}
#endif
}
