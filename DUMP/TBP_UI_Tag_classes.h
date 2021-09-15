// WidgetBlueprintGeneratedClass TBP_UI_Tag.TBP_UI_Tag_C
// Size: 0x2c1 (Inherited: 0x260)
struct UTBP_UI_Tag_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Background; // 0x268(0x08)
	struct UNamedSlot* Content; // 0x270(0x08)
	struct UImage* LeftBackground; // 0x278(0x08)
	struct UImage* LeftOutline; // 0x280(0x08)
	struct UImage* Outline; // 0x288(0x08)
	struct UImage* RightBackground; // 0x290(0x08)
	struct UImage* RightOutline; // 0x298(0x08)
	struct FLinearColor OutlineColor; // 0x2a0(0x10)
	struct FLinearColor BGColor; // 0x2b0(0x10)
	bool ThinOutline; // 0x2c0(0x01)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Tag.TBP_UI_Tag_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Tag(int32_t EntryPoint); // Function TBP_UI_Tag.TBP_UI_Tag_C.ExecuteUbergraph_TBP_UI_Tag // (Final|UbergraphFunction) // @ game+0x16c0340
};

