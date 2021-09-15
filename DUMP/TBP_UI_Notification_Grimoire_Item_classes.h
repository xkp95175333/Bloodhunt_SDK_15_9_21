// WidgetBlueprintGeneratedClass TBP_UI_Notification_Grimoire_Item.TBP_UI_Notification_Grimoire_Item_C
// Size: 0x288 (Inherited: 0x260)
struct UTBP_UI_Notification_Grimoire_Item_C : UUserWidget {
	struct UImage* Backdrop; // 0x260(0x08)
	struct UImage* Grimoire_icon; // 0x268(0x08)
	struct UTigerStyledRichTextBlock* GrimoireEntryName; // 0x270(0x08)
	struct UInvalidationBox* InvalidationBox_GrimoireNotification; // 0x278(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot_GrimoireNotification; // 0x280(0x08)

	void SetText(struct FText Line1); // Function TBP_UI_Notification_Grimoire_Item.TBP_UI_Notification_Grimoire_Item_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

