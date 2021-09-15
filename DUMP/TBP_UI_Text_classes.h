// WidgetBlueprintGeneratedClass TBP_UI_Text.TBP_UI_Text_C
// Size: 0x2ac (Inherited: 0x280)
struct UTBP_UI_Text_C : UTigerTextWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTextBlock* TextWidget; // 0x288(0x08)
	struct FText Text; // 0x290(0x18)
	int32_t Size; // 0x2a8(0x04)

	void SetText(struct FText InText); // Function TBP_UI_Text.TBP_UI_Text_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UTextBlock* GetText(); // Function TBP_UI_Text.TBP_UI_Text_C.GetText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Text.TBP_UI_Text_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Text(int32_t EntryPoint); // Function TBP_UI_Text.TBP_UI_Text_C.ExecuteUbergraph_TBP_UI_Text // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

