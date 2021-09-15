// WidgetBlueprintGeneratedClass TBP_UI_BloodTrack.TBP_UI_BloodTrack_C
// Size: 0x2ac (Inherited: 0x260)
struct UTBP_UI_BloodTrack_C : UUserWidget {
	struct UHorizontalBox* PassiveBox; // 0x260(0x08)
	float SlotPadding; // 0x268(0x04)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct TArray<struct UTigerBloodTrackPassiveConfig*> Current Blood Vein; // 0x270(0x10)
	struct UTBP_UI_BloodTrackCustomizer_C* Blood Track Customizer; // 0x280(0x08)
	bool Is Read Only; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FString LevelText; // 0x290(0x10)
	bool bIsInInventory; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	int32_t PlayerLevelCap; // 0x2a4(0x04)
	int32_t PlayerLevelCurrent; // 0x2a8(0x04)

	void Update Passive Slot Opacity(int32_t PlayerLevel); // Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Update Passive Slot Opacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Init(int32_t PlayerLevelCap, int32_t PlayerLevelCurrent, bool bIsInInventory); // Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetSlotAtIndex(int32_t Index, struct UTBP_UI_BloodTrackPassiveSlot_C* Blood Track Slot); // Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.GetSlotAtIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Populate(struct TArray<struct UTigerBloodTrackPassiveConfig*> BloodTrack); // Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Populate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

