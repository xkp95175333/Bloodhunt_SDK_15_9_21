// WidgetBlueprintGeneratedClass TBP_UI_FullscreenImage.TBP_UI_FullscreenImage_C
// Size: 0x28d (Inherited: 0x260)
struct UTBP_UI_FullscreenImage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* ImageMaterial; // 0x270(0x08)
	struct USizeBox* SizeBox_3; // 0x278(0x08)
	struct UTexture* Image; // 0x280(0x08)
	float FadeDistance; // 0x288(0x04)
	enum class ESlateVisibility BackdropVisibility; // 0x28c(0x01)

	void SetImage(struct UTexture* Image); // Function TBP_UI_FullscreenImage.TBP_UI_FullscreenImage_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_FullscreenImage.TBP_UI_FullscreenImage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_FullscreenImage.TBP_UI_FullscreenImage_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_FullscreenImage(int32_t EntryPoint); // Function TBP_UI_FullscreenImage.TBP_UI_FullscreenImage_C.ExecuteUbergraph_TBP_UI_FullscreenImage // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

