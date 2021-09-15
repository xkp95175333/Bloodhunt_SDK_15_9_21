// Class Landscape.ControlPointMeshActor
// Size: 0x230 (Inherited: 0x228)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x228(0x08)
};

// Class Landscape.ControlPointMeshComponent
// Size: 0x4f0 (Inherited: 0x4e0)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4e0(0x04)
	char pad_4E4[0xc]; // 0x4e4(0x0c)
};

// Class Landscape.LandscapeProxy
// Size: 0x5a0 (Inherited: 0x228)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x228(0x08)
	struct FGuid LandscapeGuid; // 0x230(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x240(0x08)
	int32_t MaxLODLevel; // 0x248(0x04)
	float LODDistanceFactor; // 0x24c(0x04)
	enum class ELandscapeLODFalloff LODFalloff; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float ComponentScreenSizeToUseSubSections; // 0x254(0x04)
	float LOD0ScreenSize; // 0x258(0x04)
	float LOD0DistributionSetting; // 0x25c(0x04)
	float LODDistributionSetting; // 0x260(0x04)
	float TessellationComponentScreenSize; // 0x264(0x04)
	bool UseTessellationComponentScreenSizeFalloff; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float TessellationComponentScreenSizeFalloff; // 0x26c(0x04)
	int32_t OccluderGeometryLOD; // 0x270(0x04)
	int32_t StaticLightingLOD; // 0x274(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x278(0x08)
	float StreamingDistanceMultiplier; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x288(0x08)
	char pad_290[0x20]; // 0x290(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2b0(0x08)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2b8(0x10)
	bool bMeshHoles; // 0x2c8(0x01)
	char MeshHolesMaxLod; // 0x2c9(0x01)
	char pad_2CA[0x6]; // 0x2ca(0x06)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2d0(0x10)
	int32_t VirtualTextureNumLods; // 0x2e0(0x04)
	int32_t VirtualTextureLodBias; // 0x2e4(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2e8(0x01)
	char pad_2E9[0x3]; // 0x2e9(0x03)
	float NegativeZBoundsExtension; // 0x2ec(0x04)
	float PositiveZBoundsExtension; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x2f8(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x308(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x318(0x10)
	char pad_328[0x64]; // 0x328(0x64)
	bool bHasLandscapeGrass; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	float StaticLightingResolution; // 0x390(0x04)
	char CastShadow : 1; // 0x394(0x01)
	char bCastDynamicShadow : 1; // 0x394(0x01)
	char bCastStaticShadow : 1; // 0x394(0x01)
	char pad_394_3 : 5; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	char bCastFarShadow : 1; // 0x398(0x01)
	char pad_398_1 : 7; // 0x398(0x01)
	char pad_399[0x3]; // 0x399(0x03)
	char bCastHiddenShadow : 1; // 0x39c(0x01)
	char pad_39C_1 : 7; // 0x39c(0x01)
	char pad_39D[0x3]; // 0x39d(0x03)
	char bCastShadowAsTwoSided : 1; // 0x3a0(0x01)
	char pad_3A0_1 : 7; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x3a4(0x01)
	char pad_3A4_1 : 7; // 0x3a4(0x01)
	struct FLightingChannels LightingChannels; // 0x3a5(0x01)
	char pad_3A6[0x2]; // 0x3a6(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3a8(0x01)
	char bRenderCustomDepth : 1; // 0x3a8(0x01)
	char pad_3A8_2 : 6; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	int32_t CustomDepthStencilValue; // 0x3b0(0x04)
	float LDMaxDrawDistance; // 0x3b4(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3b8(0x18)
	int32_t CollisionMipLevel; // 0x3d0(0x04)
	int32_t SimpleCollisionMipLevel; // 0x3d4(0x04)
	float CollisionThickness; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct FBodyInstance BodyInstance; // 0x3e0(0x158)
	char bGenerateOverlapEvents : 1; // 0x538(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x538(0x01)
	char pad_538_2 : 6; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	int32_t ComponentSizeQuads; // 0x53c(0x04)
	int32_t SubsectionSizeQuads; // 0x540(0x04)
	int32_t NumSubsections; // 0x544(0x04)
	char bUsedForNavigation : 1; // 0x548(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x548(0x01)
	char pad_548_2 : 6; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	bool bUseDynamicMaterialInstance; // 0x54c(0x01)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x54d(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x54e(0x01)
	bool bHasLayersContent; // 0x54f(0x01)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x550(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x24fc860
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x24fc790
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x24fc6c0
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x24fc5a0
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x1295b10
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|Native|Public|BlueprintCallable) // @ game+0x24fc210
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x24fc180
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // @ game+0x24fc0f0
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // @ game+0x12bf7f0
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x1242230
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x24fc060
};

