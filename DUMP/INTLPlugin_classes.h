// Class INTLPlugin.INTLBaseUserWidget
// Size: 0x268 (Inherited: 0x260)
struct UINTLBaseUserWidget : UUserWidget {
	char pad_260[0x8]; // 0x260(0x08)
};

// Class INTLPlugin.INTLOutputUtility
// Size: 0x28 (Inherited: 0x28)
struct UINTLOutputUtility : UBlueprintFunctionLibrary {

	void FormatVerifyCodeStatusRet(struct FINTLVerifyCodeStatusResult Ret, bool IsSuccess, struct FText ErrorMsg); // Function INTLPlugin.INTLOutputUtility.FormatVerifyCodeStatusRet // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc5f00
	void FormatNoticeRet(struct FINTLNoticeResult Ret, bool IsSuccess, struct FText ErrorMsg); // Function INTLPlugin.INTLOutputUtility.FormatNoticeRet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc5b50
	void FormatBaseRet(struct FINTLBaseResult Ret, bool IsSuccess, struct FText ErrorMsg); // Function INTLPlugin.INTLOutputUtility.FormatBaseRet // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc58d0
	void FormatAuthRet(struct FINTLAuthResult Ret, bool IsSuccess, struct FText ErrorMsg); // Function INTLPlugin.INTLOutputUtility.FormatAuthRet // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbc51b0
};

// Class INTLPlugin.INTLPluginObserver
// Size: 0x28 (Inherited: 0x28)
struct UINTLPluginObserver : UInterface {

