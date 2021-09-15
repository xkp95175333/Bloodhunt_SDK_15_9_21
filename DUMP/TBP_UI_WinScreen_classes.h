// WidgetBlueprintGeneratedClass TBP_UI_WinScreen.TBP_UI_WinScreen_C
// Size: 0x364 (Inherited: 0x260)
struct UTBP_UI_WinScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Victory_VFX; // 0x268(0x08)
	struct UWidgetAnimation* Victory_FadeOut; // 0x270(0x08)
	struct UWidgetAnimation* Victory_FadeIn; // 0x278(0x08)
	struct UTigerRichTextBlock* AnarchsText; // 0x280(0x08)
	struct UImage* Bottom_Curve_Left; // 0x288(0x08)
	struct UImage* Bottom_Curve_Right; // 0x290(0x08)
	struct UCanvasPanel* CanvasPanel_Win; // 0x298(0x08)
	struct UImage* Dot_Left; // 0x2a0(0x08)
	struct UImage* Dot_Left_GLOW; // 0x2a8(0x08)
	struct UImage* Dot_Right; // 0x2b0(0x08)
	struct UImage* Dot_Right_GLOW; // 0x2b8(0x08)
	struct UImage* Flashbang_01; // 0x2c0(0x08)
	struct UImage* Flashbang_02; // 0x2c8(0x08)
	struct UImage* Inner_Arch_Left; // 0x2d0(0x08)
	struct UImage* Inner_Arch_Right; // 0x2d8(0x08)
	struct UImage* Left_StandardArrow; // 0x2e0(0x08)
	struct UImage* Lower_Diamond; // 0x2e8(0x08)
	struct UImage* Middle_LowerArrow; // 0x2f0(0x08)
	struct UImage* Middle_StandardArrow; // 0x2f8(0x08)
	struct UImage* Right_StandardArrow; // 0x300(0x08)
	struct UImage* Side_Arrow_Left; // 0x308(0x08)
	struct UImage* Side_Arrow_Right; // 0x310(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x318(0x08)
	struct UImage* Top_Arch; // 0x320(0x08)
	struct UImage* Top_Arrow; // 0x328(0x08)
	struct UImage* Top_Curve_Left; // 0x330(0x08)
	struct UImage* Top_Curve_Right; // 0x338(0x08)
	struct UImage* Top_StandardArrow; // 0x340(0x08)
	struct UTigerRichTextBlock* VictoryText; // 0x348(0x08)
	struct UImage* Win_Flash_VFX; // 0x350(0x08)
	struct UImage* Win_VFX; // 0x358(0x08)
	float Timer; // 0x360(0x04)

	void Construct(); // Function TBP_UI_WinScreen.TBP_UI_WinScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_WinScreen.TBP_UI_WinScreen_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_WinScreen.TBP_UI_WinScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_WinScreen(int32_t EntryPoint); // Function TBP_UI_WinScreen.TBP_UI_WinScreen_C.ExecuteUbergraph_TBP_UI_WinScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

