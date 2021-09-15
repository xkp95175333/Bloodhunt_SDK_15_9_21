// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C
// Size: 0x2f8 (Inherited: 0x280)
struct UTBP_UI_BloodTrackPassiveTooltip_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerRichTextBlock* Description; // 0x288(0x08)
	struct UCanvasPanel* DropPrompt; // 0x290(0x08)
	struct UImage* Image_38; // 0x298(0x08)
	struct UImage* Image_85; // 0x2a0(0x08)
	struct UTextBlock* NameText; // 0x2a8(0x08)
	struct UBorder* OverlayBorder; // 0x2b0(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad; // 0x2b8(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard; // 0x2c0(0x08)
	struct UBorder* ToolTip; // 0x2c8(0x08)
	struct UTigerBloodTrackPassiveConfig* Passive; // 0x2d0(0x08)
	bool HidePrompt; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FText HoldAction; // 0x2e0(0x18)

	void HideDropPrompt(bool Hide); // Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.HideDropPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPassive(struct UTigerBloodTrackPassiveConfig* New Passive); // Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.SetPassive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodTrackPassiveTooltip(int32_t EntryPoint); // Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.ExecuteUbergraph_TBP_UI_BloodTrackPassiveTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

