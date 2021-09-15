// BlueprintGeneratedClass TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C
// Size: 0x680 (Inherited: 0x620)
struct ATBP_PaperDoll_Legacy_C : ATigerPaperDoll {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UArrowComponent* LightingSpawnLocation; // 0x628(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x630(0x08)
	struct UCameraComponent* Camera; // 0x638(0x08)
	struct UTBP_CharacterCustomizationComp_C* TBP_CharacterCustomization; // 0x640(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x648(0x08)
	struct AActor* SceneLighting; // 0x650(0x08)
	SoftClassProperty SceneLightingSoftClass; // 0x658(0x28)

	void UserConstructionScript(); // Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_066C9A124476C48220EE15B4551280B2(struct UObject* Loaded); // Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.OnLoaded_066C9A124476C48220EE15B4551280B2 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PostNewCharacterSelected(); // Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.PostNewCharacterSelected // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveDestroyed(); // Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_PaperDoll_Legacy(int32_t EntryPoint); // Function TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C.ExecuteUbergraph_TBP_PaperDoll_Legacy // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

