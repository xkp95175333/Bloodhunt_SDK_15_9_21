// WidgetBlueprintGeneratedClass TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C
// Size: 0x2b4 (Inherited: 0x280)
struct UTBP_UI_ActiveBuffsPanel_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTBP_UI_ActiveBuffItem_C* TBP_UI_ActiveBuffItem; // 0x288(0x08)
	struct UTBP_UI_ActiveBuffItem_C* TBP_UI_ActiveBuffItem_79; // 0x290(0x08)
	struct UUniformGridPanel* UniformGridPanel_1; // 0x298(0x08)
	struct TArray<struct FTS_ActiveBuffItemData> BuffsToDisplay; // 0x2a0(0x10)
	int32_t MaxDisplayCount; // 0x2b0(0x04)

	void GetItemFromColumnIndex(int32_t ColumnIndex, struct UTBP_UI_ActiveBuffItem_C* Item); // Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.GetItemFromColumnIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnBuffAdded(struct UTigerBuff* Buff, int32_t ID, float Duration); // Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBuffRemoved(struct UTigerBuff* Buff, int32_t ID, float Duration); // Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBuffRefreshed(struct UTigerBuff* Buff, int32_t ID, float Duration); // Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnBuffRefreshed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPawnChanged_Event_1(struct APawn* NewPawn); // Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPawnChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerStateReceived(struct ATigerPlayerState* InPlayerState); // Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.OnPlayerStateReceived // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ActiveBuffsPanel(int32_t EntryPoint); // Function TBP_UI_ActiveBuffsPanel.TBP_UI_ActiveBuffsPanel_C.ExecuteUbergraph_TBP_UI_ActiveBuffsPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

