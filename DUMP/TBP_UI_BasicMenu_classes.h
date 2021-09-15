// WidgetBlueprintGeneratedClass TBP_UI_BasicMenu.TBP_UI_BasicMenu_C
// Size: 0x2b0 (Inherited: 0x260)
struct UTBP_UI_BasicMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_1; // 0x268(0x08)
	struct UImage* Image_3; // 0x270(0x08)
	struct UTextBlock* MenuHeader; // 0x278(0x08)
	struct UNamedSlot* PutMenuContentHere; // 0x280(0x08)
	struct UTBP_UI_Box_C* TBP_UI_Box; // 0x288(0x08)
	struct UTBP_UI_Line_C* TBP_UI_Line; // 0x290(0x08)
	struct FText MenuTitle; // 0x298(0x18)

	void SetHeaderText(struct FText InText); // Function TBP_UI_BasicMenu.TBP_UI_BasicMenu_C.SetHeaderText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_BasicMenu.TBP_UI_BasicMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_BasicMenu.TBP_UI_BasicMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BasicMenu(int32_t EntryPoint); // Function TBP_UI_BasicMenu.TBP_UI_BasicMenu_C.ExecuteUbergraph_TBP_UI_BasicMenu // (Final|UbergraphFunction) // @ game+0x16c0340
};

