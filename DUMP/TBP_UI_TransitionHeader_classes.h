// WidgetBlueprintGeneratedClass TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C
// Size: 0x2c2 (Inherited: 0x260)
struct UTBP_UI_TransitionHeader_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* InAnimation; // 0x268(0x08)
	struct UImage* BackgroundImage; // 0x270(0x08)
	struct URichTextBlock* TextEffectWidget; // 0x278(0x08)
	struct URichTextBlock* TextWidget; // 0x280(0x08)
	struct FText Text; // 0x288(0x18)
	float AnimationDelay; // 0x2a0(0x04)
	float EffectSizeMultiplier; // 0x2a4(0x04)
	bool bHasInitializedEffect; // 0x2a8(0x01)
	enum class ETigerHeaderType HeaderType; // 0x2a9(0x01)
	char pad_2AA[0x6]; // 0x2aa(0x06)
	struct FMulticastInlineDelegate OnInAnimationFinished; // 0x2b0(0x10)
	enum class ENUM_TextStyleColor StyleColor; // 0x2c0(0x01)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x2c1(0x01)

	void SetText(struct FText InText, struct FText InSubText); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TriggerAnimation(); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetTextWithHeaderType(struct FText InText, struct FText InSubText, enum class ETigerHeaderType InHeaderType); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetTextWithHeaderType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitializeEffect(); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.InitializeEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void TriggerAnimationWithDelay(); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimationWithDelay // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void Play Header Animation(bool IsReversed); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Play Header Animation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TransitionHeader(int32_t EntryPoint); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.ExecuteUbergraph_TBP_UI_TransitionHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnInAnimationFinished__DelegateSignature(); // Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.OnInAnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

