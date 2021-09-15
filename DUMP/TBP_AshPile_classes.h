// BlueprintGeneratedClass TBP_AshPile.TBP_AshPile_C
// Size: 0x260 (Inherited: 0x228)
struct ATBP_AshPile_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UParticleSystemComponent* PS_Diablerize_AshPile_01; // 0x230(0x08)
	struct UStaticMeshComponent* SM_DiablerizeEdge; // 0x238(0x08)
	struct UStaticMeshComponent* SM_DiablerizePile; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	float Timeline_AshPileScaleIn_Opacity_FE7CA55D4183ECAAE6D66983A5F96DB1; // 0x250(0x04)
	enum class ETimelineDirection Timeline_AshPileScaleIn__Direction_FE7CA55D4183ECAAE6D66983A5F96DB1; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* Timeline_AshPileScaleIn; // 0x258(0x08)

	void Timeline_AshPileScaleIn__FinishedFunc(); // Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_AshPileScaleIn__UpdateFunc(); // Function TBP_AshPile.TBP_AshPile_C.Timeline_AshPileScaleIn__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_AshPile.TBP_AshPile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_AshPile(int32_t EntryPoint); // Function TBP_AshPile.TBP_AshPile_C.ExecuteUbergraph_TBP_AshPile // (Final|UbergraphFunction) // @ game+0x16c0340
};

