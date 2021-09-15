// Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0xa0 (Inherited: 0x80)
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t AdditionalSlotIndex; // 0x84(0x04)
	struct FText SlotDisplayName; // 0x88(0x18)
};

// Class Paper2D.PaperCharacter
// Size: 0x4c0 (Inherited: 0x4c0)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x4b8(0x08)
};

// Class Paper2D.PaperFlipbook
// Size: 0x50 (Inherited: 0x28)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x40(0x08)
	enum class EFlipbookCollisionMode CollisionSource; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)

	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8f490
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8f3d0
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8eb30
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8ea90
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e9e0
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e9b0
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e700
};

// Class Paper2D.PaperFlipbookActor
// Size: 0x230 (Inherited: 0x228)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x228(0x08)
};

// Class Paper2D.PaperFlipbookComponent
// Size: 0x4c0 (Inherited: 0x480)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* SourceFlipbook; // 0x478(0x08)
	struct UMaterialInterface* Material; // 0x480(0x08)
	float PlayRate; // 0x488(0x04)
	char bLooping : 1; // 0x48c(0x01)
	char bReversePlayback : 1; // 0x48c(0x01)
	char bPlaying : 1; // 0x48c(0x01)
	float AccumulatedTime; // 0x490(0x04)
	int32_t CachedFrameIndex; // 0x494(0x04)
	struct FLinearColor SpriteColor; // 0x498(0x10)
	struct UBodySetup* CachedBodySetup; // 0x4a8(0x08)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x4b0(0x10)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0xc907b0
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xc90360
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // (Final|Native|Public|BlueprintCallable) // @ game+0xc90130
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames // (Final|Native|Public|BlueprintCallable) // @ game+0xc90290
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // @ game+0xc901b0
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime // (Final|Native|Public|BlueprintCallable) // @ game+0xc900b0
	void SetLooping(bool bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0xc90020
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook // (Native|Public|BlueprintCallable) // @ game+0xc8fc70
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // (Final|Native|Public|BlueprintCallable) // @ game+0xc8fb70
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // (Final|Native|Public|BlueprintCallable) // @ game+0xc8fb50
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // @ game+0xc8f9a0
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0xc8f980
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // (Final|Native|Protected) // @ game+0xc8f8c0
	bool IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8f460
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8f430
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8f400
	struct FLinearColor GetSpriteColor(); // Function Paper2D.PaperFlipbookComponent.GetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8ec10
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8ea00
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8ea60
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8ea30
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e540
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e510
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e4e0
	struct UPaperFlipbook* GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8e4b0
};

// Class Paper2D.PaperGroupedSpriteActor
// Size: 0x230 (Inherited: 0x228)
struct APaperGroupedSpriteActor : AActor {
	struct UPaperGroupedSpriteComponent* RenderComponent; // 0x228(0x08)
};

// Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x4b0 (Inherited: 0x480)
struct UPaperGroupedSpriteComponent : UMeshComponent {
	struct TArray<struct UMaterialInterface*> InstanceMaterials; // 0x478(0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x488(0x10)
	char pad_4A0[0x10]; // 0x4a0(0x10)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xc908f0
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor // (Native|Public|HasDefaults|BlueprintCallable) // @ game+0xc907d0
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xc90720
	bool RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance // (Native|Public|BlueprintCallable) // @ game+0xc8f9e0
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform OutInstanceTransform, bool bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e5a0
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e570
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances // (Native|Public|BlueprintCallable) // @ game+0xc8e2c0
	int32_t AddInstance(struct FTransform Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xc8de90
};

// Class Paper2D.PaperRuntimeSettings
// Size: 0x30 (Inherited: 0x28)
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28(0x01)
	bool bEnableTerrainSplineEditing; // 0x29(0x01)
	bool bResizeSpriteDataToMatchTextures; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
};

