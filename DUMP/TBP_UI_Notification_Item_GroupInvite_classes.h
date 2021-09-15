// WidgetBlueprintGeneratedClass TBP_UI_Notification_Item_GroupInvite.TBP_UI_Notification_Item_GroupInvite_C
// Size: 0x2d8 (Inherited: 0x280)
struct UTBP_UI_Notification_Item_GroupInvite_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* HostNameLabel; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_PlayerList; // 0x298(0x08)
	struct UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_PlayerList; // 0x2a0(0x08)
	struct UInvalidationBox* RootInvalidationBox; // 0x2a8(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2b0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2b8(0x08)
	struct FText HostName; // 0x2c0(0x18)

	void Construct(); // Function TBP_UI_Notification_Item_GroupInvite.TBP_UI_Notification_Item_GroupInvite_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Notification_Item_GroupInvite(int32_t EntryPoint); // Function TBP_UI_Notification_Item_GroupInvite.TBP_UI_Notification_Item_GroupInvite_C.ExecuteUbergraph_TBP_UI_Notification_Item_GroupInvite // (Final|UbergraphFunction) // @ game+0x16c0340
};

