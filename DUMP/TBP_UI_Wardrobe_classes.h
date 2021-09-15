// WidgetBlueprintGeneratedClass TBP_UI_Wardrobe.TBP_UI_Wardrobe_C
// Size: 0x914 (Inherited: 0x480)
struct UTBP_UI_Wardrobe_C : UTigerWardrobeUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UWidgetAnimation* FadeIn; // 0x488(0x08)
	struct UWidgetAnimation* ShowItemContainer; // 0x490(0x08)
	struct UWidgetAnimation* HideFilterBox; // 0x498(0x08)
	struct UWidgetAnimation* ShowFilterBox; // 0x4a0(0x08)
	struct UTBP_UI_CategoryButton_C* AccessoryCategoryButton; // 0x4a8(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* BarberTabWidget; // 0x4b0(0x08)
	struct UImage* BlackBackground; // 0x4b8(0x08)
	struct UTBP_UI_CategoryButton_C* BodyCategoryButton; // 0x4c0(0x08)
	struct UTBP_UI_CategoryButton_C* BodyTypeCategoryButton; // 0x4c8(0x08)
	struct UTBP_UI_CategoryButton_C* CardBackgroundCategoryButton; // 0x4d0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* CardTabWidget; // 0x4d8(0x08)
	struct UTBP_UI_Box_C* CategoryBox; // 0x4e0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* CharacterTabWidget; // 0x4e8(0x08)
	struct UWidgetSwitcher* ContainerSwitcher; // 0x4f0(0x08)
	struct UTBP_UI_Line_C* CurrencyTopLine; // 0x4f8(0x08)
	struct UTBP_UI_CategoryButton_C* EmoteCategoryButton; // 0x500(0x08)
	struct UTBP_UI_EquipWheel_C* EquipWheel; // 0x508(0x08)
	struct UTBP_UI_CategoryButton_C* EyebrowCategoryButton; // 0x510(0x08)
	struct UTBP_UI_CategoryButton_C* EyebrowColorCategoryButton; // 0x518(0x08)
	struct UTBP_UI_CategoryButton_C* EyebrowTypeCategoryButton; // 0x520(0x08)
	struct UTBP_UI_CategoryButton_C* EyeColorCategoryButton; // 0x528(0x08)
	struct UTBP_UI_CategoryButton_C* FacialHairCategoryButton; // 0x530(0x08)
	struct UTBP_UI_CategoryButton_C* FacialHairColorCategoryButton; // 0x538(0x08)
	struct UTBP_UI_CategoryButton_C* FacialHairTypeCategoryButton; // 0x540(0x08)
	struct UTBP_UI_CategoryButton_C* GlassesCategoryButton; // 0x548(0x08)
	struct UTBP_UI_CategoryButton_C* HairCategoryButton; // 0x550(0x08)
	struct UTBP_UI_CategoryButton_C* HairColorCategoryButton; // 0x558(0x08)
	struct UTBP_UI_CategoryButton_C* HairTypeCategoryButton; // 0x560(0x08)
	struct UTBP_UI_CategoryButton_C* HatCategoryButton; // 0x568(0x08)
	struct UTBP_UI_CategoryButton_C* HeadCategoryButton; // 0x570(0x08)
	struct UTBP_UI_CategoryButton_C* IconCategoryButton; // 0x578(0x08)
	struct UTBP_UI_OutfitItemContainer_C* ItemContainer; // 0x580(0x08)
	struct UTBP_UI_OutfitVendorTooltip_C* ItemTooltip; // 0x588(0x08)
	struct UTBP_UI_InputMenuPrompt_C* LandingPage_CloseButton; // 0x590(0x08)
	struct UTBP_UI_InputMenuPrompt_C* LandingPage_CloseButton_2; // 0x598(0x08)
	struct UTBP_UI_CategoryButton_C* MakeupCategoryButton; // 0x5a0(0x08)
	struct UTBP_UI_CategoryButton_C* MaskCategoryButton; // 0x5a8(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* MiscTabWidget; // 0x5b0(0x08)
	struct UTBP_UI_CategoryButton_C* OutfitCategoryButton; // 0x5b8(0x08)
	struct UTBP_UI_CategoryButton_C* PiercingCategoryButton; // 0x5c0(0x08)
	struct UTBP_UI_CurrentHardCurrencyText_C* PlayerHardCurrencyText; // 0x5c8(0x08)
	struct UTBP_UI_CurrencyText_C* PlayerSoftCurrencyText; // 0x5d0(0x08)
	struct UCanvasPanel* ShopCanvas; // 0x5d8(0x08)
	struct UTBP_UI_CategoryButton_C* SkinColorCategoryButton; // 0x5e0(0x08)
	struct UTBP_UI_CategoryButton_C* TattooCategoryButton; // 0x5e8(0x08)
	struct UTBP_UI_CharacterCard_Info_C* TBP_UI_CharacterCard_Info; // 0x5f0(0x08)
	struct UTBP_UI_CheckBox_C* TBP_UI_CheckBox; // 0x5f8(0x08)
	struct UTBP_UI_Divider_Vertical_C* TBP_UI_Divider_Vertical; // 0x600(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x608(0x08)
	struct UTBP_UI_Submenu_Header_C* TBP_UI_Submenu_Header; // 0x610(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* WeaponTabWidget; // 0x618(0x08)
	bool bIsBuyingItem; // 0x620(0x01)
	char pad_621[0x7]; // 0x621(0x07)
	struct UTBP_UI_BuyItemsOverlay_C* OverlayUI; // 0x628(0x08)
	struct FTigerVendorStoreCategoryItem CurrentItemToBuy; // 0x630(0x98)
	struct FTigerPersistentOutfitSetup CurrentOutfitSetup; // 0x6c8(0x30)
	bool bEquipBoughtItem; // 0x6f8(0x01)
	char pad_6F9[0x7]; // 0x6f9(0x07)
	struct UTBP_PartOfHead_NullItem_C* FakePartOfHeadClass; // 0x700(0x08)
	SoftClassProperty DefaultOverrideItem; // 0x708(0x28)
	struct FTigerVendorStoreCategoryItem SelectedItem; // 0x730(0x98)
	int32_t SelectedSlot; // 0x7c8(0x04)
	char pad_7CC[0x4]; // 0x7cc(0x04)
	struct ATBP_RewardPreview_Outfit_C* Item_Preview; // 0x7d0(0x08)
	struct ACineCameraActor* User Camera; // 0x7d8(0x08)
	struct FVector User Camera Original Position; // 0x7e0(0x0c)
	struct FVector User Camera New Position; // 0x7ec(0x0c)
	struct FVector DefaultCamera Target Position; // 0x7f8(0x0c)
	bool TeleportCamera; // 0x804(0x01)
	char pad_805[0x3]; // 0x805(0x03)
	struct ACineCameraActor* Close Camera; // 0x808(0x08)
	struct FVector CloseCamera_Position; // 0x810(0x0c)
	struct FVector Target Camera Position; // 0x81c(0x0c)
	struct ACineCameraActor* Target Default Camera; // 0x828(0x08)
	SoftClassProperty NullSoftPath; // 0x830(0x28)
	struct FCameraFocusSettings FocusSettingsDefault; // 0x858(0x58)
	struct FCameraFocusSettings FocusSettingsClose; // 0x8b0(0x58)
	float CameraEmotePreviewZPoint; // 0x908(0x04)
	float CameraZTreshhold; // 0x90c(0x04)
	int32_t OldTemporalAASampleCount; // 0x910(0x04)

	void SetEmotePreviewZPoint(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetEmotePreviewZPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePlayerCardVisibility(enum class ETigerPersistentStoreCategory InCategory); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdatePlayerCardVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShouldShowFacialHairCategory(bool OutShow); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShouldShowFacialHairCategory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HideEyebrowsForNosferatu(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideEyebrowsForNosferatu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetDefaultOverrideItem(struct TArray<struct FTigerVendorStoreCategoryItem> InItems); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetDefaultOverrideItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowItemTooltip(struct FTigerVendorStoreCategoryItem InItem); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowItemTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HideFilters(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.HideFilters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreviewOutfitMaterial(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.PreviewOutfitMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetPlayerOutfitSetup(struct FTigerPersistentOutfitSetup OutfitSetup); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.GetPlayerOutfitSetup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void On Item Selected(struct FTigerVendorStoreCategoryItem StoreItem); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.On Item Selected // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCloseVendorWidget(bool bShouldRemoveWidget); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCloseVendorWidget // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCategorySelected(struct UTigerVendorStoreCategory* SelectedCategory); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategorySelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ResetPlayerApperance(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ResetPlayerApperance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOverlayClosed(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOverlayClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SaveCharacterApperance(struct FTigerPersistentOutfitSetup PersistentOutfitSetup); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SaveCharacterApperance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void UpdateCloseButton(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.UpdateCloseButton // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetNewAppearanceLocally(struct FTigerCharacterAppearance InAppearance); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewAppearanceLocally // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnBackgroundSceneShown(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBackgroundSceneShown // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TBP_UI_CheckBox_K2Node_ComponentBoundEvent_10_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnBodyTypeChanged(enum class ETigerGender InBodyType); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnBodyTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__PiercingCategoryButton_K2Node_ComponentBoundEvent_15_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MaskCategoryButton_K2Node_ComponentBoundEvent_17_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__GlassesCategoryButton_K2Node_ComponentBoundEvent_18_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairTypeCategoryButton_K2Node_ComponentBoundEvent_20_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairColorCategoryButton_K2Node_ComponentBoundEvent_21_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairColorCategoryButton_K2Node_ComponentBoundEvent_22_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairTypeCategoryButton_K2Node_ComponentBoundEvent_23_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyTypeCategoryButton_K2Node_ComponentBoundEvent_25_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HeadCategoryButton_K2Node_ComponentBoundEvent_26_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__FacialHairCategoryButton_K2Node_ComponentBoundEvent_31_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__HairCategoryButton_K2Node_ComponentBoundEvent_32_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__TattooCategoryButton_K2Node_ComponentBoundEvent_33_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BodyCategoryButton_K2Node_ComponentBoundEvent_34_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__BarberTabWidget_K2Node_ComponentBoundEvent_19_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowTypeCategoryButton_K2Node_ComponentBoundEvent_30_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowColorCategoryButton_K2Node_ComponentBoundEvent_35_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyeColorCategoryButton_K2Node_ComponentBoundEvent_36_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__MakeupCategoryButton_K2Node_ComponentBoundEvent_40_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__OutfitCategoryButton_K2Node_ComponentBoundEvent_24_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__AccessoryCategoryButton_K2Node_ComponentBoundEvent_16_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EyebrowCategoryButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__EmoteCategoryButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnSelectedSlot(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSelectedSlot // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSlotSelectionCanceled(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnSlotSelectionCanceled // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__LandingPage_CloseButton_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ShowCategoryItems(enum class ETigerPersistentStoreCategory Category); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ShowCategoryItems // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void OnCategoryItemsReceived(enum class ETigerPersistentStoreCategory CategoryType, struct TArray<struct FTigerVendorStoreCategoryItem> CategoryItems); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnCategoryItemsReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnInventoryActivated(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnInventoryActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CharacterTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnItemPreview(struct FTigerVendorStoreCategoryItem InItem); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnItemSelected(struct FTigerVendorStoreCategoryItem Item, struct UTBP_UI_OutfitItem_C* OutfitItem); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemUnhovered(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__SkinColorCategoryButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void SetNewCardLocally(struct FTigerPersistentPlayerCardData InCard); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.SetNewCardLocally // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__IconCategoryButton_K2Node_ComponentBoundEvent_6_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.BndEvt__CardBackgroundCategoryButton_K2Node_ComponentBoundEvent_7_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnItemHovered(struct FTigerVendorStoreCategoryItem Item); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnItemHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnGotStoreCategories(); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.OnGotStoreCategories // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Wardrobe(int32_t EntryPoint); // Function TBP_UI_Wardrobe.TBP_UI_Wardrobe_C.ExecuteUbergraph_TBP_UI_Wardrobe // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