// Class Landscape.Landscape
// Size: 0x5a0 (Inherited: 0x5a0)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x228 (Inherited: 0x228)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // @ game+0xb45020
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x24faac0
	void Initialize(struct FTransform InLandscapeTransform, struct FIntPoint InLandscapeSize, struct FIntPoint InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x24fa940
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*> OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
};

// Class Landscape.LandscapeLODStreamingProxy
// Size: 0x68 (Inherited: 0x60)
struct ULandscapeLODStreamingProxy : UStreamableRenderAsset {
	char pad_60[0x8]; // 0x60(0x08)
};

// Class Landscape.LandscapeComponent
// Size: 0x670 (Inherited: 0x450)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x450(0x04)
	int32_t SectionBaseY; // 0x454(0x04)
	int32_t ComponentSizeQuads; // 0x458(0x04)
	int32_t SubsectionSizeQuads; // 0x45c(0x04)
	int32_t NumSubsections; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x468(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x470(0x08)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x478(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x488(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x498(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x4a8(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x4b8(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x4c8(0x08)
	struct FVector4 WeightmapScaleBias; // 0x4d0(0x10)
	float WeightmapSubsectionOffset; // 0x4e0(0x04)
	char pad_4E4[0xc]; // 0x4e4(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x4f0(0x10)
	struct FBox CachedLocalBox; // 0x500(0x1c)
	LazyObjectProperty CollisionComponent; // 0x51c(0x1c)
	struct UTexture2D* HeightmapTexture; // 0x538(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x540(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x550(0x10)
	struct ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x560(0x08)
	struct FGuid MapBuildDataId; // 0x568(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x578(0x10)
	int32_t CollisionMipLevel; // 0x588(0x04)
	int32_t SimpleCollisionMipLevel; // 0x58c(0x04)
	float NegativeZBoundsExtension; // 0x590(0x04)
	float PositiveZBoundsExtension; // 0x594(0x04)
	float StaticLightingResolution; // 0x598(0x04)
	int32_t ForcedLOD; // 0x59c(0x04)
	int32_t LODBias; // 0x5a0(0x04)
	struct FGuid StateId; // 0x5a4(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x5b4(0x10)
	char pad_5C4[0x4]; // 0x5c4(0x04)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x5c8(0x08)
	char MobileBlendableLayerMask; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	struct UMaterialInterface* MobileMaterialInterface; // 0x5d8(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x5e0(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x5f0(0x10)
	char pad_600[0x70]; // 0x600(0x70)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24fa870
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24fa790
	float EditorGetPaintLayerWeightAtLocation(struct FVector InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x24fa6b0
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x228 (Inherited: 0x228)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x278 (Inherited: 0x228)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_228[0x50]; // 0x228(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x450 (Inherited: 0x450)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x60 (Inherited: 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	char bEnableDensityScaling : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* GrassMesh; // 0x40(0x08)
	float GrassDensity; // 0x48(0x04)
	float PlacementJitter; // 0x4c(0x04)
	int32_t StartCullDistance; // 0x50(0x04)
	int32_t EndCullDistance; // 0x54(0x04)
	bool RandomRotation; // 0x58(0x01)
	bool AlignToSurface; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x530 (Inherited: 0x450)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x450(0x10)
	int32_t SectionBaseX; // 0x460(0x04)
	int32_t SectionBaseY; // 0x464(0x04)
	int32_t CollisionSizeQuads; // 0x468(0x04)
	float CollisionScale; // 0x46c(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x478(0x10)
	struct FGuid HeightfieldGuid; // 0x488(0x10)
	struct FBox CachedLocalBox; // 0x498(0x1c)
	LazyObjectProperty RenderComponent; // 0x4b4(0x1c)
	char pad_4D0[0x10]; // 0x4d0(0x10)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x4e0(0x10)
	char pad_4F0[0x40]; // 0x4f0(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x24fa910
};

// Class Landscape.LandscapeInfo
// Size: 0x210 (Inherited: 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1c)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x04)
	int32_t SubsectionSizeQuads; // 0x58(0x04)
	int32_t ComponentNumSubsections; // 0x5c(0x04)
	struct FVector DrawScale; // 0x60(0x0c)
	char pad_6C[0xa4]; // 0x6c(0xa4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	char pad_120[0xf0]; // 0x120(0xf0)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x80 (Inherited: 0x28)
struct ULandscapeInfoMap : UObject {
	char pad_28[0x58]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x50 (Inherited: 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x08)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x08)
	float Hardness; // 0x38(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x380 (Inherited: 0x368)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x368(0x10)
	char bIsLayerThumbnail : 1; // 0x378(0x01)
	char bDisableTessellation : 1; // 0x378(0x01)
	char bMobile : 1; // 0x378(0x01)
	char bEditorToolUsage : 1; // 0x378(0x01)
	char pad_378_4 : 4; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x550 (Inherited: 0x530)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x530(0x10)
	char pad_540[0x10]; // 0x540(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x230 (Inherited: 0x228)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x228(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x510 (Inherited: 0x4e0)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x4e0(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x4f0(0x10)
	int8_t ProxyLOD; // 0x500(0x01)
	char pad_501[0xf]; // 0x501(0x0f)
};

// Class Landscape.LandscapeSettings
// Size: 0x40 (Inherited: 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x480 (Inherited: 0x450)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x450(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x460(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x470(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x24fe440
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xa8 (Inherited: 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	float Width; // 0x40(0x04)
	float LayerWidthRatio; // 0x44(0x04)
	float SideFalloff; // 0x48(0x04)
	float LeftSideFalloffFactor; // 0x4c(0x04)
	float RightSideFalloffFactor; // 0x50(0x04)
	float LeftSideLayerFalloffFactor; // 0x54(0x04)
	float RightSideLayerFalloffFactor; // 0x58(0x04)
	float EndFalloff; // 0x5c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xa0(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xb0 (Inherited: 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1c)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xa0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x5c0 (Inherited: 0x5a0)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x5a0(0x1c)
	char pad_5BC[0x4]; // 0x5bc(0x04)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x48 (Inherited: 0x30)
struct ULandscapeSubsystem : UWorldSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x58 (Inherited: 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0x58 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	float MappingScale; // 0x44(0x04)
	float MappingRotation; // 0x48(0x04)
	float MappingPanU; // 0x4c(0x04)
	float MappingPanV; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0x60 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40(0x08)
	float PreviewWeight; // 0x48(0x04)
	struct FGuid ExpressionGUID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x88 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput LayerNotUsed; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	char PreviewUsed : 1; // 0x70(0x01)
	char pad_70_1 : 7; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x90 (Inherited: 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0x0c)
	char pad_4C[0x8]; // 0x4c(0x08)
	struct FExpressionInput Layer; // 0x54(0x0c)
	char pad_60[0x8]; // 0x60(0x08)
	struct FName ParameterName; // 0x68(0x08)
	float PreviewWeight; // 0x70(0x04)
	struct FVector ConstBase; // 0x74(0x0c)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FPhysicalMaterialInput> Inputs; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0x50 (Inherited: 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

