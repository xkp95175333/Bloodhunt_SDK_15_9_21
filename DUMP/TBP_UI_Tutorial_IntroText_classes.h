// WidgetBlueprintGeneratedClass TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C
// Size: 0x2f0 (Inherited: 0x260)
struct UTBP_UI_Tutorial_IntroText_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOutSimpleText; // 0x268(0x08)
	struct UWidgetAnimation* FadeOutLoreText; // 0x270(0x08)
	struct UWidgetAnimation* FadeInSimpleText; // 0x278(0x08)
	struct UWidgetAnimation* FadeInLoreText; // 0x280(0x08)
	struct UWidgetAnimation* FadeOutScreen; // 0x288(0x08)
	struct UWidgetAnimation* FadeInScreen; // 0x290(0x08)
	struct UImage* Background; // 0x298(0x08)
	struct UCanvasPanel* IntroScreen; // 0x2a0(0x08)
	struct UCanvasPanel* LoreBox; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* LoreParagraphText; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* LoreSubheaderText; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* LoreTitleText; // 0x2c0(0x08)
	struct UCanvasPanel* SimpleBox; // 0x2c8(0x08)
	struct UTigerStyledRichTextBlock* SimpleText; // 0x2d0(0x08)
	bool FadeOutSimpleBox; // 0x2d8(0x01)
	bool FadeOutLoreBox; // 0x2d9(0x01)
	char pad_2DA[0x6]; // 0x2da(0x06)
	struct FMulticastInlineDelegate OnIntroComplete; // 0x2e0(0x10)

	void DisplayLoreText(struct FText ParagraphText, struct FText SubheaderText, struct FText TitleText, bool FadeInText); // Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplayLoreText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisplaySimpleText(struct FText Text, bool FadeInText); // Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.DisplaySimpleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Finished_FCE6245B4381C41C23D6B9AC1B912BF8(); // Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_FCE6245B4381C41C23D6B9AC1B912BF8 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Finished_EFDB33FC447883CF45686E82D5843F75(); // Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_EFDB33FC447883CF45686E82D5843F75 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Finished_7806B81B4F37B50F3F03899A74B6E88E(); // Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.Finished_7806B81B4F37B50F3F03899A74B6E88E // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayIntro(); // Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Tutorial_IntroText(int32_t EntryPoint); // Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.ExecuteUbergraph_TBP_UI_Tutorial_IntroText // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnIntroComplete__DelegateSignature(); // Function TBP_UI_Tutorial_IntroText.TBP_UI_Tutorial_IntroText_C.OnIntroComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

