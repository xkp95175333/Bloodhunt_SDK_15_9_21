// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C
// Size: 0x2e0 (Inherited: 0x280)
struct UTBP_UI_ArchetypeInfo_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* ChangedClan; // 0x288(0x08)
	struct UImage* FadeOutOverlay; // 0x290(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x298(0x08)
	struct UTBP_ArchetypeSelect_PowersWithVideoPreviews_C* PowersWithVideoPreviews; // 0x2a0(0x08)
	struct UMediaPlayer* Media Player; // 0x2a8(0x08)
	struct UTigerPlayerClanData* ClanData; // 0x2b0(0x08)
	struct UTigerPowerKit* ArchetypeData; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnVideoStarted; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnVideoEnded; // 0x2d0(0x10)

	void SetCharacterArchetype(struct UTigerPowerKit* DesiredArchetype); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.SetCharacterArchetype // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateClanInfo(struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.UpdateClanInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ChangeClan(struct UTigerPlayerClanData* ClanData, bool bAnimateChange, struct UTigerPowerKit* ArchetypeData); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ChangeClan // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Toggle UI Visibility(); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.Toggle UI Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.WidgetAnimationEvt_ChangedClan_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature(); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_0_OnVideoStarted__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature(); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.BndEvt__PowersWithVideoPreviews_K2Node_ComponentBoundEvent_1_OnVideoEnded__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void StopVideo(); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.StopVideo // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ArchetypeInfo(int32_t EntryPoint); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.ExecuteUbergraph_TBP_UI_ArchetypeInfo // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnVideoEnded__DelegateSignature(); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnVideoStarted__DelegateSignature(); // Function TBP_UI_ArchetypeInfo.TBP_UI_ArchetypeInfo_C.OnVideoStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

