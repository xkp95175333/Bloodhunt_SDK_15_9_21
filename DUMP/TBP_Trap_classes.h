// BlueprintGeneratedClass TBP_Trap.TBP_Trap_C
// Size: 0x368 (Inherited: 0x320)
struct ATBP_Trap_C : ATigerTrap {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct USpotLightComponent* TrapLightBottom; // 0x328(0x08)
	struct USceneComponent* IconLocation; // 0x330(0x08)
	struct USceneComponent* IconRoot; // 0x338(0x08)
	struct USpotLightComponent* TrapLightTop; // 0x340(0x08)
	struct UMaterialInstanceDynamic* Dyn material; // 0x348(0x08)
	struct UCurveFloat* Curve; // 0x350(0x08)
	struct UTigerTrapsConfig* TrapConfig; // 0x358(0x08)
	struct UTigerInWorldWidget* InWorldWidget; // 0x360(0x08)

	void CreateWorldIcon(struct ATigerPlayerController* InPlayerController, struct UTBP_UI_Discipline_Trap_WorldMarker_C* OutWidget); // Function TBP_Trap.TBP_Trap_C.CreateWorldIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsCharacterFriendlyWithDisciplineCaster(struct ATigerCharacter* OtherCharacter, bool Is Friendly); // Function TBP_Trap.TBP_Trap_C.IsCharacterFriendlyWithDisciplineCaster // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetWorldMarkerWidget(struct UTBP_UI_Discipline_Trap_WorldMarker_C* AsTBP UI Discipline Trap World Marker, bool bSuccess); // Function TBP_Trap.TBP_Trap_C.GetWorldMarkerWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlacedTrap(); // Function TBP_Trap.TBP_Trap_C.OnPlacedTrap // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnActivatedTrap(); // Function TBP_Trap.TBP_Trap_C.OnActivatedTrap // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnTriggeredTrap(); // Function TBP_Trap.TBP_Trap_C.OnTriggeredTrap // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void TrapDestroy(); // Function TBP_Trap.TBP_Trap_C.TrapDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_Trap.TBP_Trap_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_Trap.TBP_Trap_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Trap(int32_t EntryPoint); // Function TBP_Trap.TBP_Trap_C.ExecuteUbergraph_TBP_Trap // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

