// WidgetBlueprintGeneratedClass TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C
// Size: 0x28c (Inherited: 0x260)
struct UTBP_UI_TransitionHorizontalFadeSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* InAnimation; // 0x268(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* HorizontalFadeSlot; // 0x270(0x08)
	struct UTBP_UI_TransitionWidget_C* TransitionWidget; // 0x278(0x08)
	float AnimationDelay; // 0x280(0x04)
	float LeftFadeWidth; // 0x284(0x04)
	float RightFadeWidth; // 0x288(0x04)

	void SetFadeWidth(float InLeftFadeWidth, float InRightFadeWidth); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetFadeWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetAnimationDelay(float InAnimationDelay, bool bTriggerIntroAnimation); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetAnimationDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetColor(struct FLinearColor InColor); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void TriggerInAnimation(); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.TriggerInAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnTransitionStarted(); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnTransitionStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot(int32_t EntryPoint); // Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot // (Final|UbergraphFunction) // @ game+0x16c0340
};

