// WidgetBlueprintGeneratedClass TBP_UI_WheelInterface.TBP_UI_WheelInterface_C
// Size: 0x350 (Inherited: 0x2d0)
struct UTBP_UI_WheelInterface_C : UTigerWheelInterfaceWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UWidgetAnimation* OpenMenu; // 0x2d8(0x08)
	struct UImage* Background; // 0x2e0(0x08)
	struct UCanvasPanel* DynamicElements; // 0x2e8(0x08)
	struct UCanvasPanel* EmotePanel; // 0x2f0(0x08)
	struct UImage* InventoryBackground; // 0x2f8(0x08)
	struct UNamedSlot* NamedSlot_1; // 0x300(0x08)
	struct UImage* SelectionBackground; // 0x308(0x08)
	struct UTBP_UI_WheelItem_C* Currently Hovered; // 0x310(0x08)
	bool Visible; // 0x318(0x01)
	char pad_319[0x3]; // 0x319(0x03)
	float TimeSinceHovered; // 0x31c(0x04)
	bool CanUse; // 0x320(0x01)
	char pad_321[0x7]; // 0x321(0x07)
	struct TArray<struct UTBP_UI_WheelItem_C*> WheelItems; // 0x328(0x10)
	float WheelItemDistanceFromCenter; // 0x338(0x04)
	char pad_33C[0x4]; // 0x33c(0x04)
	struct FMulticastInlineDelegate OnMenuPrimary; // 0x340(0x10)

	void ConstructWheel(int32_t In Num Items); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ConstructWheel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply On_InventoryBackground_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.On_InventoryBackground_MouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayOpenAnimation(); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayOpenAnimation // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PlayCloseAnimation(); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayCloseAnimation // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ResetItems(); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ResetItems // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetItem(int32_t Index, struct UTexture2D* Icon, struct FText Label, int32_t Count); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetItem // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void UpdateHoverEffect(int32_t Index); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.UpdateHoverEffect // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void SetWheelUsable(bool bNewUsable); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetWheelUsable // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetIsItemSelected(int32_t Index, bool bIsSelected); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetIsItemSelected // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void OnNumberOfItemsChanged(int32_t InNewNumberOfItems); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnNumberOfItemsChanged // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_WheelInterface(int32_t EntryPoint); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ExecuteUbergraph_TBP_UI_WheelInterface // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnMenuPrimary__DelegateSignature(); // Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnMenuPrimary__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

