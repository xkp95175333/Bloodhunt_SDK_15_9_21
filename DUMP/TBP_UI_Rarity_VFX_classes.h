// WidgetBlueprintGeneratedClass TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C
// Size: 0x29c (Inherited: 0x260)
struct UTBP_UI_Rarity_VFX_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Rarity_Image; // 0x268(0x08)
	struct FLinearColor Rarity_Color; // 0x270(0x10)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x280(0x08)
	struct UTexture2D* Rarity_Texture; // 0x288(0x08)
	float Rarity_Intensity; // 0x290(0x04)
	struct FVector2D AspectRatio; // 0x294(0x08)

	void Construct(); // Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetGradientTexture(struct UTexture2D* Texture); // Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetGradientTexture // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetColor(struct FLinearColor Color); // Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetColor // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetIntensity(float Intentsity); // Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetIntensity // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetAspectRatio(struct FVector2D AspectRatio); // Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.SetAspectRatio // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Rarity_VFX(int32_t EntryPoint); // Function TBP_UI_Rarity_VFX.TBP_UI_Rarity_VFX_C.ExecuteUbergraph_TBP_UI_Rarity_VFX // (Final|UbergraphFunction) // @ game+0x16c0340
};

