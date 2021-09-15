// WidgetBlueprintGeneratedClass TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C
// Size: 0x290 (Inherited: 0x280)
struct UTBP_UI_Social_PlayerCardList_C : UTigerWidget {
	struct UUniformGridPanel* PlayerGrid; // 0x280(0x08)
	struct USpacer* SpacerToReserveColumn; // 0x288(0x08)

	void FixLayout(); // Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.FixLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ClearList(); // Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.ClearList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddPlayerWidget(struct UUserWidget* InPlayerWidget, int32_t InIndex); // Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.AddPlayerWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RowColumnFromIndex(int32_t InIndex, int32_t Row, int32_t Column); // Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.RowColumnFromIndex // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

