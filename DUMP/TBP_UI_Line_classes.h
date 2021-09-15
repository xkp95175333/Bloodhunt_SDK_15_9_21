// WidgetBlueprintGeneratedClass TBP_UI_Line.TBP_UI_Line_C
// Size: 0x2b2 (Inherited: 0x260)
struct UTBP_UI_Line_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Left; // 0x268(0x08)
	struct UImage* Middle; // 0x270(0x08)
	struct UImage* Right; // 0x278(0x08)
	struct USizeBox* SizeContainer; // 0x280(0x08)
	struct UTexture2D* LeftTexture; // 0x288(0x08)
	struct UTexture2D* RightTexture; // 0x290(0x08)
	struct UTexture2D* Texture; // 0x298(0x08)
	struct FVector2D MarginPixels; // 0x2a0(0x08)
	float OverrideMiddleWidth; // 0x2a8(0x04)
	float OverrideMiddleHeight; // 0x2ac(0x04)
	bool FlipRight; // 0x2b0(0x01)
	bool FlipLeft; // 0x2b1(0x01)

	void CalculateMargin(); // Function TBP_UI_Line.TBP_UI_Line_C.CalculateMargin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupLine(); // Function TBP_UI_Line.TBP_UI_Line_C.SetupLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Line.TBP_UI_Line_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Line.TBP_UI_Line_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Line(int32_t EntryPoint); // Function TBP_UI_Line.TBP_UI_Line_C.ExecuteUbergraph_TBP_UI_Line // (Final|UbergraphFunction) // @ game+0x16c0340
};

