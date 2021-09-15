// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x420 (Inherited: 0x200)
struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x1f8(0x01)
	char bIsBreakingEventListeningEnabled : 1; // 0x1f8(0x01)
	char bIsTrailingEventListeningEnabled : 1; // 0x1f8(0x01)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x1fc(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x214(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x22c(0x18)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x248(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x298(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x2e8(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x2f8(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x308(0x10)
	char pad_318_3 : 5; // 0x318(0x01)
	char pad_319[0x107]; // 0x319(0x107)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData> TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34103b0
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData> CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34102b0
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData> BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x34101b0
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3410110
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x3410080
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x340ff50
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x340fec0
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x340fe20
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x340fd90
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x340fd00
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1295b10
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x340fa10
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // @ game+0x340f720
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // @ game+0x1295b10
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x238 (Inherited: 0x228)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x228(0x08)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x230(0x08)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x340fb80
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50 (Inherited: 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x08)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0x900 (Inherited: 0x480)
struct UGeometryCollectionComponent : UMeshComponent {
	struct AChaosSolverActor* ChaosSolverActor; // 0x480(0x08)
	char pad_488[0xe0]; // 0x488(0xe0)
	struct UGeometryCollection* RestCollection; // 0x568(0x08)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x570(0x10)
	bool Simulating; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	enum class EObjectStateTypeEnum ObjectType; // 0x588(0x01)
	bool EnableClustering; // 0x589(0x01)
	char pad_58A[0x2]; // 0x58a(0x02)
	int32_t ClusterGroupIndex; // 0x58c(0x04)
	int32_t MaxClusterLevel; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct TArray<float> DamageThreshold; // 0x598(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x5a8(0x01)
	char pad_5A9[0x3]; // 0x5a9(0x03)
	int32_t CollisionGroup; // 0x5ac(0x04)
	float CollisionSampleFraction; // 0x5b0(0x04)
	float LinearEtherDrag; // 0x5b4(0x04)
	float AngularEtherDrag; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x5c0(0x08)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x5c8(0x01)
	char pad_5C9[0x3]; // 0x5c9(0x03)
	struct FVector InitialLinearVelocity; // 0x5cc(0x0c)
	struct FVector InitialAngularVelocity; // 0x5d8(0x0c)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct UPhysicalMaterial* PhysicalMaterialOverride; // 0x5e8(0x08)
	struct FGeomComponentCacheParameters CacheParameters; // 0x5f0(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x640(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x650(0x10)
	char pad_660[0x18]; // 0x660(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x678(0x10)
	float DesiredCacheTime; // 0x688(0x04)
	bool CachePlayback; // 0x68c(0x01)
	char pad_68D[0x3]; // 0x68d(0x03)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x690(0x10)
	bool bNotifyBreaks; // 0x6a0(0x01)
	bool bNotifyCollisions; // 0x6a1(0x01)
	bool bEnableReplication; // 0x6a2(0x01)
	bool bEnableAbandonAfterLevel; // 0x6a3(0x01)
	int32_t ReplicationAbandonClusterLevel; // 0x6a4(0x04)
	struct FGeometryCollectionRepData RepData; // 0x6a8(0x18)
	char pad_6C0[0x218]; // 0x6c0(0x218)
	struct UBodySetup* DummyBodySetup; // 0x8d8(0x08)
	char pad_8E0[0x20]; // 0x8e0(0x20)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // @ game+0x340fff0
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnRep_RepData(struct FGeometryCollectionRepData OldData); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData // (Final|Native|Protected|HasOutParms) // @ game+0x340fad0
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x16c0340
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x16c0340
	void NetAbandonCluster(int32_t TransformIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster // (Final|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x340fa40
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // @ game+0x340f890
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x340f7b0
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x310 (Inherited: 0x228)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x230(0x18)
	bool bDebugDrawWholeCollection; // 0x248(0x01)
	bool bDebugDrawHierarchy; // 0x249(0x01)
	bool bDebugDrawClustering; // 0x24a(0x01)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x24b(0x01)
	bool bShowRigidBodyId; // 0x24c(0x01)
	bool bShowRigidBodyCollision; // 0x24d(0x01)
	bool bCollisionAtOrigin; // 0x24e(0x01)
	bool bShowRigidBodyTransform; // 0x24f(0x01)
	bool bShowRigidBodyInertia; // 0x250(0x01)
	bool bShowRigidBodyVelocity; // 0x251(0x01)
	bool bShowRigidBodyForce; // 0x252(0x01)
	bool bShowRigidBodyInfos; // 0x253(0x01)
	bool bShowTransformIndex; // 0x254(0x01)
	bool bShowTransform; // 0x255(0x01)
	bool bShowParent; // 0x256(0x01)
	bool bShowLevel; // 0x257(0x01)
	bool bShowConnectivityEdges; // 0x258(0x01)
	bool bShowGeometryIndex; // 0x259(0x01)
	bool bShowGeometryTransform; // 0x25a(0x01)
	bool bShowBoundingBox; // 0x25b(0x01)
	bool bShowFaces; // 0x25c(0x01)
	bool bShowFaceIndices; // 0x25d(0x01)
	bool bShowFaceNormals; // 0x25e(0x01)
	bool bShowSingleFace; // 0x25f(0x01)
	int32_t SingleFaceIndex; // 0x260(0x04)
	bool bShowVertices; // 0x264(0x01)
	bool bShowVertexIndices; // 0x265(0x01)
	bool bShowVertexNormals; // 0x266(0x01)
	bool bUseActiveVisualization; // 0x267(0x01)
	float PointThickness; // 0x268(0x04)
	float LineThickness; // 0x26c(0x04)
	bool bTextShadow; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float TextScale; // 0x274(0x04)
	float NormalScale; // 0x278(0x04)
	float AxisScale; // 0x27c(0x04)
	float ArrowScale; // 0x280(0x04)
	struct FColor RigidBodyIdColor; // 0x284(0x04)
	float RigidBodyTransformScale; // 0x288(0x04)
	struct FColor RigidBodyCollisionColor; // 0x28c(0x04)
	struct FColor RigidBodyInertiaColor; // 0x290(0x04)
	struct FColor RigidBodyVelocityColor; // 0x294(0x04)
	struct FColor RigidBodyForceColor; // 0x298(0x04)
	struct FColor RigidBodyInfoColor; // 0x29c(0x04)
	struct FColor TransformIndexColor; // 0x2a0(0x04)
	float TransformScale; // 0x2a4(0x04)
	struct FColor LevelColor; // 0x2a8(0x04)
	struct FColor ParentColor; // 0x2ac(0x04)
	float ConnectivityEdgeThickness; // 0x2b0(0x04)
	struct FColor GeometryIndexColor; // 0x2b4(0x04)
	float GeometryTransformScale; // 0x2b8(0x04)
	struct FColor BoundingBoxColor; // 0x2bc(0x04)
	struct FColor FaceColor; // 0x2c0(0x04)
	struct FColor FaceIndexColor; // 0x2c4(0x04)
	struct FColor FaceNormalColor; // 0x2c8(0x04)
	struct FColor SingleFaceColor; // 0x2cc(0x04)
	struct FColor VertexColor; // 0x2d0(0x04)
	struct FColor VertexIndexColor; // 0x2d4(0x04)
	struct FColor VertexNormalColor; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UBillboardComponent* SpriteComponent; // 0x2e0(0x08)
	char pad_2E8[0x28]; // 0x2e8(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xc8 (Inherited: 0xb0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0(0x08)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size: 0xe0 (Inherited: 0x28)
struct UGeometryCollection : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct TArray<struct FGeometryCollectionSource> GeometrySource; // 0x30(0x10)
	struct TArray<struct UMaterialInterface*> Materials; // 0x40(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x50(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t MinLevelSetResolution; // 0x54(0x04)
	int32_t MaxLevelSetResolution; // 0x58(0x04)
	int32_t MinClusterLevelSetResolution; // 0x5c(0x04)
	int32_t MaxClusterLevelSetResolution; // 0x60(0x04)
	float CollisionObjectReductionPercentage; // 0x64(0x04)
	bool bMassAsDensity; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float Mass; // 0x6c(0x04)
	float MinimumMassClamp; // 0x70(0x04)
	float CollisionParticlesFraction; // 0x74(0x04)
	int32_t MaximumCollisionParticles; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x80(0x10)
	bool EnableRemovePiecesOnFracture; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x98(0x10)
	struct FGuid PersistentGuid; // 0xa8(0x10)
	struct FGuid StateGuid; // 0xb8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xc8(0x04)
	char pad_CC[0x14]; // 0xcc(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x2c0 (Inherited: 0x228)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x228(0x08)
	struct UMaterial* RayMarchMaterial; // 0x230(0x08)
	float SurfaceTolerance; // 0x238(0x04)
	float Isovalue; // 0x23c(0x04)
	bool Enabled; // 0x240(0x01)
	bool RenderVolumeBoundingBox; // 0x241(0x01)
	char pad_242[0x7e]; // 0x242(0x7e)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size: 0x138 (Inherited: 0xb0)
struct USkeletalMeshSimulationComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xb8(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xc0(0x08)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xc8(0x08)
	bool bSimulating; // 0xd0(0x01)
	bool bNotifyCollisions; // 0xd1(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xd2(0x01)
	char pad_D3[0x1]; // 0xd3(0x01)
	float Density; // 0xd4(0x04)
	float MinMass; // 0xd8(0x04)
	float MaxMass; // 0xdc(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	float ImplicitShapeParticlesPerUnitArea; // 0xe4(0x04)
	int32_t ImplicitShapeMinNumParticles; // 0xe8(0x04)
	int32_t ImplicitShapeMaxNumParticles; // 0xec(0x04)
	int32_t MinLevelSetResolution; // 0xf0(0x04)
	int32_t MaxLevelSetResolution; // 0xf4(0x04)
	int32_t CollisionGroup; // 0xf8(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	struct FVector InitialLinearVelocity; // 0x100(0x0c)
	struct FVector InitialAngularVelocity; // 0x10c(0x0c)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118(0x10)
	char pad_128[0x10]; // 0x128(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size: 0x138 (Inherited: 0xb0)
struct UStaticMeshSimulationComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	bool Simulating; // 0xb8(0x01)
	bool bNotifyCollisions; // 0xb9(0x01)
	enum class EObjectStateTypeEnum ObjectType; // 0xba(0x01)
	char pad_BB[0x1]; // 0xbb(0x01)
	float Mass; // 0xbc(0x04)
	enum class ECollisionTypeEnum CollisionType; // 0xc0(0x01)
	enum class EImplicitTypeEnum ImplicitType; // 0xc1(0x01)
	char pad_C2[0x2]; // 0xc2(0x02)
	int32_t MinLevelSetResolution; // 0xc4(0x04)
	int32_t MaxLevelSetResolution; // 0xc8(0x04)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct FVector InitialLinearVelocity; // 0xd0(0x0c)
	struct FVector InitialAngularVelocity; // 0xdc(0x0c)
	float DamageThreshold; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xf0(0x08)
	struct AChaosSolverActor* ChaosSolverActor; // 0xf8(0x08)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100(0x10)
	char pad_110[0x10]; // 0x110(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x120(0x10)
	char pad_130[0x8]; // 0x130(0x08)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // @ game+0x340f9f0
};

