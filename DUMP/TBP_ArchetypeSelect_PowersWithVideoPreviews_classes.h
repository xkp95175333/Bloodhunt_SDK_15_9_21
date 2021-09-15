// WidgetBlueprintGeneratedClass TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C
// Size: 0x2f8 (Inherited: 0x260)
struct UTBP_ArchetypeSelect_PowersWithVideoPreviews_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* VideoStopped; // 0x268(0x08)
	struct UWidgetAnimation* VideoStarted; // 0x270(0x08)
	struct UButton* CloseButton; // 0x278(0x08)
	struct UImage* CloseButtonBG; // 0x280(0x08)
	struct UImage* ClosebuttonCross; // 0x288(0x08)
	struct UTBP_ArchetypeSelect_SkillsSummary_C* SkillSummary; // 0x290(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x298(0x08)
	struct UOverlay* VideoCanvas; // 0x2a0(0x08)
	struct UProgressBar* VideoPlaybackBar; // 0x2a8(0x08)
	struct UImage* VideoWidget; // 0x2b0(0x08)
	struct UMediaPlayer* MediaPlayer; // 0x2b8(0x08)
	struct FMulticastInlineDelegate OnVideoStarted; // 0x2c0(0x10)
	struct FMulticastInlineDelegate OnVideoEnded; // 0x2d0(0x10)
	struct UMediaSource* Right Discipline Video Source; // 0x2e0(0x08)
	struct UMediaSource* Left Discipline Video Source; // 0x2e8(0x08)
	struct UMediaSource* Passive Video Source; // 0x2f0(0x08)

	void UpdatePassivesViewOrCloseText(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.UpdatePassivesViewOrCloseText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ViewOrCloseVideoText(struct UMediaSource* Media Source); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ViewOrCloseVideoText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateVideoTextProperties(struct FText PostfixText); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.UpdateVideoTextProperties // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DeselectOnUnhover(struct UTBP_UI_TransitionMenuButton_C* ButtonWidget); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.DeselectOnUnhover // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnVideoButtonClicked(struct UMediaSource* InVIdeoSource); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StopVideo(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.StopVideo // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMediaOpened(struct FString OpenedUrl); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnMediaOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMediaEndReached(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnMediaEndReached // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClickedMoveSkill(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedMoveSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClickedArchetypeSkill(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedArchetypeSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClickedPassiveSkill(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnClickedPassiveSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hovered_PassiveSkill(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_PassiveSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hovered_ArchetypeSkill(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_ArchetypeSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hovered_MoveSkill(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.Hovered_MoveSkill // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayVideo(struct UMediaSource* InVIdeoSource); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.PlayVideo // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ChangeArchetype(struct UTigerPowerKit* InArchetypeData); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ChangeArchetype // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Open(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.On Open // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ArchetypeSelect_PowersWithVideoPreviews(int32_t EntryPoint); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.ExecuteUbergraph_TBP_ArchetypeSelect_PowersWithVideoPreviews // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnVideoEnded__DelegateSignature(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnVideoStarted__DelegateSignature(); // Function TBP_ArchetypeSelect_PowersWithVideoPreviews.TBP_ArchetypeSelect_PowersWithVideoPreviews_C.OnVideoStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

