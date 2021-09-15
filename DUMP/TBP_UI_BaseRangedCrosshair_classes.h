// WidgetBlueprintGeneratedClass TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C
// Size: 0x380 (Inherited: 0x2b8)
struct UTBP_UI_BaseRangedCrosshair_C : UTigerWeaponCrosshairWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCanvasPanel* CanvasParent; // 0x2c0(0x08)
	struct UImage* ScopeVignetteImage; // 0x2c8(0x08)
	struct TArray<struct UTBP_UI_Image_C*> Crosshairs; // 0x2d0(0x10)
	struct FSlateBrush ScopeVignette; // 0x2e0(0x88)
	bool bShouldShowScopeVignette; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct TArray<struct UTBP_UI_Image_C*> ScalingCrosshairs; // 0x370(0x10)

	float GetBrushAspect(struct FSlateBrush SlateBrush); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetBrushAspect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetFov(float OutFov); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetFov // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetupScalingCrosshairImage(struct FTigerWeaponScalingCrosshairSlot ScalingCrosshairSlot); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScalingCrosshairImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupCrosshairImage(struct FTigerWeaponCrosshairSlot TigerWeaponCrosshairSlot); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupCrosshairImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupScopeVignette(); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScopeVignette // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	float GetAspectRatio(); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetAspectRatio // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetCrosshairScale(float InScreenSpaceSpread, float InAspectRatio, struct FVector2D Scale); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetCrosshairScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateCrosshairPositions(); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.UpdateCrosshairPositions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BaseRangedCrosshair(int32_t EntryPoint); // Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.ExecuteUbergraph_TBP_UI_BaseRangedCrosshair // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

