// WidgetBlueprintGeneratedClass TBP_UI_VerticalLine.TBP_UI_VerticalLine_C
// Size: 0x2a0 (Inherited: 0x260)
struct UTBP_UI_VerticalLine_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Left; // 0x268(0x08)
	struct UImage* Middle; // 0x270(0x08)
	struct UImage* Right; // 0x278(0x08)
	struct UTexture2D* LeftTexture; // 0x280(0x08)
	struct UTexture2D* RightTexture; // 0x288(0x08)
	struct UTexture2D* Texture; // 0x290(0x08)
	struct FVector2D MarginPixels; // 0x298(0x08)

	void CalculateMargin(); // Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.CalculateMargin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupLine(); // Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.SetupLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_VerticalLine(int32_t EntryPoint); // Function TBP_UI_VerticalLine.TBP_UI_VerticalLine_C.ExecuteUbergraph_TBP_UI_VerticalLine // (Final|UbergraphFunction) // @ game+0x16c0340
};

