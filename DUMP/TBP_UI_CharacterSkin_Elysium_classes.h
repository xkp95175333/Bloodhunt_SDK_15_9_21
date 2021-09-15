// WidgetBlueprintGeneratedClass TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C
// Size: 0x404 (Inherited: 0x280)
struct UTBP_UI_CharacterSkin_Elysium_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OnHover; // 0x288(0x08)
	struct UWidgetAnimation* ShowCustomizeButton; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* ActiveTextRich; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* Button_Text_3; // 0x2a0(0x08)
	struct UWidgetSwitcher* CharacterSlotSwitcher; // 0x2a8(0x08)
	struct UTBP_UI_TransitionMenuButton_C* CreateNewCharacterButton; // 0x2b0(0x08)
	struct UTBP_UI_Button_CTA_C* Customize_Button2; // 0x2b8(0x08)
	struct UButton* ExistingCharacterButton; // 0x2c0(0x08)
	struct UBorder* Unlock_Border; // 0x2c8(0x08)
	struct FTigerPersistentPlayerCharacter PersistentCharacter; // 0x2d0(0xb8)
	struct FMulticastInlineDelegate OnClick; // 0x388(0x10)
	bool bIsSelected; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct ATBP_PaperDoll_C* PaperDoll; // 0x3a0(0x08)
	int32_t PaperDollIndex; // 0x3a8(0x04)
	float CONFIG_HighlightChangeSpeed; // 0x3ac(0x04)
	struct TMap<struct UActorComponent*, float> HighlightComponentTargetValues; // 0x3b0(0x50)
	bool bHasPlayerIntroAnimation; // 0x400(0x01)
	bool bShouldBeLit; // 0x401(0x01)
	bool bIsMiddle; // 0x402(0x01)
	bool ArchetypeDetailsIsActive; // 0x403(0x01)

	void UpdateHighlight(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.UpdateHighlight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FindPaperDollAndCameraActors(struct TArray<struct AActor*> InActors); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.FindPaperDollAndCameraActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetAnimMontageIfNotAlreadyPlaying(struct USkeletalMeshComponent* BodyMesh, struct UAnimMontage* AnimMontage); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.GetAnimMontageIfNotAlreadyPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F(struct FName NotifyName); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyEnd_9FF26C7D42A1CDCA47A92E8F5172239F // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F(struct FName NotifyName); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnNotifyBegin_9FF26C7D42A1CDCA47A92E8F5172239F // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F(struct FName NotifyName); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnInterrupted_9FF26C7D42A1CDCA47A92E8F5172239F // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F(struct FName NotifyName); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnBlendOut_9FF26C7D42A1CDCA47A92E8F5172239F // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F(struct FName NotifyName); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnCompleted_9FF26C7D42A1CDCA47A92E8F5172239F // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DeselectCharacter(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DeselectCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectCharacter(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SelectCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButtonNew_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnAppearanceLoaded(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnAppearanceLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_3_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_5_OnUnhovered__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void InitializeActors(struct TArray<struct AActor*> InArchetypeSelectActors); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.InitializeActors // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__ExistingCharacterButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void DoClick(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.DoClick // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetAsExistingCharacter(struct FTigerPersistentPlayerCharacter InPersistentCharacter); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsExistingCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Ui State(enum class E_ElysiumChangeCharacterState Ui State); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.Update Ui State // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.BndEvt__Customize_Button2_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void SetAsEmptySlot(enum class ETigerPowerKitType InArchetypeType); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.SetAsEmptySlot // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium(int32_t EntryPoint); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.ExecuteUbergraph_TBP_UI_CharacterSkin_Elysium // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClick__DelegateSignature(struct FTigerPersistentPlayerCharacter InPersistentCharacter); // Function TBP_UI_CharacterSkin_Elysium.TBP_UI_CharacterSkin_Elysium_C.OnClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

