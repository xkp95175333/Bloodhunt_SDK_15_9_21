// WidgetBlueprintGeneratedClass TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C
// Size: 0x2d2 (Inherited: 0x280)
struct UTBP_UI_ObjectiveStateMarker_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeIn; // 0x288(0x08)
	struct UImage* AdditionalBottom; // 0x290(0x08)
	struct UImage* AdditionalTop; // 0x298(0x08)
	struct UImage* Blink; // 0x2a0(0x08)
	struct UImage* Inner; // 0x2a8(0x08)
	struct UImage* InnerComplete; // 0x2b0(0x08)
	struct UImage* Outer; // 0x2b8(0x08)
	struct UImage* Tick1; // 0x2c0(0x08)
	struct UImage* Tick2; // 0x2c8(0x08)
	bool Complete; // 0x2d0(0x01)
	bool Multiple; // 0x2d1(0x01)

	void SetComplete(bool InComplete); // Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.SetComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetMultiple(bool InMultiple); // Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.SetMultiple // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Play Fade In(); // Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.Play Fade In // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ObjectiveStateMarker(int32_t EntryPoint); // Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.ExecuteUbergraph_TBP_UI_ObjectiveStateMarker // (Final|UbergraphFunction) // @ game+0x16c0340
};

