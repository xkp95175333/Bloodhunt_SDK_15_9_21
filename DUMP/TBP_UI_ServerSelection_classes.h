// WidgetBlueprintGeneratedClass TBP_UI_ServerSelection.TBP_UI_ServerSelection_C
// Size: 0x300 (Inherited: 0x290)
struct UTBP_UI_ServerSelection_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTBP_UI_MenuButton_C* CancelButton; // 0x298(0x08)
	struct UTBP_UI_MenuButton_C* ContinueButton; // 0x2a0(0x08)
	struct UComboBoxString* ServerComboBox; // 0x2a8(0x08)
	struct UTBP_UI_BasicMenu_C* TBP_UI_BasicMenu; // 0x2b0(0x08)
	struct FTigerBpFindSessionResultList Sessions; // 0x2b8(0x28)
	struct FMulticastInlineDelegate OnServerSelected; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnCancel; // 0x2f0(0x10)

	void OnMatchServerList(struct FTigerBpFindSessionResultList SessionAlternatives); // Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnMatchServerList // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void JointSelectedServer(); // Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.JointSelectedServer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ServerSelection(int32_t EntryPoint); // Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.ExecuteUbergraph_TBP_UI_ServerSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnCancel__DelegateSignature(); // Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnCancel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnServerSelected__DelegateSignature(struct FTigerBpFindSessionSelectedSession Session); // Function TBP_UI_ServerSelection.TBP_UI_ServerSelection_C.OnServerSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

