// WidgetBlueprintGeneratedClass TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C
// Size: 0x3a8 (Inherited: 0x280)
struct UTBP_UI_BattlepassReward_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OnHoverScale; // 0x288(0x08)
	struct UImage* BotGlow; // 0x290(0x08)
	struct UButton* ButtonBorder; // 0x298(0x08)
	struct UImage* CardBG; // 0x2a0(0x08)
	struct UImage* ClanIcon; // 0x2a8(0x08)
	struct UScaleBox* EchoScaleBox; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* FreeText; // 0x2b8(0x08)
	struct USizeBox* ImageSizeBox; // 0x2c0(0x08)
	struct UOverlay* IsFreeSign; // 0x2c8(0x08)
	struct UImage* ItemImage; // 0x2d0(0x08)
	struct UScaleBox* ItemImage_Scalebox; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* ItemsCount; // 0x2e0(0x08)
	struct UImage* ItemShadow; // 0x2e8(0x08)
	struct UImage* PlayerCardEcho; // 0x2f0(0x08)
	struct UImage* Rarity_left; // 0x2f8(0x08)
	struct UImage* Rarity_right; // 0x300(0x08)
	struct USizeBox* RewardFullSizeBox; // 0x308(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x310(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient_2; // 0x318(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x320(0x08)
	struct UTBP_UI_Rarity_VFX_C* TBP_UI_Rarity_VFX; // 0x328(0x08)
	struct UTBP_UI_Tag_C* TBP_UI_Tag; // 0x330(0x08)
	struct UImage* TopGlow; // 0x338(0x08)
	struct UBorder* Unlocked_Border; // 0x340(0x08)
	int32_t Count; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FMulticastInlineDelegate OnItemHovered; // 0x350(0x10)
	struct FTigerItemId ItemId; // 0x360(0x08)
	bool bIsUnlocked; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct FMulticastInlineDelegate OnItemSelected; // 0x370(0x10)
	bool bItemIsFree; // 0x380(0x01)
	bool IsSelected; // 0x381(0x01)
	bool IsFocused; // 0x382(0x01)
	char pad_383[0x5]; // 0x383(0x05)
	struct UTBP_UI_Battlepass_C* Battlepass; // 0x388(0x08)
	int32_t RewardIndex; // 0x390(0x04)
	int32_t RewardRank; // 0x394(0x04)
	struct UTigerInventoryItemBase* InventoryItem; // 0x398(0x08)
	struct UTexture2D* Item_Texture; // 0x3a0(0x08)

	void Get UI Background ITexture(struct TSoftObjectPtr<struct UTexture2D> UITexture); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Get UI Background ITexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetUITexture(struct TSoftObjectPtr<struct UTexture2D> UITexture); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetUITexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetInventoryItemFromPossiblecombineditemContainer(struct UTigerInventoryItemBase* PotentialCombinedItem); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetInventoryItemFromPossiblecombineditemContainer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateAlignmentsIfPlayerCard(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.UpdateAlignmentsIfPlayerCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Init(int32_t InRank, int32_t InIndex, bool InIsFree, struct UTBP_UI_Battlepass_C* InBattlepassRef); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UTigerTooltipWidget* ConstructTooltipWidget(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ConstructTooltipWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_8BD3514D458743CC989B509F5DF0A4B2(struct UObject* Loaded); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoaded_8BD3514D458743CC989B509F5DF0A4B2 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_0E0168EB4C4BB527325A47BED659224C(struct UObject* Loaded); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoaded_0E0168EB4C4BB527325A47BED659224C // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnTextureLoaded(struct UTexture2D* ImageTexture); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnTextureLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ItemSelected(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void UpdateRarityAndClanIcon(struct UTigerInventoryItemBase* InItem); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.UpdateRarityAndClanIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnItemFocused(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemFocused // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemUnfocused(); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemUnfocused // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBackgroundTextureLoaded(struct UTexture2D* BackgroundTexture); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnBackgroundTextureLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoadedItem(struct FTigerItemId ItemId, struct UTigerInventoryItemBase* InventoryItem); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoadedItem // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BattlepassReward(int32_t EntryPoint); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ExecuteUbergraph_TBP_UI_BattlepassReward // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnItemSelected__DelegateSignature(struct FTigerItemId InItemId); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemHovered__DelegateSignature(struct FTigerItemId ItemId); // Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

