// WidgetBlueprintGeneratedClass TBP_UI_XboxIcon.TBP_UI_XboxIcon_C
// Size: 0x299 (Inherited: 0x280)
struct UTBP_UI_XboxIcon_C : UTigerInputIcon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* IconImage; // 0x288(0x08)
	struct UTigerKeyTextureMapping* KeyTextureMapping; // 0x290(0x08)
	bool NewVar_1; // 0x298(0x01)

	void SetIconFromKey(struct FKey Key); // Function TBP_UI_XboxIcon.TBP_UI_XboxIcon_C.SetIconFromKey // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_XboxIcon(int32_t EntryPoint); // Function TBP_UI_XboxIcon.TBP_UI_XboxIcon_C.ExecuteUbergraph_TBP_UI_XboxIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

