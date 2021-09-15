// WidgetBlueprintGeneratedClass TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C
// Size: 0x320 (Inherited: 0x2c8)
struct UTBP_UI_InWorldIconBase_C : UTigerInWorldWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* OffscreenAnimation; // 0x2d0(0x08)
	struct UCanvasPanel* ContentCanvas; // 0x2d8(0x08)
	struct UImage* OffScreenDirectionIndicator; // 0x2e0(0x08)
	struct UCanvasPanel* OffscreenDirectionParent; // 0x2e8(0x08)
	struct UTextBlock* OffScreenMeterText; // 0x2f0(0x08)
	struct UCanvasPanel* OnScreen; // 0x2f8(0x08)
	float CONFIG_OffscreenIconOffset; // 0x300(0x04)
	struct FTS_InWorldIconDistanceScaling CONFIG_DistanceScaling; // 0x304(0x1c)

	void UpdatePlayerDistanceForTextWidget(struct UTextBlock* InTextWidget); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceForTextWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MoveWidgetsToOffscreenPositions(float InAngle, struct UWidget* InTranslationWidget, struct UWidget* InRotationWidget, struct UWidget* InInverseTranslationWidget); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.MoveWidgetsToOffscreenPositions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateDistanceWidgetScaling(struct TArray<struct UWidget*> InWidgets, struct FTS_InWorldIconDistanceScaling InDistanceScalingParams); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateDistanceWidgetScaling // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateOffScreenWidgets(float InAngle); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetVerticalIconOffset(float OutIconOffset); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetVerticalIconOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetHorizontalIconOffset(float OutIconOffset); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetHorizontalIconOffset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateVisuals(bool bInIsOnScreen); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePlayerDistance(); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateOffScreenState(float InRotationDegrees); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenState // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnScreenStateChanged(bool bInIsOnScreen); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnScreenStateChanged // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInnerWidgetChanged(); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnInnerWidgetChanged // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdatePlayerDistanceScalingWidgets(); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceScalingWidgets // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InWorldIconBase(int32_t EntryPoint); // Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.ExecuteUbergraph_TBP_UI_InWorldIconBase // (Final|UbergraphFunction) // @ game+0x16c0340
};

