// WidgetBlueprintGeneratedClass TBP_UI_StoreEntry.TBP_UI_StoreEntry_C
// Size: 0x318 (Inherited: 0x2d0)
struct UTBP_UI_StoreEntry_C : UTigerStoreEntryWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UButton* BuyButton; // 0x2d8(0x08)
	struct UImage* EntryImage; // 0x2e0(0x08)
	struct UTBP_UI_CurrencyText_C* TBP_UI_CurrencyText; // 0x2e8(0x08)
	struct UTexture2D* DefaultImage; // 0x2f0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x308(0x10)

	void OnFail_9165BC0C4F525209541CCD9677982392(struct UTexture2DDynamic* Texture); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.OnFail_9165BC0C4F525209541CCD9677982392 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccess_9165BC0C4F525209541CCD9677982392(struct UTexture2DDynamic* Texture); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.OnSuccess_9165BC0C4F525209541CCD9677982392 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetStoreEntry(struct FTigerMetaStoreEntry InStoreEntry); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.SetStoreEntry // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_StoreEntry(int32_t EntryPoint); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.ExecuteUbergraph_TBP_UI_StoreEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClicked__DelegateSignature(); // Function TBP_UI_StoreEntry.TBP_UI_StoreEntry_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

