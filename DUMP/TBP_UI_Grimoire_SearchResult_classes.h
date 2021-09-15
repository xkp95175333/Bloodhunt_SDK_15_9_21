// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_SearchResult.TBP_UI_Grimoire_SearchResult_C
// Size: 0x2c0 (Inherited: 0x280)
struct UTBP_UI_Grimoire_SearchResult_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UButton* ResultButton; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* ResultText; // 0x290(0x08)
	struct FString EntryId; // 0x298(0x10)
	struct UTBP_UI_Grimoire_C* GrimoireUI; // 0x2a8(0x08)
	struct UTigerGrimoireCategory* Category; // 0x2b0(0x08)
	struct UTBP_UI_Grimoire_Searchbar_C* SearchBar; // 0x2b8(0x08)

	void CloseSearchBar(); // Function TBP_UI_Grimoire_SearchResult.TBP_UI_Grimoire_SearchResult_C.CloseSearchBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_202_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Grimoire_SearchResult.TBP_UI_Grimoire_SearchResult_C.BndEvt__Button_202_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_202_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_SearchResult.TBP_UI_Grimoire_SearchResult_C.BndEvt__Button_202_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_202_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Grimoire_SearchResult.TBP_UI_Grimoire_SearchResult_C.BndEvt__Button_202_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Grimoire_SearchResult(int32_t EntryPoint); // Function TBP_UI_Grimoire_SearchResult.TBP_UI_Grimoire_SearchResult_C.ExecuteUbergraph_TBP_UI_Grimoire_SearchResult // (Final|UbergraphFunction) // @ game+0x16c0340
};