// Class Paper2D.PaperSprite
// Size: 0xa8 (Inherited: 0x28)
struct UPaperSprite : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FVector2D BakedSourceUV; // 0x48(0x08)
	struct FVector2D BakedSourceDimension; // 0x50(0x08)
	struct UTexture2D* BakedSourceTexture; // 0x58(0x08)
	struct UMaterialInterface* DefaultMaterial; // 0x60(0x08)
	struct UMaterialInterface* AlternateMaterial; // 0x68(0x08)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x70(0x10)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float PixelsPerUnrealUnit; // 0x84(0x04)
	struct UBodySetup* BodySetup; // 0x88(0x08)
	int32_t AlternateMaterialSplitIndex; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct FVector4> BakedRenderData; // 0x98(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size: 0x230 (Inherited: 0x228)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x228(0x08)
};

// Class Paper2D.PaperSpriteAtlas
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8f530
};

// Class Paper2D.PaperSpriteComponent
// Size: 0x4a0 (Inherited: 0x480)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0x478(0x08)
	struct UMaterialInterface* MaterialOverride; // 0x480(0x08)
	struct FLinearColor SpriteColor; // 0x488(0x10)

	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xc903f0
	bool SetSprite(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite // (Native|Public|BlueprintCallable) // @ game+0xc8fc70
	struct UPaperSprite* GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite // (Native|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8e4b0
};

// Class Paper2D.PaperTerrainActor
// Size: 0x240 (Inherited: 0x228)
struct APaperTerrainActor : AActor {
	struct USceneComponent* DummyRoot; // 0x228(0x08)
	struct UPaperTerrainSplineComponent* SplineComponent; // 0x230(0x08)
	struct UPaperTerrainComponent* RenderComponent; // 0x238(0x08)
};

// Class Paper2D.PaperTerrainComponent
// Size: 0x4b0 (Inherited: 0x450)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x450(0x08)
	bool bClosedSpline; // 0x458(0x01)
	bool bFilledSpline; // 0x459(0x01)
	char pad_45A[0x6]; // 0x45a(0x06)
	struct UPaperTerrainSplineComponent* AssociatedSpline; // 0x460(0x08)
	int32_t RandomSeed; // 0x468(0x04)
	float SegmentOverlapAmount; // 0x46c(0x04)
	struct FLinearColor TerrainColor; // 0x470(0x10)
	int32_t ReparamStepsPerSegment; // 0x480(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	float CollisionThickness; // 0x488(0x04)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct UBodySetup* CachedBodySetup; // 0x490(0x08)
	char pad_498[0x18]; // 0x498(0x18)

	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xc90480
};

// Class Paper2D.PaperTerrainMaterial
// Size: 0x48 (Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct FPaperTerrainMaterialRule> Rules; // 0x30(0x10)
	struct UPaperSprite* InteriorFill; // 0x40(0x08)
};

// Class Paper2D.PaperTerrainSplineComponent
// Size: 0x560 (Inherited: 0x550)
struct UPaperTerrainSplineComponent : USplineComponent {
	char pad_550[0x10]; // 0x550(0x10)
};

// Class Paper2D.PaperTileLayer
// Size: 0x98 (Inherited: 0x28)
struct UPaperTileLayer : UObject {
	struct FText LayerName; // 0x28(0x18)
	int32_t LayerWidth; // 0x40(0x04)
	int32_t LayerHeight; // 0x44(0x04)
	char bHiddenInGame : 1; // 0x48(0x01)
	char bLayerCollides : 1; // 0x48(0x01)
	char bOverrideCollisionThickness : 1; // 0x48(0x01)
	char bOverrideCollisionOffset : 1; // 0x48(0x01)
	char pad_48_4 : 4; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float CollisionThicknessOverride; // 0x4c(0x04)
	float CollisionOffsetOverride; // 0x50(0x04)
	struct FLinearColor LayerColor; // 0x54(0x10)
	int32_t AllocatedWidth; // 0x64(0x04)
	int32_t AllocatedHeight; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x70(0x10)
	struct UPaperTileSet* TileSet; // 0x80(0x08)
	struct TArray<int32_t> AllocatedGrid; // 0x88(0x10)
};

