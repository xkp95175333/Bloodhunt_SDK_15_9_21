// Enum INTLPlugin.EINTLUpdateStep
enum class EINTLUpdateStep : uint8 {
	kUnknown,
	kFirstResourceAnalyze,
	kCheckUpdate,
	kDownload,
	EINTLUpdateStep_MAX,
};

// Enum INTLPlugin.EINTLUpdateResourceCopyType
enum class EINTLUpdateResourceCopyType : uint8 {
	kUnknown,
	kCopyAll,
	kCopyOnDemand,
	EINTLUpdateResourceCopyType_MAX,
};

// Enum INTLPlugin.EINTLUpdateActionType
enum class EINTLUpdateActionType : uint8 {
	kUnknown,
	kAppUpdate,
	kResourceUpdate,
	kResourceRepair,
	EINTLUpdateActionType_MAX,
};

// Enum INTLPlugin.EINTLUpdateNewVersionType
enum class EINTLUpdateNewVersionType : uint8 {
	kUnknown,
	kNoNeedUpdate,
	kOptionalUpdate,
	kForcibleUpdate,
	EINTLUpdateNewVersionType_MAX,
};

// Enum INTLPlugin.EINTLCrashLevel
enum class EINTLCrashLevel : uint8 {
	LogLevelSilent,
	LogLevelError,
	LogLevelWarn,
	LogLevelInfo,
	LogLevelDebug,
	LogLevelVerbose,
	EINTLCrashLevel_MAX,
};

// Enum INTLPlugin.EINTLWebViewOrientation
enum class EINTLWebViewOrientation : uint8 {
	kAuto,
	kPortrait,
	kLandscape,
	EINTLWebViewOrientation_MAX,
};

// Enum INTLPlugin.EINTLFriendReqType
enum class EINTLFriendReqType : uint8 {
	kReqText,
	kReqLink,
	kReqImage,
	kReqInvite,
	kReqVideo,
	EINTLFriendReqType_MAX,
};

// Enum INTLPlugin.EComplianceParentCertificateStatus
enum class EComplianceParentCertificateStatus : uint8 {
	kDeny,
	kUnknown,
	kAgree,
	EComplianceParentCertificateStatus_MAX,
};

// Enum INTLPlugin.EComplianceAgreeStatus
enum class EComplianceAgreeStatus : uint8 {
	kDeny,
	kUnknown,
	kAgree,
	EComplianceAgreeStatus_MAX,
};

// Enum INTLPlugin.EComplianceAgeStatus
enum class EComplianceAgeStatus : uint8 {
	kMinor,
	kUnknown,
	kAdult,
	EComplianceAgeStatus_MAX,
};

// Enum INTLPlugin.EINTLLoginChannel
enum class EINTLLoginChannel : uint8 {
	kChannelDefault,
	kChannelGuest,
	kChannelFacebook,
	kChannelGoogle,
	kChannelIEGPassport,
	kChannelTwitter,
	kChannelGarena,
	kChannelCustomAccount,
	kChannelEGame,
	kChannelSwitch,
	kChannelLine,
	kChannelApple,
	kChannelXboxOne,
	kChannelSteam,
	kChannelPS4,
	kChannelEpic,
	kChannelSharkmob,
	kChannelPS5,
	EINTLLoginChannel_MAX,
};

// Enum INTLPlugin.EVerifyCodeType
enum class EVerifyCodeType : uint8 {
	kVerifyCodeTypeRegister,
	kVerifyCodeTypeResetPassword,
	kVerifyCodeTypeRegisterThenLogin,
	kVerifyCodeTypeModifyAccount,
	EVerifyCodeType_MAX,
};

// Enum INTLPlugin.EAccountType
enum class EAccountType : uint8 {
	kAccountTypeNone,
	kAccountTypeEmail,
	kAccountTypeMobilePhone,
	EAccountType_MAX,
};

// ScriptStruct INTLPlugin.INTLBaseResult
// Size: 0x40 (Inherited: 0x00)
struct FINTLBaseResult {
	int32_t MethodId; // 0x00(0x04)
	int32_t RetCode; // 0x04(0x04)
	struct FString RetMsg; // 0x08(0x10)
	int32_t ThirdCode; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ThirdMsg; // 0x20(0x10)
	struct FString ExtraJson; // 0x30(0x10)
};

