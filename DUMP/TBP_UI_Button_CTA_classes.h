// WidgetBlueprintGeneratedClass TBP_UI_Button_CTA.TBP_UI_Button_CTA_C
// Size: 0x359 (Inherited: 0x260)
struct UTBP_UI_Button_CTA_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnClick; // 0x268(0x08)
	struct UWidgetAnimation* OnHover; // 0x270(0x08)
	struct UImage* Arrow_Left; // 0x278(0x08)
	struct UImage* Arrow_Right; // 0x280(0x08)
	struct UImage* Base; // 0x288(0x08)
	struct UImage* Base_Click; // 0x290(0x08)
	struct UImage* Border; // 0x298(0x08)
	struct UImage* Corner_Left; // 0x2a0(0x08)
	struct UImage* Corner_Right; // 0x2a8(0x08)
	struct UImage* Dot_Bottom; // 0x2b0(0x08)
	struct UImage* Dot_Left; // 0x2b8(0x08)
	struct UImage* Dot_Right; // 0x2c0(0x08)
	struct UImage* Dot_Top; // 0x2c8(0x08)
	struct UImage* Horn_Bottom; // 0x2d0(0x08)
	struct UImage* Horn_Top; // 0x2d8(0x08)
	struct UImage* Ornament_Bottom; // 0x2e0(0x08)
	struct UImage* Ornament_Left; // 0x2e8(0x08)
	struct UImage* Ornament_Right; // 0x2f0(0x08)
	struct UImage* Ornament_Top; // 0x2f8(0x08)
	struct UTBP_UI_TransitionMenuButton_C* StartGameUIButton; // 0x300(0x08)
	struct UTigerStyledRichTextBlock* Text; // 0x308(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x310(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x320(0x10)
	struct FText ButtonText; // 0x330(0x18)
	struct FDataTableRowHandle TextStyle; // 0x348(0x10)
	bool EnableSmoke; // 0x358(0x01)

	void ChangeButtonText(struct FText InNewText); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.ChangeButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature(); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_2_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature(); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.BndEvt__StartGameUIButton_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Button_CTA(int32_t EntryPoint); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.ExecuteUbergraph_TBP_UI_Button_CTA // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_Button_CTA.TBP_UI_Button_CTA_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

