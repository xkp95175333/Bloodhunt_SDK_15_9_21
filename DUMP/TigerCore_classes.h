// Class TigerCore.TigerAuthenticationManagerBase
// Size: 0x38 (Inherited: 0x28)
struct UTigerAuthenticationManagerBase : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class TigerCore.TigerAnimationFilter
// Size: 0x78 (Inherited: 0x30)
struct UTigerAnimationFilter : UDataAsset {
	struct TArray<struct FName> BonesToFilter; // 0x30(0x10)
	struct TArray<struct FName> BlendShapesToFilter; // 0x40(0x10)
	struct USkeleton* Skeleton; // 0x50(0x08)
	struct TArray<int32_t> CurveIdsToFilter; // 0x58(0x10)
	struct TArray<bool> BoneIdsToFilter; // 0x68(0x10)

	void UpdateFilter(); // Function TigerCore.TigerAnimationFilter.UpdateFilter // (Final|Native|Public) // @ game+0x3460bc0
};

// Class TigerCore.TigerAnimMetaDataAsset
// Size: 0x80 (Inherited: 0x30)
struct UTigerAnimMetaDataAsset : UDataAsset {
	struct TMap<struct FName, struct UAnimMetaData*> AnimMetaData; // 0x30(0x50)

	struct UAnimMetaData* GetMetaData(struct FName InName); // Function TigerCore.TigerAnimMetaDataAsset.GetMetaData // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x3461040
};

// Class TigerCore.TigerRandomSequenceList
// Size: 0x38 (Inherited: 0x28)
struct UTigerRandomSequenceList : UObject {
	struct TArray<struct FRandomPlayerSequenceEntry> RandomSequenceList; // 0x28(0x10)
};