// Class Paper2D.PaperTileMap
// Size: 0xa8 (Inherited: 0x28)
struct UPaperTileMap : UObject {
	int32_t MapWidth; // 0x28(0x04)
	int32_t MapHeight; // 0x2c(0x04)
	int32_t TileWidth; // 0x30(0x04)
	int32_t TileHeight; // 0x34(0x04)
	float PixelsPerUnrealUnit; // 0x38(0x04)
	float SeparationPerTileX; // 0x3c(0x04)
	float SeparationPerTileY; // 0x40(0x04)
	float SeparationPerLayer; // 0x44(0x04)
	struct TSoftObjectPtr<struct UPaperTileSet> SelectedTileSet; // 0x48(0x28)
	struct UMaterialInterface* Material; // 0x70(0x08)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x04)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8c(0x01)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8d(0x01)
	char pad_8E[0x2]; // 0x8e(0x02)
	int32_t HexSideLength; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UBodySetup* BodySetup; // 0x98(0x08)
	int32_t LayerNameIndex; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
};

// Class Paper2D.PaperTileMapActor
// Size: 0x230 (Inherited: 0x228)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x228(0x08)
};

// Class Paper2D.PaperTileMapComponent
// Size: 0x4d0 (Inherited: 0x480)
struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x478(0x04)
	int32_t MapHeight; // 0x47c(0x04)
	int32_t TileWidth; // 0x480(0x04)
	int32_t TileHeight; // 0x484(0x04)
	struct UPaperTileSet* DefaultLayerTileSet; // 0x488(0x08)
	struct UMaterialInterface* Material; // 0x490(0x08)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x498(0x10)
	struct FLinearColor TileMapColor; // 0x4a8(0x10)
	int32_t UseSingleLayerIndex; // 0x4b8(0x04)
	bool bUseSingleLayer; // 0x4bc(0x01)
	struct UPaperTileMap* TileMap; // 0x4c0(0x08)
	char pad_4CD[0x3]; // 0x4cd(0x03)

	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xc90690
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap // (Native|Public|BlueprintCallable) // @ game+0xc8fc70
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // Function Paper2D.PaperTileMapComponent.SetTile // (Final|Native|Public|BlueprintCallable) // @ game+0xc90510
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xc8ff50
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision // (Final|Native|Public|BlueprintCallable) // @ game+0xc8fd10
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness // (Final|Native|Public|BlueprintCallable) // @ game+0xc8fb90
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap // (Final|Native|Public|BlueprintCallable) // @ game+0xc8fa80
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision // (Final|Native|Public|BlueprintCallable) // @ game+0xc8f9c0
	bool OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8f950
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable // (Final|Native|Public|BlueprintCallable) // @ game+0xc8f8a0
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector> Points, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8f080
	struct FLinearColor GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8f040
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8eed0
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8ed60
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8ec40
	void GetMapSize(int32_t MapWidth, int32_t MapHeight, int32_t NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xc8e870
	struct FLinearColor GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0xc8e7d0
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // (Final|Native|Public|BlueprintCallable) // @ game+0xc8e2e0
	struct UPaperTileLayer* AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer // (Final|Native|Public|BlueprintCallable) // @ game+0xc8e060
};

// Class Paper2D.PaperTileSet
// Size: 0xa8 (Inherited: 0x28)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x28(0x08)
	struct UTexture2D* TileSheet; // 0x30(0x08)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FIntMargin BorderMargin; // 0x48(0x10)
	struct FIntPoint PerTileSpacing; // 0x58(0x08)
	struct FIntPoint DrawingOffset; // 0x60(0x08)
	int32_t WidthInTiles; // 0x68(0x04)
	int32_t HeightInTiles; // 0x6c(0x04)
	int32_t AllocatedWidth; // 0x70(0x04)
	int32_t AllocatedHeight; // 0x74(0x04)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x78(0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x88(0x10)
	int32_t TileWidth; // 0x98(0x04)
	int32_t TileHeight; // 0x9c(0x04)
	int32_t Margin; // 0xa0(0x04)
	int32_t Spacing; // 0xa4(0x04)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8f6d0
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileUserData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xc8f330
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0xc8f250
	void BreakTile(struct FPaperTileInfo Tile, int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xc8e090
};

