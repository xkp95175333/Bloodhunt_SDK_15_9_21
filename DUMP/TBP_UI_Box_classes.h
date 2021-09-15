// WidgetBlueprintGeneratedClass TBP_UI_Box.TBP_UI_Box_C
// Size: 0x3a8 (Inherited: 0x260)
struct UTBP_UI_Box_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* Bottom; // 0x270(0x08)
	struct UImage* BottomLeft; // 0x278(0x08)
	struct UImage* BottomRight; // 0x280(0x08)
	struct UNamedSlot* Content; // 0x288(0x08)
	struct UCanvasPanel* ContentCanvas; // 0x290(0x08)
	struct UImage* Left; // 0x298(0x08)
	struct UImage* Right; // 0x2a0(0x08)
	struct UImage* Top; // 0x2a8(0x08)
	struct UImage* TopLeft; // 0x2b0(0x08)
	struct UImage* TopRight; // 0x2b8(0x08)
	struct UTexture2D* TopLeftTexture; // 0x2c0(0x08)
	struct UTexture2D* TopRightTexture; // 0x2c8(0x08)
	struct UTexture2D* TopTexture; // 0x2d0(0x08)
	struct UTexture2D* LeftTexture; // 0x2d8(0x08)
	struct UTexture2D* RightTexture; // 0x2e0(0x08)
	struct UTexture2D* BottomLeftTexture; // 0x2e8(0x08)
	struct UTexture2D* BottomRightTexture; // 0x2f0(0x08)
	struct UTexture2D* BottomTexture; // 0x2f8(0x08)
	struct FMargin MarginPixels; // 0x300(0x10)
	struct FVector2D PaddingPercent; // 0x310(0x08)
	struct FSlateBrush BackgroundBrush; // 0x318(0x88)
	struct FVector2D OverrideSize; // 0x3a0(0x08)

	void ShouldSetSize(bool ShouldSetSize); // Function TBP_UI_Box.TBP_UI_Box_C.ShouldSetSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetBorderOpacity(float InOpacity); // Function TBP_UI_Box.TBP_UI_Box_C.SetBorderOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetBorderTexture(struct UImage* ImageToSet, struct UTexture2D* TextureToUse); // Function TBP_UI_Box.TBP_UI_Box_C.SetBorderTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CalculateMargin(); // Function TBP_UI_Box.TBP_UI_Box_C.CalculateMargin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupBorder(); // Function TBP_UI_Box.TBP_UI_Box_C.SetupBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Box.TBP_UI_Box_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Box.TBP_UI_Box_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Box(int32_t EntryPoint); // Function TBP_UI_Box.TBP_UI_Box_C.ExecuteUbergraph_TBP_UI_Box // (Final|UbergraphFunction) // @ game+0x16c0340
};

