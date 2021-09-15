// WidgetBlueprintGeneratedClass TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C
// Size: 0x2a8 (Inherited: 0x280)
struct UTBP_UI_Social_Party_Panel_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UListView* MemberList; // 0x288(0x08)
	struct UTBP_UI_Button_CTA_C* TBP_UI_Button_CTA; // 0x290(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x298(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x2a0(0x08)

	void UpdateMemberList(); // Function TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C.UpdateMemberList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C.OnOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPartyUpdated(); // Function TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C.OnPartyUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_Party_Panel(int32_t EntryPoint); // Function TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C.ExecuteUbergraph_TBP_UI_Social_Party_Panel // (Final|UbergraphFunction) // @ game+0x16c0340
};

