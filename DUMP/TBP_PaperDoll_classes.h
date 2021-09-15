// BlueprintGeneratedClass TBP_PaperDoll.TBP_PaperDoll_C
// Size: 0x658 (Inherited: 0x620)
struct ATBP_PaperDoll_C : ATigerPaperDoll {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x628(0x08)
	struct UCameraComponent* Camera; // 0x630(0x08)
	struct UTBP_CharacterCustomizationComp_C* TBP_CharacterCustomization; // 0x638(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x640(0x08)
	bool EnableOutlines; // 0x648(0x01)
	char pad_649[0x3]; // 0x649(0x03)
	int32_t Player; // 0x64c(0x04)
	struct UParticleSystemComponent* Particle; // 0x650(0x08)

	void UpdateOutlines(); // Function TBP_PaperDoll.TBP_PaperDoll_C.UpdateOutlines // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function TBP_PaperDoll.TBP_PaperDoll_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PostNewCharacterSelected(); // Function TBP_PaperDoll.TBP_PaperDoll_C.PostNewCharacterSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveDestroyed(); // Function TBP_PaperDoll.TBP_PaperDoll_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void SetPlayerOutlineMemberId(char InPlayerMemberId); // Function TBP_PaperDoll.TBP_PaperDoll_C.SetPlayerOutlineMemberId // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Particle Destroy(); // Function TBP_PaperDoll.TBP_PaperDoll_C.Particle Destroy // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_PaperDoll(int32_t EntryPoint); // Function TBP_PaperDoll.TBP_PaperDoll_C.ExecuteUbergraph_TBP_PaperDoll // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

