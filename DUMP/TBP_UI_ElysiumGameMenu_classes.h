// WidgetBlueprintGeneratedClass TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C
// Size: 0x388 (Inherited: 0x379)
struct UTBP_UI_ElysiumGameMenu_C : UTBP_UI_MenuContainer_C {
	char pad_379[0x7]; // 0x379(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)

	void MessageElysiumMenuChangeInterface(); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.MessageElysiumMenuChangeInterface // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCurrencyButtonReleased(); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.OnCurrencyButtonReleased // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ToggleSocialMenu(); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.ToggleSocialMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreatePlayerInfoWidget(); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.CreatePlayerInfoWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void InitializePlayerInfomation(struct ATigerPlayerController* PlayerController); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.InitializePlayerInfomation // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnBackgroundShown(); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.OnBackgroundShown // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnMenuSelected(); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.OnMenuSelected // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumGameMenu(int32_t EntryPoint); // Function TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C.ExecuteUbergraph_TBP_UI_ElysiumGameMenu // (Final|UbergraphFunction) // @ game+0x16c0340
};

