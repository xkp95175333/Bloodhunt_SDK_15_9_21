// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C
// Size: 0x2a9 (Inherited: 0x260)
struct UTBP_UI_ArchetypeDescription_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HideDetailsAnim; // 0x268(0x08)
	struct UWidgetAnimation* ShowDetailsAnim; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeDescriptionWidget; // 0x278(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeHeader; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeKeywordsWidget; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* ClanHeader; // 0x290(0x08)
	struct UTigerPlayerClanData* ClanData; // 0x298(0x08)
	struct UTigerPowerKit* ArchetypeData; // 0x2a0(0x08)
	bool bHideDetails; // 0x2a8(0x01)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ChangeArchetype(struct UTigerPlayerClanData* InClanData, struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ChangeArchetype // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowDetails(); // Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ShowDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HideDetails(); // Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.HideDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ArchetypeDescription(int32_t EntryPoint); // Function TBP_UI_ArchetypeDescription.TBP_UI_ArchetypeDescription_C.ExecuteUbergraph_TBP_UI_ArchetypeDescription // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

