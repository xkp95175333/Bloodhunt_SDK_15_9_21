// WidgetBlueprintGeneratedClass TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C
// Size: 0x2f9 (Inherited: 0x260)
struct UTBP_UI_VendorTabButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnHoverDeselected; // 0x268(0x08)
	struct UWidgetAnimation* OnUnhoverDeselected; // 0x270(0x08)
	struct UWidgetAnimation* OnSelected; // 0x278(0x08)
	struct UWidgetAnimation* OnDeselected; // 0x280(0x08)
	struct UButton* ButtonWidget; // 0x288(0x08)
	struct UOverlay* LeftInputPrompt; // 0x290(0x08)
	struct UOverlay* RightInputPrompt; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* VendorName; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* VendorTitle; // 0x2a8(0x08)
	bool bIsLeftHeader; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FText Title; // 0x2b8(0x18)
	struct FText Subtitle; // 0x2d0(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x2e8(0x10)
	bool bIsSelected; // 0x2f8(0x01)

	void EnableButtonShortcuts(); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.EnableButtonShortcuts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitialSetup(struct FText InTitle, struct FText InSubTitle); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.InitialSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Select(); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Deselect(); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.Deselect // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.BndEvt__ButtonWidget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_VendorTabButton(int32_t EntryPoint); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.ExecuteUbergraph_TBP_UI_VendorTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_VendorTabButton.TBP_UI_VendorTabButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