// ScriptStruct INTLPlugin.CutoutInfoResult
// Size: 0x70 (Inherited: 0x40)
struct FCutoutInfoResult : FINTLBaseResult {
	bool HasCutout; // 0x40(0x01)
	bool IsCutoutHidden; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t ScreenHeight; // 0x44(0x04)
	int32_t ScreenWidth; // 0x48(0x04)
	int32_t StatusBarHeight; // 0x4c(0x04)
	struct TArray<struct FCutoutRect> CutoutRects; // 0x50(0x10)
	struct FCutoutRect SafeArea; // 0x60(0x10)
};

// ScriptStruct INTLPlugin.CutoutRect
// Size: 0x10 (Inherited: 0x00)
struct FCutoutRect {
	int32_t Top; // 0x00(0x04)
	int32_t Bottom; // 0x04(0x04)
	int32_t Left; // 0x08(0x04)
	int32_t Right; // 0x0c(0x04)
};

// ScriptStruct INTLPlugin.INTLExtendResult
// Size: 0x58 (Inherited: 0x40)
struct FINTLExtendResult : FINTLBaseResult {
	enum class EINTLLoginChannel Channel; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FString ExtendMethodName; // 0x48(0x10)
};

// ScriptStruct INTLPlugin.INTLDNSResult
// Size: 0x70 (Inherited: 0x40)
struct FINTLDNSResult : FINTLBaseResult {
	struct FString V4; // 0x40(0x10)
	struct FString V6; // 0x50(0x10)
	struct FString Host; // 0x60(0x10)
};

