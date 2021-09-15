// WidgetBlueprintGeneratedClass TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C
// Size: 0x298 (Inherited: 0x280)
struct UTBP_UI_InputBindingCollection_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UScrollBox* BindingCollection; // 0x288(0x08)
	struct UTBP_UI_InputBinding_C* CurrentlyActiveChild; // 0x290(0x08)

	void SetActiveChild(struct UTBP_UI_InputBinding_C* Input Binding); // Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.SetActiveChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InputBindingCollection(int32_t EntryPoint); // Function TBP_UI_InputBindingCollection.TBP_UI_InputBindingCollection_C.ExecuteUbergraph_TBP_UI_InputBindingCollection // (Final|UbergraphFunction) // @ game+0x16c0340
};

