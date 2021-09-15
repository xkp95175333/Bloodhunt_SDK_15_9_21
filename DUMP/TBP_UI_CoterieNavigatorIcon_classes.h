// WidgetBlueprintGeneratedClass TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C
// Size: 0x270 (Inherited: 0x260)
struct UTBP_UI_CoterieNavigatorIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Icon; // 0x268(0x08)

	void UpdateVisibility(bool bIsNavigator); // Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetOwningPawn(struct APawn* In Pawn); // Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.SetOwningPawn // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnIsCoterieNavigatorChanged_Event_1(bool bInIsCoterieNavigator); // Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.OnIsCoterieNavigatorChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon(int32_t EntryPoint); // Function TBP_UI_CoterieNavigatorIcon.TBP_UI_CoterieNavigatorIcon_C.ExecuteUbergraph_TBP_UI_CoterieNavigatorIcon // (Final|UbergraphFunction) // @ game+0x16c0340
};