	void OnWebViewResult(struct FINTLWebViewResult Ret); // Function INTLPlugin.INTLPluginObserver.OnWebViewResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd5840
	void OnUpdateStartRepoNewVersionInfoResult(struct FINTLUpdateStartRepoNewVersionInfo Ret); // Function INTLPlugin.INTLPluginObserver.OnUpdateStartRepoNewVersionInfoResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd56c0
	void OnUpdateResult(struct FINTLUpdateResult Ret); // Function INTLPlugin.INTLPluginObserver.OnUpdateResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd54f0
	void OnUpdateProgressResult(struct FINTLUpdateProgress Ret); // Function INTLPlugin.INTLPluginObserver.OnUpdateProgressResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd5380
	void OnUpdateOptionalRepoInitResult(struct FINTLUpdateOptionalRepoInitResult Ret); // Function INTLPlugin.INTLPluginObserver.OnUpdateOptionalRepoInitResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd51b0
	void OnShowAccountPicker(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnShowAccountPicker // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd4fc0
	void OnResetPassword(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnResetPassword // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd4e00
	void OnRequestVerifyCode(struct FINTLVerifyCodeStatusResult Ret); // Function INTLPlugin.INTLPluginObserver.OnRequestVerifyCode // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd4c40
	void OnQueryVerifyCodeStatus(struct FINTLVerifyCodeStatusResult Ret); // Function INTLPlugin.INTLPluginObserver.OnQueryVerifyCodeStatus // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd4a80
	void OnQueryUserInfo(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnQueryUserInfo // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd4870
	void OnQueryRegisterStatus(struct FINTLRegisterStatusResult Ret); // Function INTLPlugin.INTLPluginObserver.OnQueryRegisterStatus // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd46a0
	void OnQueryIsReceiveEmail(struct FINTLIsReceiveEmailResult Ret); // Function INTLPlugin.INTLPluginObserver.OnQueryIsReceiveEmail // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd44e0
	void OnQueryActiveUser(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnQueryActiveUser // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd4320
	void OnPushResult(struct FINTLPushResult Ret); // Function INTLPlugin.INTLPluginObserver.OnPushResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd4110
	void OnPushBaseResult(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnPushBaseResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd3f50
	void OnNoticeRequestData(struct FINTLNoticeResult Ret); // Function INTLPlugin.INTLPluginObserver.OnNoticeRequestData // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd3c90
	void OnNeedRefreshUser(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnNeedRefreshUser // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd3ad0
	void OnModifyProfile(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnModifyProfile // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd3910
	void OnModifyAccount(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnModifyAccount // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd3750
	void OnLogout(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnLogout // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd3590
	void OnLoginWithMappedChannel(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnLoginWithMappedChannel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd3370
	void OnLoginWithBoundChannel(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnLoginWithBoundChannel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd3150
	void OnLogin(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnLogin // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd2f40
	void OnIPInfoResult(struct FINTLLBSIPInfoResult Ret); // Function INTLPlugin.INTLPluginObserver.OnIPInfoResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd2cd0
	void OnIDTokenResult(struct FINTLIDTokenResult Ret); // Function INTLPlugin.INTLPluginObserver.OnIDTokenResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd2ac0
	void OnFriendResult(struct FINTLFriendResult Ret); // Function INTLPlugin.INTLPluginObserver.OnFriendResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd2840
	void OnFriendBaseResult(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnFriendBaseResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd2680
	void OnExtendResult(struct FINTLExtendResult Ret); // Function INTLPlugin.INTLPluginObserver.OnExtendResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd2470
	void OnDNSResult(struct FINTLDNSResult Ret); // Function INTLPlugin.INTLPluginObserver.OnDNSResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd1cf0
	void OnDismissLoginUI(bool Canceled); // Function INTLPlugin.INTLPluginObserver.OnDismissLoginUI // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd23e0
	void OnDirTreeResult(struct FINTLDirTreeResult Ret); // Function INTLPlugin.INTLPluginObserver.OnDirTreeResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd2160
	void OnDeviceLevelResult(struct FINTLDeviceLevelResult Ret); // Function INTLPlugin.INTLPluginObserver.OnDeviceLevelResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd1fa0
	void OnCutoutResult(struct FCutoutInfoResult Ret); // Function INTLPlugin.INTLPluginObserver.OnCutoutResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd1aa0
	void OnCustomerResult(struct FINTLCustomerResult Ret); // Function INTLPlugin.INTLPluginObserver.OnCustomerResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd18d0
	void OnComplianceResult(struct FINTLComplianceResult Ret); // Function INTLPlugin.INTLPluginObserver.OnComplianceResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd1760
	void OnBuildMapWithLoggedinChannel(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnBuildMapWithLoggedinChannel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd1540
	void OnBindWithLoggedinChannel(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnBindWithLoggedinChannel // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd1320
	void OnBind(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnBind // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd1110
	void OnAutoLogin(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnAutoLogin // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd0f00
	void OnAuthResult(struct FINTLAuthResult Ret); // Function INTLPlugin.INTLPluginObserver.OnAuthResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd0ce0
	void OnAuthBaseResult(struct FINTLBaseResult Ret); // Function INTLPlugin.INTLPluginObserver.OnAuthBaseResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd0b20
	void OnAccountResult(struct FINTLAccountResult Ret); // Function INTLPlugin.INTLPluginObserver.OnAccountResult // (Native|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xbd0940
};

// Class INTLPlugin.INTLSDKAPI
// Size: 0x28 (Inherited: 0x28)
struct UINTLSDKAPI : UBlueprintFunctionLibrary {

	bool UpdateStop(int32_t RepoID, int32_t TaskID); // Function INTLPlugin.INTLSDKAPI.UpdateStop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbda130
	bool UpdateStart(struct FINTLUpdateInitInfo Info); // Function INTLPlugin.INTLSDKAPI.UpdateStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9fd0
	bool UpdateContinue(int32_t RepoID); // Function INTLPlugin.INTLSDKAPI.UpdateContinue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9f40
	bool UpdateConfig(struct TMap<struct FString, struct FString> Cfg, struct FString Project); // Function INTLPlugin.INTLSDKAPI.UpdateConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9d70
	void UnregisterPush(struct FString Channel); // Function INTLPlugin.INTLSDKAPI.UnregisterPush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9c90
	bool Unbind(enum class EINTLLoginChannel Channel, struct FString UID, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.Unbind // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9ae0
	bool ShowAccountPicker(); // Function INTLPlugin.INTLSDKAPI.ShowAccountPicker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9ab0
	bool Share(struct FINTLFriendReqInfo Info, struct FString Channel); // Function INTLPlugin.INTLSDKAPI.Share // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8ec0
	void SetTag(struct FString Channel, struct FString Tag); // Function INTLPlugin.INTLSDKAPI.SetTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9940
	void SetSessionExtraParam(struct FString extra_json); // Function INTLPlugin.INTLSDKAPI.SetSessionExtraParam // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9860
	void SetDeviceLevel(int32_t Level); // Function INTLPlugin.INTLSDKAPI.SetDeviceLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd97e0
	void SetCrashUserValue(struct FString Key, struct FString Value); // Function INTLPlugin.INTLSDKAPI.SetCrashUserValue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9670
	void SetCrashUserId(struct FString UserId); // Function INTLPlugin.INTLSDKAPI.SetCrashUserId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9590
	void SetAccountInfo(enum class EINTLLoginChannel Channel, int32_t ChannelID, struct FString LangType, int32_t AccountPlatType); // Function INTLPlugin.INTLSDKAPI.SetAccountInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9400
	void SetAccount(struct FString Channel, struct FString Account); // Function INTLPlugin.INTLSDKAPI.SetAccount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd9290
	bool SendMessage(struct FINTLFriendReqInfo Info, struct FString Channel); // Function INTLPlugin.INTLSDKAPI.SendMessage // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8ec0
	bool ResetPasswordWithVerifyCode(struct FString Account, struct FString VerifyCode, struct FString PhoneAreaCode, struct FString NewPassword, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ResetPasswordWithVerifyCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8ba0
	bool ResetPasswordWithOldPassword(struct FString Account, struct FString OldPassword, struct FString PhoneAreaCode, struct FString NewPassword, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ResetPasswordWithOldPassword // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8880
	bool ResetGuest(); // Function INTLPlugin.INTLSDKAPI.ResetGuest // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8850
	bool RequestVerifyCode(struct FString Account, enum class EVerifyCodeType CodeType, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.RequestVerifyCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8610
	void RequestTrackingAuthorization(); // Function INTLPlugin.INTLSDKAPI.RequestTrackingAuthorization // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd85f0
	void RequestIPInfo(); // Function INTLPlugin.INTLSDKAPI.RequestIPInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd85d0
	void ReportPayStep(int32_t Step, struct FString StepName, bool Result, int32_t ErrorCode, struct TMap<struct FString, struct FString> ParamsMap); // Function INTLPlugin.INTLSDKAPI.ReportPayStep // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8320
	void ReportLoginStep(int32_t Step, struct FString StepName, bool Result, int32_t ErrorCode, struct TMap<struct FString, struct FString> ParamsMap); // Function INTLPlugin.INTLSDKAPI.ReportLoginStep // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd8070
	void ReportException(int32_t Type, struct FString ExceptionName, struct FString ExceptionMsg, struct FString ExceptionStack, struct TMap<struct FString, struct FString> ExtInfo); // Function INTLPlugin.INTLSDKAPI.ReportException // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7d30
	void ReportEvent(struct FString EventName, struct TMap<struct FString, struct FString> ParamsMap, struct FString SpecificChannel, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ReportEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7a30
	void ReportCustomEventStep(struct FString EventName, int32_t Step, struct FString StepName, bool Result, int32_t ErrorCode, struct TMap<struct FString, struct FString> ParamsMap); // Function INTLPlugin.INTLSDKAPI.ReportCustomEventStep // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd76e0
	void ReportBinary(struct FString EventName, struct FString Data, int32_t Length, struct FString SpecificChannel); // Function INTLPlugin.INTLSDKAPI.ReportBinary // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd74b0
	void RemoveObserver(struct TScriptInterface<None> Observer); // Function INTLPlugin.INTLSDKAPI.RemoveObserver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd7420
	void RegisterPush(struct FString Channel, struct FString Account); // Function INTLPlugin.INTLSDKAPI.RegisterPush // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd72b0
	bool Register(struct FString Account, struct FString Password, struct FString VerifyCode, struct FString PhoneAreaCode, struct FINTLAccountProfile userProfile); // Function INTLPlugin.INTLSDKAPI.Register // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6e00
	bool QueryVerifyCodeStatus(struct FString Account, struct FString VerifyCode, enum class EVerifyCodeType CodeType, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryVerifyCodeStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6b30
	void QueryUserNameStatus(struct FString UserName); // Function INTLPlugin.INTLSDKAPI.QueryUserNameStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6aa0
	bool QueryUserInfo(); // Function INTLPlugin.INTLSDKAPI.QueryUserInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6a70
	bool QueryRegisterStatus(struct FString Account, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryRegisterStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6860
	bool QueryIsReceiveEmail(struct FString Account, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryIsReceiveEmail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6650
	void QueryIsEEA(struct FString Region); // Function INTLPlugin.INTLSDKAPI.QueryIsEEA // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6570
	void QueryIpByHost(struct FString Host); // Function INTLPlugin.INTLSDKAPI.QueryIpByHost // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6490
	void QueryIDToken(); // Function INTLPlugin.INTLSDKAPI.QueryIDToken // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6470
	bool QueryFriends(enum class EINTLLoginChannel Channel, int32_t Page, int32_t Count, bool IsInGame, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryFriends // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6280
	void QueryDirTree(int32_t TreeId); // Function INTLPlugin.INTLSDKAPI.QueryDirTree // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6200
	void QueryDirNode(int32_t TreeId, int32_t NodeId); // Function INTLPlugin.INTLSDKAPI.QueryDirNode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6140
	void QueryDeviceLevel(); // Function INTLPlugin.INTLSDKAPI.QueryDeviceLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6120
	void QueryDataProtectionAcceptance(); // Function INTLPlugin.INTLSDKAPI.QueryDataProtectionAcceptance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd6100
	bool QueryCanBind(int32_t ChannelID, int32_t AccountPlatType, struct FString Account, struct FString PhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.QueryCanBind // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd5e80
	bool QueryActiveUser(); // Function INTLPlugin.INTLSDKAPI.QueryActiveUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd5e50
	void PostNetworkLatencyInSession(int32_t LatencyMs); // Function INTLPlugin.INTLSDKAPI.PostNetworkLatencyInSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd5dd0
	void PostFrameTimeInSession(float DeltaSeconds); // Function INTLPlugin.INTLSDKAPI.PostFrameTimeInSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd5d50
	void OpenUrl(struct FString URL, enum class EINTLWebViewOrientation ScreenOrientation, bool FullScreenEnable, bool EncryptEnable, bool SystemBrowserEnable, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.OpenUrl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd5ac0
	bool OnTickEvent(); // Function INTLPlugin.INTLSDKAPI.OnTickEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd5180
	struct FString NoticeRequestData(struct FString Region, struct FString LangType, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.NoticeRequestData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd06f0
	bool ModifyProfile(struct FINTLAccountProfile userProfile); // Function INTLPlugin.INTLSDKAPI.ModifyProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd04a0
	void ModifyDataProtectionAcceptance(struct FString PPVersion, struct FString TOSVersion); // Function INTLPlugin.INTLSDKAPI.ModifyDataProtectionAcceptance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbd0330
	bool ModifyAccountWithVerifyCode(struct FString OldAccount, struct FString OldAccountVerifyCode, struct FString OldPhoneAreaCode, struct FString NewAccount, struct FString NewAccountVerifyCode, struct FString NewPhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ModifyAccountWithVerifyCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcfed0
	bool ModifyAccountWithPassword(struct FString OldAccount, struct FString OldPhoneAreaCode, struct FString Password, struct FString NewAccount, struct FString NewAccountVerifyCode, struct FString NewPhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ModifyAccountWithPassword // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcfa70
	bool ModifyAccountWithLoginState(struct FString OldPhoneAreaCode, struct FString NewAccount, struct FString NewAccountVerifyCode, struct FString NewPhoneAreaCode, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.ModifyAccountWithLoginState // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcf750
	void MarkSessionLoad(struct FString SessionName, struct FString extra_json); // Function INTLPlugin.INTLSDKAPI.MarkSessionLoad // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcf5e0
	void MarkSessionClosed(); // Function INTLPlugin.INTLSDKAPI.MarkSessionClosed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcf5c0
	bool Logout(enum class EINTLLoginChannel Channel); // Function INTLPlugin.INTLSDKAPI.Logout // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcf540
	bool LoginWithVerifyCode(enum class EINTLLoginChannel Channel, struct FString Account, struct FString Password, struct FString VerifyCode, struct FString PhoneAreaCode, struct FString PermissionList); // Function INTLPlugin.INTLSDKAPI.LoginWithVerifyCode // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcf1e0
	bool LoginWithPassword(enum class EINTLLoginChannel Channel, struct FString Account, struct FString Password, struct FString PhoneAreaCode, struct FString PermissionList); // Function INTLPlugin.INTLSDKAPI.LoginWithPassword // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcef10
	bool LoginWithMappedChannel(enum class EINTLLoginChannel Channel, struct FString LoginMode, struct FString Permissions); // Function INTLPlugin.INTLSDKAPI.LoginWithMappedChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbced60
	bool LoginWithChannel(enum class EINTLLoginChannel Channel, struct FString LoginMode); // Function INTLPlugin.INTLSDKAPI.LoginWithChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcec30
	bool LoginWithBoundChannel(enum class EINTLLoginChannel Channel, struct FString LoginMode); // Function INTLPlugin.INTLSDKAPI.LoginWithBoundChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbceb00
	bool Login(enum class EINTLLoginChannel Channel, struct FString Permissions, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.Login // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce950
	void LogCrashInfo(enum class EINTLCrashLevel Level, struct FString Tag, struct FString Log); // Function INTLPlugin.INTLSDKAPI.LogCrashInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce7b0
	void LoadCutoutData(); // Function INTLPlugin.INTLSDKAPI.LoadCutoutData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce790
	void LaunchLoginUI(); // Function INTLPlugin.INTLSDKAPI.LaunchLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce770
	bool LaunchCustomerUI(struct FINTLCustomerUserProfile userProfile); // Function INTLPlugin.INTLSDKAPI.LaunchCustomerUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbce120
	bool IsAppInstalled(struct FString Channel, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.IsAppInstalled // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcdfb0
	void Init(); // Function INTLPlugin.INTLSDKAPI.Init // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcdf90
	struct FString GetSDKVersion(); // Function INTLPlugin.INTLSDKAPI.GetSDKVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcdf10
	struct FString GetIpByHost(struct FString Host); // Function INTLPlugin.INTLSDKAPI.GetIpByHost // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcdde0
	struct FString GetInstanceID(struct FString Channel); // Function INTLPlugin.INTLSDKAPI.GetInstanceID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcdcb0
	bool GetIDTokenResult(struct FINTLIDTokenResult jwtRet); // Function INTLPlugin.INTLSDKAPI.GetIDTokenResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbcdbb0
	struct FString GetEncryptUrl(struct FString URL); // Function INTLPlugin.INTLSDKAPI.GetEncryptUrl // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcda80
	int32_t GetDeviceLevel(); // Function INTLPlugin.INTLSDKAPI.GetDeviceLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcda50
	struct FString GetCurrentResourceVersion(); // Function INTLPlugin.INTLSDKAPI.GetCurrentResourceVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd9d0
	struct FString GetCurrentAppVersion(); // Function INTLPlugin.INTLSDKAPI.GetCurrentAppVersion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd950
	struct FString GetConfig(struct FString Key, struct FString DefaultVal, struct FString Project); // Function INTLPlugin.INTLSDKAPI.GetConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd700
	bool GetAuthResult(struct FINTLAuthResult LoginRet); // Function INTLPlugin.INTLSDKAPI.GetAuthResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbcd4f0
	struct FString ExtendInvoke(enum class EINTLLoginChannel Channel, struct FString ExtendMethodName, struct FString ParamsJson); // Function INTLPlugin.INTLSDKAPI.ExtendInvoke // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd300
	int32_t DownloadOptionalRepoFiles(int32_t RepoID, struct TArray<struct FString> FilesPath); // Function INTLPlugin.INTLSDKAPI.DownloadOptionalRepoFiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbcd1f0
	void DismissLoginUI(bool Canceled); // Function INTLPlugin.INTLSDKAPI.DismissLoginUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd170
	void DeleteTag(struct FString Channel, struct FString Tag); // Function INTLPlugin.INTLSDKAPI.DeleteTag // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcd000
	void DeleteLocalNotifications(struct FString Key); // Function INTLPlugin.INTLSDKAPI.DeleteLocalNotifications // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbccf20
	void DeleteAccount(struct FString Channel, struct FString Account); // Function INTLPlugin.INTLSDKAPI.DeleteAccount // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbccdb0
	bool ComplianceSetUserProfile(struct FString GameID, struct FString OpenId, struct FString Token, int32_t ChannelID, struct FString Region); // Function INTLPlugin.INTLSDKAPI.ComplianceSetUserProfile // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbccae0
	void ComplianceSetParentCertificateStatus(enum class EComplianceParentCertificateStatus Status); // Function INTLPlugin.INTLSDKAPI.ComplianceSetParentCertificateStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcca70
	void ComplianceSetEUAgreeStatus(enum class EComplianceAgreeStatus Status); // Function INTLPlugin.INTLSDKAPI.ComplianceSetEUAgreeStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcca00
	void ComplianceSetAdulthood(enum class EComplianceAgeStatus Status); // Function INTLPlugin.INTLSDKAPI.ComplianceSetAdulthood // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc990
	void ComplianceSendEmail(struct FString Email, struct FString UserName); // Function INTLPlugin.INTLSDKAPI.ComplianceSendEmail // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc820
	void ComplianceQueryUserStatus(); // Function INTLPlugin.INTLSDKAPI.ComplianceQueryUserStatus // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc800
	void ComplianceCommitBirthday(int32_t BirthdayYear, int32_t BirthdayMonth, int32_t BirthdayDay); // Function INTLPlugin.INTLSDKAPI.ComplianceCommitBirthday // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc700
	void ClearLocalNotifications(struct FString Channel); // Function INTLPlugin.INTLSDKAPI.ClearLocalNotifications // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc620
	struct TArray<struct FINTLUpdateOptionalRepoFilesStatus> CheckOptionalRepoFiles(int32_t RepoID, struct TArray<struct FString> FilesPath); // Function INTLPlugin.INTLSDKAPI.CheckOptionalRepoFiles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xbcc480
	bool CheckActiveUser(); // Function INTLPlugin.INTLSDKAPI.CheckActiveUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc450
	void CallJS(struct FString JsonJsParam); // Function INTLPlugin.INTLSDKAPI.CallJS // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc370
	bool BuildMapWithLoggedinChannel(); // Function INTLPlugin.INTLSDKAPI.BuildMapWithLoggedinChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc340
	bool BindWithLoggedinChannel(); // Function INTLPlugin.INTLSDKAPI.BindWithLoggedinChannel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc310
	bool Bind(enum class EINTLLoginChannel Channel, struct FString Permissions, struct FString ExtraJson); // Function INTLPlugin.INTLSDKAPI.Bind // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc160
	bool AutoLogin(); // Function INTLPlugin.INTLSDKAPI.AutoLogin // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc130
	void AddObserver(struct TScriptInterface<None> Observer); // Function INTLPlugin.INTLSDKAPI.AddObserver // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcc0a0
	void AddLocalNotificationIOS(struct FString Channel, struct FINTLLocalNotificationIOS LocalNotification); // Function INTLPlugin.INTLSDKAPI.AddLocalNotificationIOS // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcbe00
	void AddLocalNotification(struct FString Channel, struct FINTLLocalNotification LocalNotification); // Function INTLPlugin.INTLSDKAPI.AddLocalNotification // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbcbab0
};

// Class INTLPlugin.INTLUtility
// Size: 0x28 (Inherited: 0x28)
struct UINTLUtility : UBlueprintFunctionLibrary {

	bool Regular(struct FString Str, struct FString Reg); // Function INTLPlugin.INTLUtility.Regular // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbda4d0
	int32_t RefreshCurToastCnt(int32_t ChangeCnt); // Function INTLPlugin.INTLUtility.RefreshCurToastCnt // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbda440
	int32_t GetNewToastOrder(); // Function INTLPlugin.INTLUtility.GetNewToastOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbda410
	void ForceCrash(); // Function INTLPlugin.INTLUtility.ForceCrash // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xbda3f0
};

