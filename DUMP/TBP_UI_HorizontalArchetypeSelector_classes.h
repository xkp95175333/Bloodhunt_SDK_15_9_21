// WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C
// Size: 0x2f9 (Inherited: 0x288)
struct UTBP_UI_HorizontalArchetypeSelector_C : UTigerHorizontalArchetypeSelectorUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UHorizontalBox* RootHorizontalBox; // 0x290(0x08)
	struct FMulticastInlineDelegate OnArchetypeSelected; // 0x298(0x10)
	struct TMap<enum class ETigerPowerKitType, struct TScriptInterface<None>> ArchetypeButtons; // 0x2a8(0x50)
	bool UsePragueVisuals; // 0x2f8(0x01)

	void ChangeArchetypeButtonSelection(enum class ETigerPowerKitType InArchetypeType); // Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ChangeArchetypeButtonSelection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UUserWidget* CreateWidgetForArchetype(enum class ETigerPowerKitType InArchetypeType); // Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateWidgetForArchetype // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateArchetypeWidgetsForClan(struct UTigerPlayerClanData* InClanData); // Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateArchetypeWidgetsForClan // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void CreateDivider(); // Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.CreateDivider // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnSelectionChanged(struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SelectArchetype(enum class ETigerPowerKitType InArchetypeType); // Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.SelectArchetype // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector(int32_t EntryPoint); // Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnArchetypeSelected__DelegateSignature(struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C.OnArchetypeSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

