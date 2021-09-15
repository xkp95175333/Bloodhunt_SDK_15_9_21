// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C
// Size: 0x290 (Inherited: 0x260)
struct UTBP_UI_ArchetypeSelect_Clan_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* ClanImageWidget; // 0x268(0x08)
	struct UTextBlock* ClanNameWidget; // 0x270(0x08)
	struct UNamedSlot* LeftArchetype; // 0x278(0x08)
	struct UNamedSlot* RightArchetype; // 0x280(0x08)
	struct UTigerPlayerClanData* ClanData; // 0x288(0x08)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ArchetypeSelect_Clan(int32_t EntryPoint); // Function TBP_UI_ArchetypeSelect_Clan.TBP_UI_ArchetypeSelect_Clan_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_Clan // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

