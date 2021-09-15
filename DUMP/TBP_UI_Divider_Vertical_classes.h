// WidgetBlueprintGeneratedClass TBP_UI_Divider_Vertical.TBP_UI_Divider_Vertical_C
// Size: 0x2c4 (Inherited: 0x260)
struct UTBP_UI_Divider_Vertical_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Decoration; // 0x268(0x08)
	struct UImage* Left_Line; // 0x270(0x08)
	struct UImage* LeftArrow_2; // 0x278(0x08)
	struct UImage* Line_2; // 0x280(0x08)
	struct UOverlay* Line_Overlay; // 0x288(0x08)
	struct UWidgetSwitcher* LineStyleIndex; // 0x290(0x08)
	struct UImage* RightArrow_2; // 0x298(0x08)
	struct UImage* RightLine; // 0x2a0(0x08)
	struct USizeBox* SizeBox_Override; // 0x2a8(0x08)
	float ArrowSize; // 0x2b0(0x04)
	bool EnableMiddleDecoration; // 0x2b4(0x01)
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct UTexture2D* ArrowTexture; // 0x2b8(0x08)
	float LineThickness; // 0x2c0(0x04)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Divider_Vertical.TBP_UI_Divider_Vertical_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Divider_Vertical.TBP_UI_Divider_Vertical_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Divider_Vertical(int32_t EntryPoint); // Function TBP_UI_Divider_Vertical.TBP_UI_Divider_Vertical_C.ExecuteUbergraph_TBP_UI_Divider_Vertical // (Final|UbergraphFunction) // @ game+0x16c0340
};

