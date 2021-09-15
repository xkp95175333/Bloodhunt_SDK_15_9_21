// WidgetBlueprintGeneratedClass TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C
// Size: 0x290 (Inherited: 0x260)
struct UTBP_UI_HorizontalFadeSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UImage* LeftFade; // 0x270(0x08)
	struct UNamedSlot* NamedSlot_1; // 0x278(0x08)
	struct UImage* RightFade; // 0x280(0x08)
	float LeftFadeWidth; // 0x288(0x04)
	float RightFadeWidth; // 0x28c(0x04)

	void SetFadeWidth(float InLeftFadeWidth, float InRightFadeWidth); // Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.SetFadeWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_HorizontalFadeSlot(int32_t EntryPoint); // Function TBP_UI_HorizontalFadeSlot.TBP_UI_HorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_HorizontalFadeSlot // (Final|UbergraphFunction) // @ game+0x16c0340
};