// ScriptStruct INTLPlugin.INTLLBSIPInfoResult
// Size: 0x68 (Inherited: 0x40)
struct FINTLLBSIPInfoResult : FINTLBaseResult {
	struct FString Region; // 0x40(0x10)
	struct FString Alpha2; // 0x50(0x10)
	int32_t Timestamp; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct INTLPlugin.INTLDirTreeResult
// Size: 0x70 (Inherited: 0x40)
struct FINTLDirTreeResult : FINTLBaseResult {
	int32_t TreeId; // 0x40(0x04)
	int32_t NodeId; // 0x44(0x04)
	struct FString TreeInfo; // 0x48(0x10)
	struct FString RoleInfo; // 0x58(0x10)
	int32_t ExpireTime; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct INTLPlugin.INTLUpdateOptionalRepoFilesStatus
// Size: 0x20 (Inherited: 0x00)
struct FINTLUpdateOptionalRepoFilesStatus {
	struct FString FilePath; // 0x00(0x10)
	int32_t TotalFileNum; // 0x10(0x04)
	int32_t ValidFileNum; // 0x14(0x04)
	int32_t NeedDownloadSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct INTLPlugin.INTLUpdateInitInfo
// Size: 0x30 (Inherited: 0x00)
struct FINTLUpdateInitInfo {
	enum class EINTLUpdateActionType ActionType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RepoID; // 0x04(0x04)
	int32_t ResourceCopyType; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ResourceSavePath; // 0x10(0x10)
	struct FString FirstResourceDirPath; // 0x20(0x10)
};

// ScriptStruct INTLPlugin.INTLUpdateOptionalRepoInitResult
// Size: 0x48 (Inherited: 0x40)
struct FINTLUpdateOptionalRepoInitResult : FINTLBaseResult {
	enum class EINTLUpdateActionType ActionType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t RepoID; // 0x44(0x04)
};

// ScriptStruct INTLPlugin.INTLUpdateResult
// Size: 0x50 (Inherited: 0x40)
struct FINTLUpdateResult : FINTLBaseResult {
	enum class EINTLUpdateActionType ActionType; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t RepoID; // 0x44(0x04)
	int32_t TaskID; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct INTLPlugin.INTLUpdateProgress
// Size: 0x40 (Inherited: 0x00)
struct FINTLUpdateProgress {
	int32_t MethodId; // 0x00(0x04)
	enum class EINTLUpdateActionType ActionType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t UpdateStep; // 0x08(0x04)
	int32_t RepoID; // 0x0c(0x04)
	int32_t TaskID; // 0x10(0x04)
	int32_t FinishedSize; // 0x14(0x04)
	int32_t TotalSize; // 0x18(0x04)
	int32_t Speed; // 0x1c(0x04)
	int32_t RemainTime; // 0x20(0x04)
	float StepProgress; // 0x24(0x04)
	float TotalProgress; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString ErrorMsg; // 0x30(0x10)
};

// ScriptStruct INTLPlugin.INTLUpdateStartRepoNewVersionInfo
// Size: 0x38 (Inherited: 0x00)
struct FINTLUpdateStartRepoNewVersionInfo {
	int32_t MethodId; // 0x00(0x04)
	enum class EINTLUpdateActionType ActionType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t NewVersionType; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Version; // 0x10(0x10)
	int32_t NeedDownloadSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString GameDefinedStr; // 0x28(0x10)
};

// ScriptStruct INTLPlugin.INTLCustomerUserProfile
// Size: 0x100 (Inherited: 0x00)
struct FINTLCustomerUserProfile {
	struct FString LangType; // 0x00(0x10)
	struct FString Sign; // 0x10(0x10)
	struct FString OpenId; // 0x20(0x10)
	struct FString GameLevel; // 0x30(0x10)
	struct FString NickName; // 0x40(0x10)
	struct FString RoleId; // 0x50(0x10)
	struct FString AreaId; // 0x60(0x10)
	struct FString ZoneId; // 0x70(0x10)
	struct FString GameSvrId; // 0x80(0x10)
	struct FString Region; // 0x90(0x10)
	struct FString PictureUrl; // 0xa0(0x10)
	struct FString CustomParam1; // 0xb0(0x10)
	struct FString CustomParam2; // 0xc0(0x10)
	struct FString CustomParam3; // 0xd0(0x10)
	struct FString CustomParam4; // 0xe0(0x10)
	struct FString CustomParam5; // 0xf0(0x10)
};

// ScriptStruct INTLPlugin.INTLCustomerResult
// Size: 0x48 (Inherited: 0x40)
struct FINTLCustomerResult : FINTLBaseResult {
	int32_t MsgType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct INTLPlugin.INTLComplianceResult
// Size: 0xa8 (Inherited: 0x40)
struct FINTLComplianceResult : FINTLBaseResult {
	int32_t AdultStatus; // 0x40(0x04)
	int32_t ParentCertificateStatus; // 0x44(0x04)
	struct FString ParentCertificateStatusExpiration; // 0x48(0x10)
	int32_t EUUserAgreeStatus; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString CountryCode; // 0x60(0x10)
	int32_t AdultAge; // 0x70(0x04)
	int32_t GameGrade; // 0x74(0x04)
	int32_t CertificateType; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString AdultStatusExpiration; // 0x80(0x10)
	struct FString TS; // 0x90(0x10)
	bool IsEEA; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
};

// ScriptStruct INTLPlugin.INTLWebViewResult
// Size: 0x70 (Inherited: 0x40)
struct FINTLWebViewResult : FINTLBaseResult {
	int32_t MsgType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString MsgJsonData; // 0x48(0x10)
	float EmbedProgress; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString EmbedUrl; // 0x60(0x10)
};

// ScriptStruct INTLPlugin.INTLPushResult
// Size: 0x58 (Inherited: 0x40)
struct FINTLPushResult : FINTLBaseResult {
	int32_t Type; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Notification; // 0x48(0x10)
};

// ScriptStruct INTLPlugin.INTLLocalNotificationIOS
// Size: 0x80 (Inherited: 0x00)
struct FINTLLocalNotificationIOS {
	int32_t RepeatType; // 0x00(0x04)
	int32_t FireTime; // 0x04(0x04)
	int32_t Badge; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString AlertBody; // 0x10(0x10)
	struct FString AlertAction; // 0x20(0x10)
	struct TMap<struct FString, struct FString> UserInfo; // 0x30(0x50)
};

// ScriptStruct INTLPlugin.INTLLocalNotification
// Size: 0x78 (Inherited: 0x00)
struct FINTLLocalNotification {
	int32_t NotificationID; // 0x00(0x04)
	int32_t ActionType; // 0x04(0x04)
	int32_t SoundEnabled; // 0x08(0x04)
	int32_t Lights; // 0x0c(0x04)
	int32_t Vibrate; // 0x10(0x04)
	int32_t FireTime; // 0x14(0x04)
	struct FString Title; // 0x18(0x10)
	struct FString Content; // 0x28(0x10)
	struct FString TickerText; // 0x38(0x10)
	struct FString ActionParameter; // 0x48(0x10)
	struct FString RingUri; // 0x58(0x10)
	struct FString SmallIcon; // 0x68(0x10)
};

// ScriptStruct INTLPlugin.INTLFriendReqInfo
// Size: 0x88 (Inherited: 0x00)
struct FINTLFriendReqInfo {
	int32_t Type; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString User; // 0x08(0x10)
	struct FString Title; // 0x18(0x10)
	struct FString Description; // 0x28(0x10)
	struct FString ImagePath; // 0x38(0x10)
	struct FString ThumbPath; // 0x48(0x10)
	struct FString MediaPath; // 0x58(0x10)
	struct FString Link; // 0x68(0x10)
	struct FString ExtraJson; // 0x78(0x10)
};

// ScriptStruct INTLPlugin.INTLFriendResult
// Size: 0x50 (Inherited: 0x40)
struct FINTLFriendResult : FINTLBaseResult {
	struct TArray<struct FINTLPersonInfo> FriendInfoList; // 0x40(0x10)
};

// ScriptStruct INTLPlugin.INTLPersonInfo
// Size: 0x88 (Inherited: 0x00)
struct FINTLPersonInfo {
	struct FString OpenId; // 0x00(0x10)
	struct FString UserName; // 0x10(0x10)
	int32_t Gender; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString PictureUrl; // 0x28(0x10)
	struct FString Country; // 0x38(0x10)
	struct FString Province; // 0x48(0x10)
	struct FString City; // 0x58(0x10)
	struct FString Language; // 0x68(0x10)
	struct FString ExtraJson; // 0x78(0x10)
};

// ScriptStruct INTLPlugin.INTLNoticeResult
// Size: 0x60 (Inherited: 0x40)
struct FINTLNoticeResult : FINTLBaseResult {
	struct FString SeqId; // 0x40(0x10)
	struct TArray<struct FINTLNoticeInfo> NoticeInfoList; // 0x50(0x10)
};

// ScriptStruct INTLPlugin.INTLNoticeInfo
// Size: 0x78 (Inherited: 0x00)
struct FINTLNoticeInfo {
	int32_t NoticeId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AppId; // 0x08(0x10)
	struct FString AppNoticeId; // 0x18(0x10)
	int32_t Status; // 0x28(0x04)
	int32_t StartTime; // 0x2c(0x04)
	int32_t EndTime; // 0x30(0x04)
	int32_t UpdateTime; // 0x34(0x04)
	struct FString AreaList; // 0x38(0x10)
	struct TArray<struct FINTLNoticePicture> PictureList; // 0x48(0x10)
	struct FString ExtraData; // 0x58(0x10)
	struct TArray<struct FINTLNoticeContent> ContentList; // 0x68(0x10)
};

// ScriptStruct INTLPlugin.INTLNoticeContent
// Size: 0x70 (Inherited: 0x00)
struct FINTLNoticeContent {
	int32_t ContentId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AppContentId; // 0x08(0x10)
	struct FString Title; // 0x18(0x10)
	struct FString Content; // 0x28(0x10)
	struct FString LangType; // 0x38(0x10)
	int32_t UpdateTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ExtraData; // 0x50(0x10)
	struct TArray<struct FINTLNoticePicture> PictureList; // 0x60(0x10)
};

// ScriptStruct INTLPlugin.INTLNoticePicture
// Size: 0x40 (Inherited: 0x00)
struct FINTLNoticePicture {
	struct FString URL; // 0x00(0x10)
	struct FString Hash; // 0x10(0x10)
	struct FString RedirectUrl; // 0x20(0x10)
	struct FString ExtraData; // 0x30(0x10)
};

// ScriptStruct INTLPlugin.INTLVerifyCodeStatusResult
// Size: 0x48 (Inherited: 0x40)
struct FINTLVerifyCodeStatusResult : FINTLBaseResult {
	int32_t VerifyCodeExpireTime; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct INTLPlugin.INTLIsReceiveEmailResult
// Size: 0x48 (Inherited: 0x40)
struct FINTLIsReceiveEmailResult : FINTLBaseResult {
	int32_t IsReceiveEmail; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct INTLPlugin.INTLRegisterStatusResult
// Size: 0x50 (Inherited: 0x40)
struct FINTLRegisterStatusResult : FINTLBaseResult {
	int32_t IsRegistered; // 0x40(0x04)
	int32_t IsSetPassword; // 0x44(0x04)
	int32_t IsReceiveEmail; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct INTLPlugin.INTLAccountResult
// Size: 0xf8 (Inherited: 0x40)
struct FINTLAccountResult : FINTLBaseResult {
	int32_t ChannelID; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Channel; // 0x48(0x10)
	struct FString SeqId; // 0x58(0x10)
	struct FString UserName; // 0x68(0x10)
	struct FString UID; // 0x78(0x10)
	struct FString Token; // 0x88(0x10)
	struct FString ExpireTime; // 0x98(0x10)
	int32_t IsRegister; // 0xa8(0x04)
	int32_t IsSetPassword; // 0xac(0x04)
	int32_t IsReceiveEmail; // 0xb0(0x04)
	int32_t VerifyCodeExpireTime; // 0xb4(0x04)
	int32_t CanBind; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FString PpAcceptanceVersion; // 0xc0(0x10)
	struct FString TosAcceptanceVersion; // 0xd0(0x10)
	struct FDateTime PpAcceptanceTime; // 0xe0(0x08)
	struct FDateTime TosAcceptanceTime; // 0xe8(0x08)
	int32_t IsUserNameAvailable; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct INTLPlugin.INTLAccountProfile
// Size: 0x60 (Inherited: 0x00)
struct FINTLAccountProfile {
	struct FString UserName; // 0x00(0x10)
	struct FString Birthday; // 0x10(0x10)
	int32_t BirthdayYear; // 0x20(0x04)
	int32_t BirthdayMonth; // 0x24(0x04)
	int32_t BirthdayDay; // 0x28(0x04)
	int32_t IsReceiveEmail; // 0x2c(0x04)
	struct FString Region; // 0x30(0x10)
	struct FString LangType; // 0x40(0x10)
	struct FString ExtraJson; // 0x50(0x10)
};

// ScriptStruct INTLPlugin.INTLDeviceLevelResult
// Size: 0x48 (Inherited: 0x40)
struct FINTLDeviceLevelResult : FINTLBaseResult {
	int32_t DeviceLevel; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct INTLPlugin.INTLIDTokenResult
// Size: 0x50 (Inherited: 0x40)
struct FINTLIDTokenResult : FINTLBaseResult {
	struct FString IdToken; // 0x40(0x10)
};

// ScriptStruct INTLPlugin.INTLAuthResult
// Size: 0x118 (Inherited: 0x40)
struct FINTLAuthResult : FINTLBaseResult {
	struct FString OpenId; // 0x40(0x10)
	struct FString Token; // 0x50(0x10)
	int32_t TokenExpireTime; // 0x60(0x04)
	int32_t FirstLogin; // 0x64(0x04)
	struct FString RegChannelDis; // 0x68(0x10)
	struct FString UserName; // 0x78(0x10)
	int32_t Gender; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FString Birthday; // 0x90(0x10)
	struct FString PicUrl; // 0xa0(0x10)
	struct FString Pf; // 0xb0(0x10)
	struct FString PfKey; // 0xc0(0x10)
	bool NeedRealNameAuth; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	int32_t ChannelID; // 0xd4(0x04)
	enum class EINTLLoginChannel ChannelName; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct FString ChannelInfo; // 0xe0(0x10)
	struct FString ConfirmCode; // 0xf0(0x10)
	int32_t ConfirmCodeExpireTime; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FString BindList; // 0x108(0x10)
};

