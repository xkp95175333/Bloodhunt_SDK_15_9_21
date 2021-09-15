// WidgetBlueprintGeneratedClass TBP_UI_Gradient.TBP_UI_Gradient_C
// Size: 0x294 (Inherited: 0x260)
struct UTBP_UI_Gradient_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Gradient_image; // 0x268(0x08)
	struct UMaterialInstanceDynamic* Gradient_Material_Instance; // 0x270(0x08)
	bool Is Horizontal; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float GradientMultiplier; // 0x27c(0x04)
	float GradientRotation; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UTexture2D* Horizontal_Gradient_Texture; // 0x288(0x08)
	float Gradient Scale; // 0x290(0x04)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Gradient.TBP_UI_Gradient_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Gradient.TBP_UI_Gradient_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Gradient(int32_t EntryPoint); // Function TBP_UI_Gradient.TBP_UI_Gradient_C.ExecuteUbergraph_TBP_UI_Gradient // (Final|UbergraphFunction) // @ game+0x16c0340
};

