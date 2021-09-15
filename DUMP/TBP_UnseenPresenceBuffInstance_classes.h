// BlueprintGeneratedClass TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C
// Size: 0xa4 (Inherited: 0x98)
struct UTBP_UnseenPresenceBuffInstance_C : UTigerBuffUnseenPresenceInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	float CurrentOpacity; // 0xa0(0x04)

	void UpdateInvisibilityMaterial(float DeltaTime, struct ATigerPlayer* Player, struct UMaterialInstanceDynamic* MaterialInstance); // Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.UpdateInvisibilityMaterial // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UnseenPresenceBuffInstance(int32_t EntryPoint); // Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.ExecuteUbergraph_TBP_UnseenPresenceBuffInstance // (Final|UbergraphFunction) // @ game+0x16c0340
};

