// BlueprintGeneratedClass TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C
// Size: 0x2a8 (Inherited: 0x280)
struct ATBP_ProjectionDashProjectile_C : ATigerProjectionDashProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* IconRoot; // 0x288(0x08)
	struct UParticleSystemComponent* Trail; // 0x290(0x08)
	float Size; // 0x298(0x04)
	bool Archetype; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	int32_t ProjectionDashSirenAkEventID; // 0x2a0(0x04)
	int32_t ProjectionDashLoopAkEventID; // 0x2a4(0x04)

	void CreateWorldIcon(struct ATigerPlayerController* InPlayerController); // Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.CreateWorldIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnProjectileStopped(); // Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileStopped // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnProjectileDeath(); // Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileDeath // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveDestroyed(); // Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ProjectionDashProjectile(int32_t EntryPoint); // Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ExecuteUbergraph_TBP_ProjectionDashProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

