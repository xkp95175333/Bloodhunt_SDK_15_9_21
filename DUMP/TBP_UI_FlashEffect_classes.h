// WidgetBlueprintGeneratedClass TBP_UI_FlashEffect.TBP_UI_FlashEffect_C
// Size: 0x288 (Inherited: 0x260)
struct UTBP_UI_FlashEffect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* flash; // 0x268(0x08)
	struct UImage* FlashImage; // 0x270(0x08)
	struct FMulticastInlineDelegate Flash Finished; // 0x278(0x10)

	void PlayFlashEffect(); // Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.PlayFlashEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1(); // Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_FlashEffect(int32_t EntryPoint); // Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.ExecuteUbergraph_TBP_UI_FlashEffect // (Final|UbergraphFunction) // @ game+0x16c0340
	void Flash Finished__DelegateSignature(struct UTBP_UI_FlashEffect_C* Finished Effect); // Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Flash Finished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

