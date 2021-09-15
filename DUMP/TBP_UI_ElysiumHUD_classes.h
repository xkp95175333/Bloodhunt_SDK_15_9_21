// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C
// Size: 0x320 (Inherited: 0x280)
struct UTBP_UI_ElysiumHUD_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeIn; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x290(0x08)
	struct UTBP_UI_CurrentHardCurrencyText_C* TBP_UI_CurrentHardCurrencyText; // 0x298(0x08)
	struct UTBP_UI_ElysiumHUD_Battlepass_C* TBP_UI_ElysiumHUD_Battlepass; // 0x2a0(0x08)
	struct UTBP_UI_ElysiumHUD_Challenges_C* TBP_UI_ElysiumHUD_Challenges; // 0x2a8(0x08)
	struct UTBP_UI_ElysiumHUD_NewNotification_C* TBP_UI_ElysiumHUD_NewNotification; // 0x2b0(0x08)
	struct UTBP_UI_ElysiumHUD_Party_C* TBP_UI_ElysiumHUD_Party; // 0x2b8(0x08)
	struct UTBP_UI_ElysiumMenu_PlayerInfo_C* TBP_UI_ElysiumMenu_PlayerInfo; // 0x2c0(0x08)
	struct UTBP_UI_InputPromptCombined_C* TBP_UI_InputPromptCombined; // 0x2c8(0x08)
	struct UTBP_UI_InputPromptCombined_C* TBP_UI_InputPromptCombined_139; // 0x2d0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2d8(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x2e0(0x08)
	bool Is Visible; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FText ShowProgressText; // 0x2f0(0x18)
	struct FText HideProgressText; // 0x308(0x18)

	void Construct(); // Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Toggle Visibility(); // Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.Toggle Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumHUD(int32_t EntryPoint); // Function TBP_UI_ElysiumHUD.TBP_UI_ElysiumHUD_C.ExecuteUbergraph_TBP_UI_ElysiumHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

