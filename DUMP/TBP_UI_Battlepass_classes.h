// WidgetBlueprintGeneratedClass TBP_UI_Battlepass.TBP_UI_Battlepass_C
// Size: 0x688 (Inherited: 0x3e0)
struct UTBP_UI_Battlepass_C : UTigerBattlepassUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* FadeinPreviewImage; // 0x3e8(0x08)
	struct UWidgetAnimation* FadeoutPreviewImage; // 0x3f0(0x08)
	struct UWidgetAnimation* FadeIn; // 0x3f8(0x08)
	struct UTigerStyledRichTextBlock* BattlepassStatus; // 0x400(0x08)
	struct UWidgetSwitcher* BattlepassWidgetSwitcher; // 0x408(0x08)
	struct UImage* BlackBackground; // 0x410(0x08)
	struct UTBP_UI_TransitionMenuButton_C* Button_Back; // 0x418(0x08)
	struct UTBP_UI_Button_CTA_C* ButtonBattlepassComplete; // 0x420(0x08)
	struct UTBP_UI_Battlepass_Button_Banner_C* BuyBattlepassBanner; // 0x428(0x08)
	struct UImage* Clan_Icon; // 0x430(0x08)
	struct UTBP_UI_MenuButton_C* CloseConfirmPurchaseButton; // 0x438(0x08)
	struct UTBP_UI_Popup_Base_C* ConfirmPurchasePopup; // 0x440(0x08)
	struct UTigerStyledRichTextBlock* CurrentBattlepassTier; // 0x448(0x08)
	struct UTigerStyledRichTextBlock* CurrentXP; // 0x450(0x08)
	struct URichTextBlock* ErrorText; // 0x458(0x08)
	struct UTigerStyledRichTextBlock* ExpirationText; // 0x460(0x08)
	struct USizeBox* Freetag; // 0x468(0x08)
	struct UTigerStyledRichTextBlock* FreeText; // 0x470(0x08)
	struct UHorizontalBox* HorizontalRewardsContainer; // 0x478(0x08)
	struct UImage* Image_291; // 0x480(0x08)
	struct UImage* Image_302; // 0x488(0x08)
	struct UImage* InputBlocker; // 0x490(0x08)
	struct UTigerStyledRichTextBlock* ItemName; // 0x498(0x08)
	struct UTigerStyledRichTextBlock* ItemType; // 0x4a0(0x08)
	struct UButton* JumpLeftButton; // 0x4a8(0x08)
	struct UButton* JumpRightButton; // 0x4b0(0x08)
	struct UOverlay* MaxLevelOverlay; // 0x4b8(0x08)
	struct UTigerStyledRichTextBlock* PopupHeader; // 0x4c0(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* Preview_Footer; // 0x4c8(0x08)
	struct UImage* PreviewImage; // 0x4d0(0x08)
	struct UImage* RarityGlow; // 0x4d8(0x08)
	struct UTBP_UI_RewardItemPreview_C* RewardItemPreview; // 0x4e0(0x08)
	struct UScrollBox* RewardsScrollbox; // 0x4e8(0x08)
	struct UTigerStyledRichTextBlock* SeasonPlacementBonus; // 0x4f0(0x08)
	struct UTBP_UI_Battlepass_BuyMenu_C* TBP_UI_Battlepass_BuyBattlepassMenu; // 0x4f8(0x08)
	struct UTBP_UI_Button_CTA_C* TBP_UI_Button_CTA; // 0x500(0x08)
	struct UTBP_UI_Button_CTA_C* TBP_UI_Button_CTA_SkipRanks; // 0x508(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x510(0x08)
	struct UTBP_UI_InputMenuPrompt_C* TBP_UI_InputMenuPrompt; // 0x518(0x08)
	struct UTBP_UI_InputMenuPrompt_C* TBP_UI_InputMenuPrompt_2; // 0x520(0x08)
	struct UTBP_UI_ItemPreview_C* TBP_UI_ItemPreview; // 0x528(0x08)
	struct UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x530(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x538(0x08)
	struct UTBP_UI_Tag_C* TBP_UI_Tag; // 0x540(0x08)
	struct USizeBox* ThrobberSizeBox; // 0x548(0x08)
	struct UTigerStyledRichTextBlock* UnlockedLevelText; // 0x550(0x08)
	struct UImage* UsedForSize; // 0x558(0x08)
	int32_t CONFIG_CamarillaPointsPerRank; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
	struct FTigerItemId PreviousPreviewItemID; // 0x568(0x08)
	struct TSoftObjectPtr<struct UObject> ErrorStrings; // 0x570(0x28)
	struct FText Free Battlepass; // 0x598(0x18)
	struct FText BattlepassActivated; // 0x5b0(0x18)
	struct FText Current Rank; // 0x5c8(0x18)
	struct FText Battlepass XP Name; // 0x5e0(0x18)
	struct FText Rewarded At Text; // 0x5f8(0x18)
	int32_t CurrentSelectedRank; // 0x610(0x04)
	char pad_614[0x4]; // 0x614(0x04)
	struct FText Purchase to Recieve Text; // 0x618(0x18)
	bool Item Hovered is Free; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct UTBP_UI_BattlepassReward_C* CurrentFocusedReward; // 0x638(0x08)
	bool bShouldBlockTickUpdate; // 0x640(0x01)
	bool ItemHas3DPreview; // 0x641(0x01)
	bool Is Head Item; // 0x642(0x01)
	char pad_643[0x5]; // 0x643(0x05)
	struct FTigerItemId RankSkipItemId; // 0x648(0x08)
	bool bHasCurrentSeasonBattlepass; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	int32_t CurrentBattlepassLevel; // 0x654(0x04)
	struct FDateTime LastScrollTimestamp; // 0x658(0x08)
	struct UTexture2D* PreviewImageTexture; // 0x660(0x08)
	int32_t OldTemporalAASampleCount; // 0x668(0x04)
	char pad_66C[0x4]; // 0x66c(0x04)
	struct FText BattlePass Complete Text; // 0x670(0x18)

	void UpdatedPreviewImage(struct UTexture2D* Texture); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatedPreviewImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FText GetItemType(struct UTigerInventoryItemBase* PreviewItem, struct UTigerInventoryItemBase* CombinedItem Parent); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Item Description(struct UTigerInventoryItemBase* CombinedItemParent, struct UTigerInventoryItemBase* PreviewItem, struct URichTextBlock* In Rich Text Block); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Description // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetItemRarity(struct UTigerInventoryItemBase* PreviewItem, struct UTigerInventoryItemBase* CombinedItem Parent, enum class ETigerItemRarity Rarity); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemRarity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set ItemType(struct UTigerInventoryItemBase* CombinedItemParent, struct UTigerInventoryItemBase* PreviewItem); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set ItemType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Item Name(struct UTigerInventoryItemBase* CombinedItemParent, struct UTigerInventoryItemBase* PreviewItem, struct URichTextBlock* InRichTextBlock); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Name // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetRewardHoverBlockTimeStamp(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetRewardHoverBlockTimeStamp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetPurchaseBattlepassRewardsCount(int32_t TargetLevel, bool bIncludeFreeRewards, int32_t RewardsCount); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetPurchaseBattlepassRewardsCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	int32_t GetRankSkipCount(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetRankSkipCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void UpdateRankSkipInfo(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateRankSkipInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetSeasonPlacementBonusText(struct FTigerPersistentPlayerTransactionalData TransactionalData); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetSeasonPlacementBonusText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Clan Icon(struct UTigerInventoryItemBase* InputPin); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Clan Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Previewed Item Texts(struct UTigerInventoryItemBase* Preview Item, struct UTigerInventoryItemBase* CombinedItemParent); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Previewed Item Texts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FocusJumpBackward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpBackward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FocusJumpForward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpForward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetTierContainerAtRank(int32_t InRank, struct UTBP_UI_BattlepassTierContainer_C* OutTierContainer); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetTierContainerAtRank // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FocusPreviousReward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusPreviousReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FocusNextReward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusNextReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UnfocusCurrentReward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UnfocusCurrentReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetFocusedReward(struct UTBP_UI_BattlepassReward_C* InReward); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetFocusedReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FocusLatestUnlockedRank(int32_t PlayerRank); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusLatestUnlockedRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetUpMenuInput(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetUpMenuInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBoughtBattlepass(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBoughtBattlepass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnBackgroundSceneShown(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnPreviewItemUpdated(struct UTigerInventoryItemBase* InPreviewItem, struct ATigerBattlepassRewardPreview* InPreviewActor, struct UTigerInventoryItemBase* InCombinedItemParent); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPreviewItemUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update After Purchase(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update After Purchase // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPersistentPlayerStateInitialized(struct UTigerPersistentPlayerState* InPersistentPlayerState); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPersistentPlayerStateInitialized // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void DisplayPopupErrorMessage(struct FText ErrorString); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupErrorMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PlayerTransactionDataUpdated(struct FTigerPersistentPlayerTransactionalData TransactionalData); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PlayerTransactionDataUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ItemClicked(struct FTigerItemId InItemId, int32_t Item Rank); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ItemClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Focus Item on Hover(struct FTigerItemId ItemId, int32_t Item Rank, bool Item Is Free); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Focus Item on Hover // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IncrementFocusedRewardIndex(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.IncrementFocusedRewardIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DecrementFocusedRewardIndex(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DecrementFocusedRewardIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFocusJumpForward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpForward // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFocusJumpBackward(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpBackward // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisplayPopupExitText(struct FText Text); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupExitText // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Back or Close(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Back or Close // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Left Trigger Pressed(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Left Trigger Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Right Trigger Pressed(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Right Trigger Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ChangePreviewImage(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ChangePreviewImage // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature(); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Battlepass(int32_t EntryPoint); // Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ExecuteUbergraph_TBP_UI_Battlepass // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

