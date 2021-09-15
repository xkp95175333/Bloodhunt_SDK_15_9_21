// BlueprintGeneratedClass TBP_NPC_Primogen.TBP_NPC_Primogen_C
// Size: 0xb48 (Inherited: 0xb30)
struct ATBP_NPC_Primogen_C : ATigerPrimogenNPC {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb30(0x08)
	struct UCineCameraComponent* InteractionCamera; // 0xb38(0x08)
	struct UTBP_CharacterCustomizationComp_C* TBP_CharacterCustomizationComp; // 0xb40(0x08)

	void DisableScreenCullSize(); // Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.DisableScreenCullSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_NPC_Primogen(int32_t EntryPoint); // Function TBP_NPC_Primogen.TBP_NPC_Primogen_C.ExecuteUbergraph_TBP_NPC_Primogen // (Final|UbergraphFunction) // @ game+0x16c0340
};

