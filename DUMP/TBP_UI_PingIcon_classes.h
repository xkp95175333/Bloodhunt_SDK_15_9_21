// WidgetBlueprintGeneratedClass TBP_UI_PingIcon.TBP_UI_PingIcon_C
// Size: 0x318 (Inherited: 0x2d4)
struct UTBP_UI_PingIcon_C : UTBP_UI_PingInstance_Inner_C {
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* OnPingAnim; // 0x2e0(0x08)
	struct UImage* BG_Dot_Border; // 0x2e8(0x08)
	struct UImage* BG_Dot_Dark; // 0x2f0(0x08)
	struct UOverlay* Icon_Overlay; // 0x2f8(0x08)
	struct UImage* IconWidget; // 0x300(0x08)
	struct UImage* IconWidget_Animated; // 0x308(0x08)
	struct FVector2D ImageSizeMultiplier; // 0x310(0x08)

	void SetPingIcons(struct UTexture2D* BG Texture, struct UTexture2D* Border Texture, struct FVector2D Ping Size, struct FVector2D Icon Offset, struct FVector2D ImageSizeMultiplier); // Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.SetPingIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetHorizontalIconOffset(float OutIconOffset); // Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetHorizontalIconOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void GetVerticalIconOffset(float OutIconOffset); // Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.GetVerticalIconOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void OnPingDataUpdated(struct UTigerPingClientData* InPingData); // Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.OnPingDataUpdated // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PingIcon(int32_t EntryPoint); // Function TBP_UI_PingIcon.TBP_UI_PingIcon_C.ExecuteUbergraph_TBP_UI_PingIcon // (Final|UbergraphFunction) // @ game+0x16c0340
};

