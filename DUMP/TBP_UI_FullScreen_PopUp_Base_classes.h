// WidgetBlueprintGeneratedClass TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C
// Size: 0x2d0 (Inherited: 0x260)
struct UTBP_UI_FullScreen_PopUp_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOutAnimation; // 0x268(0x08)
	struct UWidgetAnimation* InAnimation; // 0x270(0x08)
	struct UTBP_UI_Box_C* InformationWidgetBorder; // 0x278(0x08)
	struct UNamedSlot* InformationWidgetSlot; // 0x280(0x08)
	struct UCanvasPanel* RootCanvas; // 0x288(0x08)
	struct UTBP_UI_Text_C* TitleText; // 0x290(0x08)
	struct FText Title; // 0x298(0x18)
	struct FMulticastInlineDelegate OnClose; // 0x2b0(0x10)
	struct FMulticastInlineDelegate OnFadeOutFinished; // 0x2c0(0x10)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void StartInAnimation(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.StartInAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeOut(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.FadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void Hide(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Close(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_FullScreen_PopUp_Base(int32_t EntryPoint); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.ExecuteUbergraph_TBP_UI_FullScreen_PopUp_Base // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnFadeOutFinished__DelegateSignature(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.OnFadeOutFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClose__DelegateSignature(); // Function TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

