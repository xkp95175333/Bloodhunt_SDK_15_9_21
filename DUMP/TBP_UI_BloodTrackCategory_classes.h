// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C
// Size: 0x281 (Inherited: 0x260)
struct UTBP_UI_BloodTrackCategory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUniformGridPanel* GridPanel; // 0x268(0x08)
	struct UTBP_UI_BloodTrackLevelHeader_C* TBP_UI_BloodTrackLevelHeader; // 0x270(0x08)
	int32_t Columns; // 0x278(0x04)
	int32_t Rows; // 0x27c(0x04)
	enum class ETigerBloodTrackPassiveCategory Category Filter; // 0x280(0x01)

	void Fill(struct TArray<struct UTigerBloodTrackPassiveConfig*> Passives, struct TArray<struct UTigerBloodTrackPassiveConfig*> Passives To Exclude, struct UTBP_UI_BloodTrack_C* In Blood Track); // Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.Fill // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodTrackCategory(int32_t EntryPoint); // Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.ExecuteUbergraph_TBP_UI_BloodTrackCategory // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

