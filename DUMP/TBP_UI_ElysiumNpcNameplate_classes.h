// WidgetBlueprintGeneratedClass TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C
// Size: 0x2e0 (Inherited: 0x288)
struct UTBP_UI_ElysiumNpcNameplate_C : UTigerElysiumNpcNameplateWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x290(0x08)
	struct UHorizontalBox* HorizontalBox_3; // 0x298(0x08)
	struct UImage* Image_1; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* Name; // 0x2a8(0x08)
	struct UCanvasPanel* NameBox; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* Title; // 0x2b8(0x08)
	float NameBoxVisibilityDistance; // 0x2c0(0x04)
	bool HasUnreadDialogue; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct UCurveFloat* FadeCurve; // 0x2c8(0x08)
	bool IsWithinVisibilityDistance; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	float NameBoxFadeDistance; // 0x2d4(0x04)
	struct UTexture2D* UnreadDialogueImage; // 0x2d8(0x08)

	void ShouldShowNameplate(bool Visible); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ShouldShowNameplate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	enum class ESlateVisibility HideIfMenuIsOpen(); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.HideIfMenuIsOpen // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	struct FSlateBrush GetNpcIcon(); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	enum class ESlateVisibility GetTalkIconVisibility(); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetTalkIconVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	struct FLinearColor GetTalkIconColor(); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetTalkIconColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	struct FText GetNpcTitle(); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcTitle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	struct FText GetNpcName(); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate(int32_t EntryPoint); // Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

