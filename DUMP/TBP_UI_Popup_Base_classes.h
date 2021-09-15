// WidgetBlueprintGeneratedClass TBP_UI_Popup_Base.TBP_UI_Popup_Base_C
// Size: 0x2a0 (Inherited: 0x260)
struct UTBP_UI_Popup_Base_C : UUserWidget {
	struct UWidgetAnimation* CloseAnimation; // 0x260(0x08)
	struct UWidgetAnimation* OpenAnimation; // 0x268(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* Backdrop; // 0x270(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* Background; // 0x278(0x08)
	struct UOverlay* Background_conatiner; // 0x280(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* BorderBot; // 0x288(0x08)
	struct UTBP_UI_HorizontalFadeSlot_C* BorderTop; // 0x290(0x08)
	struct UNamedSlot* Content; // 0x298(0x08)

	void OpenPopup(); // Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.OpenPopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ClosePopup(); // Function TBP_UI_Popup_Base.TBP_UI_Popup_Base_C.ClosePopup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

