// Enum TSS.ETSSAccountType
enum class ETSSAccountType : uint8 {
	Common,
	ETSSAccountType_MAX,
};

// Enum TSS.ETSSAddUserResult
enum class ETSSAddUserResult : uint8 {
	Success,
	Error_NoServerInterface,
	Error_NotServer,
	Error_AccountInfoConversionFailure,
	Error_SdkReturnedError,
	Error_NoServerApiHandler,
	Error_OwnerNotPlayerController,
	Error_FailedToGetRemoteAddress,
	Error_AlreadyLoggedIn,
	ETSSAddUserResult_MAX,
};

// Enum TSS.ETSSBroadcastedTextCategory
enum class ETSSBroadcastedTextCategory : uint8 {
	Unknown,
	ProfileInformation,
	InstantMessages,
	SocialOperation,
	ForumContent,
	ETSSBroadcastedTextCategory_MAX,
};

// Enum TSS.ETSSClientPlatformType
enum class ETSSClientPlatformType : uint8 {
	PcClient,
	PS,
	ETSSClientPlatformType_MAX,
};

// Enum TSS.ETSSDeleteUserResult
enum class ETSSDeleteUserResult : uint8 {
	Success,
	Error_NoServerInterface,
	Error_NotServer,
	Error_ClientNotFound,
	Error_AccountInfoConversionFailure,
	Error_SdkReturnedError,
	Error_NoServerApiHandler,
	Error_AlreadyLoggedOut,
	ETSSDeleteUserResult_MAX,
};

// Enum TSS.ETSSProfanityFilterResult
enum class ETSSProfanityFilterResult : uint8 {
	NoProfanity,
	SeverProfanity,
	Profanity,
	ETSSProfanityFilterResult_MAX,
};

// Enum TSS.ETSSReceivedClientDataResult
enum class ETSSReceivedClientDataResult : uint8 {
	Success,
	Error_ClientNotFound,
	Error_AntiCheatNotInitalized,
	Error_NoClientData,
	Error_NotServer,
	Error_AccountInfoConversionFailure,
	Error_SdkReturnedError,
	ETSSReceivedClientDataResult_MAX,
};

// Enum TSS.ETSSAceLogoutResult
enum class ETSSAceLogoutResult : uint8 {
	Success,
	Error_LogoutClientMismatch,
	Error_NotLoggedIn,
	Error_NotClientApp,
	ETSSAceLogoutResult_MAX,
};

// Enum TSS.ETSSAceLoginResult
enum class ETSSAceLoginResult : uint8 {
	Success,
	Error_AlreadyLoggedIn,
	Error_GhostLogin,
	Error_AceNotInitialized,
	Error_AccountInfoConversionFailure,
	Error_InternalLoginError,
	Error_NotClientApp,
	ETSSAceLoginResult_MAX,
};

// Enum TSS.ETSSSdkLoadState
enum class ETSSSdkLoadState : uint8 {
	NotLoaded,
	LoadFailed,
	LoadSuccessful,
	Unloaded,
	ETSSSdkLoadState_MAX,
};

// Enum TSS.ETSSSetAccountInfoResult
enum class ETSSSetAccountInfoResult : uint8 {
	Success,
	Error_AntiBotNotInitialized,
	Error_NotClient,
	Error_AccountInfoConversionFailure,
	Error_UnhandledDataConversionResult,
	Error_AlreadyInitialized,
	ETSSSetAccountInfoResult_MAX,
};

// Enum TSS.ETSSSubmitTextResult
enum class ETSSSubmitTextResult : uint8 {
	Success,
	Error_NotServer,
	Error_UICNotInitalized,
	Error_ClientNotFound,
	Error_MessageLengthExceeded,
	Error_TextCategoryMismatch,
	Error_SdkReturnedError,
	ETSSSubmitTextResult_MAX,
};

// Enum TSS.ETSSPlatformTypeConversionResult
enum class ETSSPlatformTypeConversionResult : uint8 {
	Success,
	Error_UnhandledType,
	ETSSPlatformTypeConversionResult_MAX,
};

// Enum TSS.ETSSAccountTypeConversionResult
enum class ETSSAccountTypeConversionResult : uint8 {
	Success,
	Error_UnhandledType,
	ETSSAccountTypeConversionResult_MAX,
};

// Enum TSS.ETSSAccountInfoConversionResult
enum class ETSSAccountInfoConversionResult : uint8 {
	Success,
	Error_BadAccountId,
	Error_UndefinedPlatform,
	Error_UndefinedAccountType,
	ETSSAccountInfoConversionResult_MAX,
};

// ScriptStruct TSS.TSSClientDataReport
// Size: 0x10 (Inherited: 0x00)
struct FTSSClientDataReport {
	struct TArray<char> Data; // 0x00(0x10)
};

// ScriptStruct TSS.TSSAccountInfo
// Size: 0x30 (Inherited: 0x00)
struct FTSSAccountInfo {
	struct FString AccountId; // 0x00(0x10)
	enum class ETSSAccountType AccountType; // 0x10(0x04)
	enum class ETSSClientPlatformType PlatformType; // 0x14(0x04)
	uint32_t WorldId; // 0x18(0x04)
	uint32_t ChannelID; // 0x1c(0x04)
	uint64_t RoleId; // 0x20(0x08)
	uint32_t GameID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

