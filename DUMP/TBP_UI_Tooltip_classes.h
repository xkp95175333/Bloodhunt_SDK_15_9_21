// WidgetBlueprintGeneratedClass TBP_UI_Tooltip.TBP_UI_Tooltip_C
// Size: 0x300 (Inherited: 0x280)
struct UTBP_UI_Tooltip_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerRichTextBlock* Description; // 0x288(0x08)
	struct UTBP_UI_Box_C* TBP_UI_Box; // 0x290(0x08)
	struct UTBP_UI_Line_C* TBP_UI_Line; // 0x298(0x08)
	struct UTextBlock* TextBlock_1; // 0x2a0(0x08)
	float Time Since Set; // 0x2a8(0x04)
	float Current Opacity; // 0x2ac(0x04)
	struct UTigerItemAsset* Item; // 0x2b0(0x08)
	struct FText AttachedElementName; // 0x2b8(0x18)
	struct UUserWidget* AttachedElement; // 0x2d0(0x08)
	struct FText AttachedElementDescription; // 0x2d8(0x18)
	struct FLinearColor AttachedElementNameColor; // 0x2f0(0x10)

	void Construct(); // Function TBP_UI_Tooltip.TBP_UI_Tooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_Tooltip.TBP_UI_Tooltip_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Tooltip(int32_t EntryPoint); // Function TBP_UI_Tooltip.TBP_UI_Tooltip_C.ExecuteUbergraph_TBP_UI_Tooltip // (Final|UbergraphFunction) // @ game+0x16c0340
};

