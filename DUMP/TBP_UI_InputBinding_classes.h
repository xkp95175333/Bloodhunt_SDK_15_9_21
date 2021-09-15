// WidgetBlueprintGeneratedClass TBP_UI_InputBinding.TBP_UI_InputBinding_C
// Size: 0x2f8 (Inherited: 0x280)
struct UTBP_UI_InputBinding_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* ActionName_Text; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* CurrentBind_Text; // 0x290(0x08)
	struct UImage* Highlight; // 0x298(0x08)
	struct UInputKeySelector* InputKey; // 0x2a0(0x08)
	int32_t ActionMappingIndex; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UTBP_UI_InputBindingCollection_C* ParentCollection; // 0x2b0(0x08)
	bool bIsSelected; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	float SelectedTextOpacity; // 0x2bc(0x04)
	float NotSelectedTextOpacity; // 0x2c0(0x04)
	struct FName CurrentActionName; // 0x2c4(0x08)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FKey CurrentKey; // 0x2d0(0x18)
	float AxisScale; // 0x2e8(0x04)
	bool CurrentIsAxis; // 0x2ec(0x01)
	bool bAllowKeyboardKeys; // 0x2ed(0x01)
	bool bAllowGamepadKeys; // 0x2ee(0x01)
	char pad_2EF[0x1]; // 0x2ef(0x01)
	struct UTBP_UI_SystemMenuKeybindings_C* ParentMenuWidget; // 0x2f0(0x08)

	void SetAxisMapping(int32_t ActionMappingIndex, struct FInputAxisKeyMapping UserAxisMapping); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetAxisMapping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetActionMapping(int32_t ActionMappingIndex, struct FInputActionKeyMapping UserActionMapping); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetActionMapping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature(); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InputBinding(int32_t EntryPoint); // Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.ExecuteUbergraph_TBP_UI_InputBinding // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

