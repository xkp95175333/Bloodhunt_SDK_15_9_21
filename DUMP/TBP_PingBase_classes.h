// BlueprintGeneratedClass TBP_PingBase.TBP_PingBase_C
// Size: 0x121 (Inherited: 0xf0)
struct UTBP_PingBase_C : UTigerPingBase {
	struct FText PingCancelText; // 0xf0(0x18)
	struct UAkAudioEvent* PingVoiceInterested; // 0x108(0x08)
	struct UAkAudioEvent* PingVoiceNotInterested; // 0x110(0x08)
	struct UAkAudioEvent* PingVoiceCancel; // 0x118(0x08)
	bool bShouldDisplayCancelNotification; // 0x120(0x01)

	void GetNotificationVoiceAudioEvent(struct FTigerPingContext InContext, struct UAkAudioEvent* OutAudioEvent); // Function TBP_PingBase.TBP_PingBase_C.GetNotificationVoiceAudioEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void GetCancelPingText(struct FTigerPingContext InPingContext, struct FText Return Value Ping Cancel Text, struct FTigerPingIconData Return Value Ping Icon); // Function TBP_PingBase.TBP_PingBase_C.GetCancelPingText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetStandardResponseText(bool bInIsInterested, struct FText InPingName, struct FText Result); // Function TBP_PingBase.TBP_PingBase_C.GetStandardResponseText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	struct FTigerPingNotificationUIData GetResponseText(struct FTigerPingContext InContext, bool bInIsInterested); // Function TBP_PingBase.TBP_PingBase_C.GetResponseText // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FTigerPingNotificationUIData GetNotificationUIData(struct FTigerPingContext InContext); // Function TBP_PingBase.TBP_PingBase_C.GetNotificationUIData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

