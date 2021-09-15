// WidgetBlueprintGeneratedClass TBP_UI_Loading_Throbber.TBP_UI_Loading_Throbber_C
// Size: 0x288 (Inherited: 0x260)
struct UTBP_UI_Loading_Throbber_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Loop; // 0x268(0x08)
	struct UImage* Loading_Throbber_Image_Bot; // 0x270(0x08)
	struct UImage* Loading_Throbber_Image_Mid; // 0x278(0x08)
	struct UImage* Loading_Throbber_Image_Top; // 0x280(0x08)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Loading_Throbber.TBP_UI_Loading_Throbber_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Loading_Throbber.TBP_UI_Loading_Throbber_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Loading_Throbber(int32_t EntryPoint); // Function TBP_UI_Loading_Throbber.TBP_UI_Loading_Throbber_C.ExecuteUbergraph_TBP_UI_Loading_Throbber // (Final|UbergraphFunction) // @ game+0x16c0340
};

