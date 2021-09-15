// WidgetBlueprintGeneratedClass TBP_UI_Notification_Item.TBP_UI_Notification_Item_C
// Size: 0x2b0 (Inherited: 0x280)
struct UTBP_UI_Notification_Item_C : UTigerWidget {
	struct UImage* Icon; // 0x280(0x08)
	struct UInvalidationBox* InvalidationBox_1; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* Post_text; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* Pre_Text; // 0x298(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x2a0(0x08)
	struct UTexture2D* Texture; // 0x2a8(0x08)

	void SetNewItem_Combat(struct FText Pre Text, struct UTexture2D* Texture, struct FText Post Text); // Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem_Combat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetNewItem(struct FText Item, struct UTexture2D* Texture); // Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

