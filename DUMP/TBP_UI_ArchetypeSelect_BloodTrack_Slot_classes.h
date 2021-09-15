// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C
// Size: 0x290 (Inherited: 0x260)
struct UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTigerStyledRichTextBlock* DescriptionText; // 0x268(0x08)
	struct UImage* Icon; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* LevelText; // 0x278(0x08)
	struct UTigerStyledRichTextBlock* TitleText; // 0x280(0x08)
	struct UTBP_UI_ArchetypeSelect_BloodTrack_C* Blood Track; // 0x288(0x08)

	void UpdateInfo(struct FText Name, struct FText Description, struct UTexture2D* Icon, int32_t Index); // Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.UpdateInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Slot(int32_t EntryPoint); // Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Slot // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

