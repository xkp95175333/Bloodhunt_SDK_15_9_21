// WidgetBlueprintGeneratedClass TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C
// Size: 0x32e (Inherited: 0x320)
struct UTBP_UI_InWorldProjectionDashBase_C : UTBP_UI_InWorldIconBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	float DistanceToPlayer; // 0x328(0x04)
	bool bIsFadingOut; // 0x32c(0x01)
	bool bUpdateOnScreenOffset; // 0x32d(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateOffScreenState(float InRotationDegrees); // Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.UpdateOffScreenState // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnScreenStateChanged(bool bInIsOnScreen); // Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.OnScreenStateChanged // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase(int32_t EntryPoint); // Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

