// WidgetBlueprintGeneratedClass TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C
// Size: 0x388 (Inherited: 0x37c)
struct UTBP_UI_ResourceBar_Shield_C : UTBP_UI_ResourceBar_C {
	char pad_37C[0x4]; // 0x37c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)

	struct FLinearColor GetLockedColor(); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetLockedColor // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	struct FLinearColor GetEmptyColor(); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetEmptyColor // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	struct FLinearColor GetFilledColor(); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetFilledColor // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	float GetRecentResourcesLost(); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetRecentResourcesLost // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	float GetMaxResources(); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetMaxResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	float GetCurrentResources(); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.GetCurrentResources // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnShieldChanged(float InNewHealth, float InNewHealthPercentage); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.OnShieldChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ResourceBar_Shield(int32_t EntryPoint); // Function TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C.ExecuteUbergraph_TBP_UI_ResourceBar_Shield // (Final|UbergraphFunction) // @ game+0x16c0340
};

