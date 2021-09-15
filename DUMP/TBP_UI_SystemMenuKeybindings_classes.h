// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C
// Size: 0x300 (Inherited: 0x290)
struct UTBP_UI_SystemMenuKeybindings_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetSwitcher* BindingCollectionSwitcher; // 0x298(0x08)
	struct UTBP_UI_InputBindingCollection_C* GamepadBindingCollection; // 0x2a0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* GamepadSubmenuButton; // 0x2a8(0x08)
	struct UTBP_UI_InputBindingCollection_C* KeyboardBindingCollection; // 0x2b0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* KeyboardSubmenuButton; // 0x2b8(0x08)
	struct UTBP_UI_SystemMenuItem_C* ResetToDefaultsButton; // 0x2c0(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x2c8(0x08)
	struct FText KeyboardSubmenuText; // 0x2d0(0x18)
	struct FText GamepadSubmenuText; // 0x2e8(0x18)

	void LoadKeybind(struct FName InName, struct FKey InKey, int32_t InIndex, float InAxisScale, bool InIsAxis); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeybind // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RefreshKeyBindings(bool ShouldClearChildren); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.RefreshKeyBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LoadAxisKeyBindings(struct TArray<struct FInputAxisKeyMapping> UserInputBindings); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadAxisKeyBindings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LoadKeyBindings(struct TArray<struct FInputActionKeyMapping> UserInputBindings); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeyBindings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature(); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature(); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SystemMenuKeybindings(int32_t EntryPoint); // Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ExecuteUbergraph_TBP_UI_SystemMenuKeybindings // (Final|UbergraphFunction) // @ game+0x16c0340
};

