// Enum Tiger.ETigerDisciplineCooldownReductionType
enum class ETigerDisciplineCooldownReductionType : uint8 {
	Seconds,
	MultiplierOfTotal,
	MultiplierOfRemaining,
	ETigerDisciplineCooldownReductionType_MAX,
};

// Enum Tiger.ETigerDisciplinesEnum
enum class ETigerDisciplinesEnum : uint8 {
	TE_DisciplineNone,
	TE_DisciplineTeleport,
	TE_DisciplineStun,
	TE_DisciplineFOTT,
	TE_DisciplineJump,
	TE_DisciplineSwiftStrike,
	TE_DisciplineFlowerOfDeath,
	TE_DisciplineDisplacement,
	TE_DisciplineEarthshock,
	TE_DisciplineFrenzy,
	TE_DisciplineVanish,
	TE_DisciplineScouts,
	TE_DisciplineLaceratingThrow,
	TE_DisciplineReposition,
	TE_DisciplineIncitePain,
	TE_DisciplineMajesty,
	TE_DisciplineGuardBreak,
	TE_DisciplinePassion,
	TE_DisciplineCharm,
	TE_DisciplineProjectionDash,
	TE_DisciplineBlindingBeauty,
	TE_DisciplineRejuvenatingVoice,
	TE_DisciplineShackles,
	TE_DisciplineTraps,
	TE_DisciplineShockwavePunch,
	TE_WeaponAbilityAxeThrow,
	TE_WeaponAbilityDash,
	TE_WeaponAbilityHook,
	TE_WeaponAbilityReflect,
	TE_WeaponAbilitySpikedBat,
	TE_WeaponAbilityGreatsword,
	TE_WeaponAbilityThrowingKnifes,
	TE_DisciplineCount,
	TE_MAX,
};

// Enum Tiger.ETigerDisciplineSlot
enum class ETigerDisciplineSlot : uint8 {
	TE_DisciplineSlotLeft,
	TE_DisciplineSlotSuper,
	TE_DisciplineSlotRight,
	TE_DisciplineSlotCount,
	TE_MAX,
};

// Enum Tiger.ETigerCharacterActions
enum class ETigerCharacterActions : uint8 {
	Reloading,
	Shooting,
	Aiming,
	Blocking,
	MeleeAttack,
	Climbing,
	LedgeGrab,
	LowVault,
	Interacting,
	UseDiscipline,
	SwitchWeapon,
	Jump,
	Sprinting,
	AlternateAction,
	None,
	ETigerCharacterActions_MAX,
};

// Enum Tiger.ETigerDisciplineEvent
enum class ETigerDisciplineEvent : uint8 {
	ScoutSpawned,
	ScoutDespawned,
	AnimationCallback,
	ProjectionDied,
	TeleportToProjection,
	EnablePlayerMovement,
	WeaponAbility_ThrowHook,
	ProjectionDiedDueToOutOfRange,
	ETigerDisciplineEvent_MAX,
};

// Enum Tiger.ETigerInputActionResult
enum class ETigerInputActionResult : uint8 {
	Failed,
	Buffer,
	Success,
	ETigerInputActionResult_MAX,
};

// Enum Tiger.ETigerTraversalAction
enum class ETigerTraversalAction : uint8 {
	Jump,
	WallJump,
	SlideBegin,
	SlideEnd,
	SlideJump,
	AirDash,
	WallGrindStarted,
	WallGrindEnded,
	ClimbStarted,
	ClimbEnded,
	HardLanding,
	ETigerTraversalAction_MAX,
};

// Enum Tiger.ETigerCharacterAkAlignmentType
enum class ETigerCharacterAkAlignmentType : uint8 {
	Me,
	Ally,
	Enemy,
	Count,
	ETigerCharacterAkAlignmentType_MAX,
};

// Enum Tiger.ETigerCharacterAction
enum class ETigerCharacterAction : uint8 {
	Dodged,
	MeleeAttack,
	RangedAttack,
	Aimed,
	DisciplineActivated,
	SuperDisciplineActivated,
	PickedUpItem,
	BeginBlock,
	RangedDamageTaken,
	MeleeDamageTaken,
	DisciplineDamageTaken,
	OtherDamageTaken,
	DodgeAborted,
	DisciplineReleased,
	Downed,
	DamageDealt,
	ETigerCharacterAction_MAX,
};

// Enum Tiger.ETigerCharacterType
enum class ETigerCharacterType : uint8 {
	Player,
	Npc,
	TutorialTrainer,
	PlayerBot,
	Count,
	ETigerCharacterType_MAX,
};

// Enum Tiger.ETigerGender
enum class ETigerGender : uint8 {
	Female,
	Male,
	Count,
	ETigerGender_MAX,
};

// Enum Tiger.ETigerMetaStoreEventType
enum class ETigerMetaStoreEventType : uint8 {
	ConfigAdded,
	ConfigChanged,
	ConfigGetFailed,
	ETigerMetaStoreEventType_MAX,
};

// Enum Tiger.ETigerMetaStoreCategoryType
enum class ETigerMetaStoreCategoryType : uint8 {
	All,
	FlashStore,
	Battlepass,
	SeasonRankSkip,
	ETigerMetaStoreCategoryType_MAX,
};

// Enum Tiger.ETigerBuyStoreEntryResponseCode
enum class ETigerBuyStoreEntryResponseCode : uint8 {
	Success,
	Error_InsufficentFunds,
	Error_NoVendor,
	Error_InvalidEntry,
	Error_NoPlayerDataService,
	Error_BackendError,
	Error_NoResponse,
	Error_ParsePlayerTransactionalData,
	Error_BuyResult_InsufficentFunds,
	Error_BuyResult_InsufficientItems,
	Error_BuyResult_ExpiredItem,
	Error_BuyResult_Unknown,
	Error_TimedOut,
	ETigerBuyStoreEntryResponseCode_MAX,
};

// Enum Tiger.ETigerPowerKitType
enum class ETigerPowerKitType : uint8 {
	None,
	Veteran,
	Outlaw,
	Siren,
	Nightingale,
	Animalist,
	Technocrat,
	Count,
	ETigerPowerKitType_MAX,
};

// Enum Tiger.ETigerThrallId
enum class ETigerThrallId : uint8 {
	None,
	Brutallist,
	Rebel,
	Hacker,
	Monster,
	Lover,
	Model,
	Max,
};

// Enum Tiger.ETigerPlayerEvent
enum class ETigerPlayerEvent : uint8 {
	None,
	OnFeedingCompleted,
	OnRatFeedingCompleted,
	OnFedOnHighPotenceBlood,
	OnDownedPlayer,
	OnDownedBloodHuntedPlayer,
	OnDownedPlayerWithHeadshot,
	OnDownedPlayerWithMelee,
	OnDownedEntity,
	OnDiablerizedPlayer,
	OnDiablerizedBloodHuntedPlayer,
	OnSurvivedHolyIncenseWave,
	OnKilledEntityGrunt,
	OnKilledOtherPlayer,
	OnKilledBloodHuntedPlayer,
	OnPickedUpRelic,
	OnFedOnSuperHighPotenceBlood,
	OnFedOnEntity,
	OnPickedUpArtifact,
	OnNewTrackingTrailSpawned,
	OnAssistDowned,
	OnAssistKill,
	OnRevivedPlayer,
	OnSurviveBloodHunted,
	OnSurviveDownedState,
	OnOpenedCrate,
	OnFirstStoreBurglary,
	OnWipedOtherGroup,
	OnPickedUpCollectible,
	Size,
	ETigerPlayerEvent_MAX,
};

// Enum Tiger.ETigerSeasonExperienceSource
enum class ETigerSeasonExperienceSource : uint8 {
	Placement,
	PlacementBonus,
	SurvivalTime,
	DownedEnemies,
	Eliminations,
	Diableries,
	Assists,
	DamageDealt,
	EntityKilled,
	IngameAchievements,
	ChallengeRewards,
	Collectible,
	QuestRewards,
	Count,
	ETigerSeasonExperienceSource_MAX,
};

// Enum Tiger.ETigerGrimoireEntryState
enum class ETigerGrimoireEntryState : uint8 {
	Locked,
	Unlocked,
	Read,
	ETigerGrimoireEntryState_MAX,
};

// Enum Tiger.ETigerLoginStatus
enum class ETigerLoginStatus : uint8 {
	NotLoggedIn,
	LoggingIn,
	LoggedIn,
	ETigerLoginStatus_MAX,
};

// Enum Tiger.ETigerVersionCheckStatus
enum class ETigerVersionCheckStatus : uint8 {
	NotChecked,
	Checking,
	Validated,
	ETigerVersionCheckStatus_MAX,
};

// Enum Tiger.ETigerTraversalTransitionAction
enum class ETigerTraversalTransitionAction : uint8 {
	Jump,
	Crouch,
	OnMovementUpdated,
	OnMovementModeChanged,
	DeltaCorrection,
	InitialReplication,
	Climb,
	Downed,
	FromSavedMove,
	StartedForcedMove,
	Reset,
	ETigerTraversalTransitionAction_MAX,
};

// Enum Tiger.ETigerTraversalState
enum class ETigerTraversalState : uint8 {
	Walking,
	Falling,
	Jumping,
	WallGrinding,
	WallJumping,
	AirDashing,
	Climbing,
	LedgeGrabbing,
	Sliding,
	Crouching,
	SlideJump,
	Downed,
	LowVault,
	ForcedMove,
	WallHang,
	Count,
	ETigerTraversalState_MAX,
};

// Enum Tiger.ETigerServerScalabilityTarget
enum class ETigerServerScalabilityTarget : uint8 {
	Target_10Hz,
	Target_20Hz,
	Target_30Hz,
	Target_MAX,
};

// Enum Tiger.ETigerMatchState
enum class ETigerMatchState : uint8 {
	MatchNotStarted,
	MatchStarted,
	OneLastGroupAlive,
	CapturePointCaptured,
	MatchEnded,
	ETigerMatchState_MAX,
};

// Enum Tiger.ETigerPreMatchState
enum class ETigerPreMatchState : uint8 {
	Unknown,
	WaitingForGroups,
	WaitingForPlayerConnections,
	RebalancingGroups,
	PreSpawnSelect,
	SpawnSelect,
	PostSpawnSelect,
	ArchetypeSelect,
	TeamView,
	SpawnPawns,
	WaitingForLoadingPlayers,
	FreeLookPreparationCountdown,
	PreMatchEnded,
	ETigerPreMatchState_MAX,
};

// Enum Tiger.EMatchBalanceMode
enum class EMatchBalanceMode : uint8 {
	Solo,
	Group,
	Count,
	EMatchBalanceMode_MAX,
};

// Enum Tiger.ETigerPlayerLifeStatus
enum class ETigerPlayerLifeStatus : uint8 {
	Alive,
	Downed,
	Dead,
	ETigerPlayerLifeStatus_MAX,
};

// Enum Tiger.ETigerBloodType
enum class ETigerBloodType : uint8 {
	Choleric,
	Melancholic,
	Phlegmatic,
	Sanguine,
	Count,
	ETigerBloodType_MAX,
};

// Enum Tiger.ETigerBloodPotency
enum class ETigerBloodPotency : uint8 {
	Drained,
	Normal,
	Potent,
	HighPotent,
	Count,
	ETigerBloodPotency_MAX,
};

// Enum Tiger.ETigerNPCType
enum class ETigerNPCType : uint8 {
	Civilian,
	Guard,
	Entity,
	Judge,
	Count,
	ETigerNPCType_MAX,
};

// Enum Tiger.ETigerDetachMethod
enum class ETigerDetachMethod : uint8 {
	Destroy,
	Drop,
	ETigerDetachMethod_MAX,
};

// Enum Tiger.ETigerAIAnimationMode
enum class ETigerAIAnimationMode : uint8 {
	Neutral,
	Suspicious,
	Threatened,
	BloodDrained,
	Lured,
	Downed,
	Sprinting,
	Strafing,
	ETigerAIAnimationMode_MAX,
};

// Enum Tiger.ETigerAIMasqueradeState
enum class ETigerAIMasqueradeState : uint8 {
	None,
	Downed,
	Suspicious,
	Threatened,
	Count,
	ETigerAIMasqueradeState_MAX,
};

// Enum Tiger.ETigerCivilianEmotionalState
enum class ETigerCivilianEmotionalState : uint8 {
	Neutral,
	Cocky,
	Disbelief,
	Drunk,
	Fearful,
	Flirty,
	Count,
	ETigerCivilianEmotionalState_MAX,
};

// Enum Tiger.ETigerGameType
enum class ETigerGameType : uint8 {
	Elysium,
	BattleRoyale,
	Tutorial,
	PvpArena,
	Benchmark,
	Invalid,
	ETigerGameType_MAX,
};

// Enum Tiger.ESessionType
enum class ESessionType : uint8 {
	Elysium,
	Match,
	Unknown,
	ESessionType_MAX,
};

// Enum Tiger.ETigerClan
enum class ETigerClan : uint8 {
	Brujah,
	Nosferatu,
	Toreador,
	Count,
	ETigerClan_MAX,
};

// Enum Tiger.ETigerSeasonMatchStatType
enum class ETigerSeasonMatchStatType : uint8 {
	Placement,
	LevelReached,
	Kills,
	KillAssists,
	Diableries,
	DamageDone,
	Count,
	ETigerSeasonMatchStatType_MAX,
};

// Enum Tiger.ETigerKillerType
enum class ETigerKillerType : uint8 {
	Unknown,
	Player,
	Entity,
	RedGas,
	Shark,
	ETigerKillerType_MAX,
};

// Enum Tiger.ETigerGroupingMode
enum class ETigerGroupingMode : uint8 {
	Solo,
	SquadOfFour,
	Count,
	ETigerGroupingMode_MAX,
};

// Enum Tiger.ETigerColourSpace
enum class ETigerColourSpace : uint8 {
	LinearSpace,
	SrgbSpace,
	ETigerColourSpace_MAX,
};

// Enum Tiger.ETigerUIColor
enum class ETigerUIColor : uint8 {
	Masquerade_None,
	Masquerade_Suspicious,
	Masquerade_Threatened,
	Masquerade_BloodHunted,
	Ally,
	GroupMember,
	Crosshair_ActionText,
	Crosshair_ItemPickupDenied,
	Crosshair_ItemPickupDeniedInputKey,
	Text_Header_Orange,
	Text_Header_Red,
	Text_Header_DarkRed,
	Text_HardCurrency,
	Text_NeutralPlayerName,
	Text_PlayerTitle,
	Brand_MedallionYellow,
	Brand_SpurseBlue,
	Brand_JadeGreen,
	Brand_CarmineRed,
	Hitmarker_NoExtraHealth,
	Group_Player1,
	Group_Player2,
	Group_Player3,
	Group_Player4,
	Rarity_Common,
	Rarity_Uncommon,
	Rarity_Rare,
	Rarity_Epic,
	Rarity_Legendary,
	Heal,
	ItemType_Weapon,
	ItemType_Ammo,
	ItemType_Mod,
	ItemType_Healing,
	ItemType_Consumable,
	ItemType_Artifact,
	Count,
	ETigerUIColor_MAX,
};

// Enum Tiger.ETargetInteraction
enum class ETargetInteraction : uint8 {
	None,
	PickupItem,
	Lure,
	Feed,
	TalkTo,
	UsingConsumable,
	InteractWithObject,
	DiablerizeTrainer,
	ReviveTrainer,
	JudgeFeed,
	Diablerize,
	Revive,
	ETargetInteraction_MAX,
};

// Enum Tiger.ETigerWeaponMeleeAttackType
enum class ETigerWeaponMeleeAttackType : uint8 {
	Invalid,
	Normal,
	Sprinting,
	Aerial,
	QuickAttack,
	UNUSED_3,
	StrafeAttack,
	Heavy,
	Count,
	ETigerWeaponMeleeAttackType_MAX,
};

// Enum Tiger.ETigerTelemetryMatchmackingCancelReason
enum class ETigerTelemetryMatchmackingCancelReason : uint8 {
	Input,
	Timeout,
	ExitGame,
	ETigerTelemetryMatchmackingCancelReason_MAX,
};

// Enum Tiger.ETigerWeaponSlot
enum class ETigerWeaponSlot : uint8 {
	First,
	Ranged_Primary,
	Ranged_Secondary,
	Melee,
	Unarmed,
	Last,
	Count,
	ETigerWeaponSlot_MAX,
};

// Enum Tiger.ETigerOnlineErrorCategory
enum class ETigerOnlineErrorCategory : uint8 {
	ACC,
	SYS,
	SRV,
	ETigerOnlineErrorCategory_MAX,
};

// Enum Tiger.ETigerAIPlayerAction
enum class ETigerAIPlayerAction : uint8 {
	None,
	BulletImpactEnvironment,
	CollideWithCivilian,
	CollideWithGuard,
	DamageDealing,
	Dodge,
	AirDodgeRecovery,
	FeedingStart,
	FeedingTick,
	FeedingEnd,
	FeedingStoppedOnSpecificNPC,
	GenericDisciplineActivation,
	HardLanding,
	InsideSuspiciousVolume,
	InsideThreatVolume,
	MeleeAttack,
	Mobility,
	Sprinting,
	Climbing,
	AirTime,
	ReportSuspectPlayer,
	ReportThreateningPlayer,
	ShowingMeleeWeapon,
	ShowingRangedWeapon,
	AimingRangedWeapon,
	WeaponFired,
	SeenByEntity,
	SeenByEntityWhenBloodHunted,
	NotifyMasqueradeBreachSpecificNPC,
	SeenByGuardWhenBloodHunted,
	SeenBySuspectingGuard,
	FeedingStartGuard,
	FeedingTickGuard,
	FeedingEndGuard,
	DiablerizeStart,
	DiablerizeTick,
	DiablerizeEnd,
	HideousPassiveTick,
	AttackedByGuard,
	AttackedByEntity,
	UtilityRoarPower,
	UtilityRoarPowerCloseRange,
	ActivateCarAlarm,
	ActivateInvisibility,
	DeactivateInvisibility,
	TeleportToProjectionDash,
	KilledNPC,
	ActivateStoreAlarm,
	SeenByCivilianWhenBloodHunted,
	DisciplineBegin,
	DisciplineActivationFOTT,
	DisciplineActivationMightyLeap,
	DisciplineActivationSwiftStrike,
	DisciplineActivationDisplacement,
	DisciplineActivationGroundSlam,
	DisciplineActivationFrenzy,
	DisciplineActivationVanish,
	DisciplineActivationScouts,
	DisciplineActivationGuardBreak,
	DisciplineActivationPassion,
	DisciplineActivationCharm,
	DisciplineActivationProjectionDash,
	DisciplineActivationShackles,
	DisciplineActivationRejuvanatingVoice,
	DisciplineActivationAxe,
	DisciplineActivationKatana,
	DisciplineActivationDualBlades,
	DisciplineActivationLaceratingThrow,
	DisciplineEnd,
	Count,
	ETigerAIPlayerAction_MAX,
};

// Enum Tiger.EBodyPart
enum class EBodyPart : uint8 {
	None,
	Head,
	Chest,
	Body,
	Arms,
	Legs,
	MAX,
};

// Enum Tiger.ETigerTelemetryItemSourceID
enum class ETigerTelemetryItemSourceID : uint8 {
	Cheat,
	BotCheat,
	Spawn,
	Floor,
	Van,
	Store,
	EntityCorpse,
	JudgeCorpse,
	PlayerCorpse,
	PlayerDrop,
	LootCrate,
	Collectible,
	ETigerTelemetryItemSourceID_MAX,
};

// Enum Tiger.ETigerMusicAudioState
enum class ETigerMusicAudioState : uint8 {
	None,
	Unknown,
	Silent,
	TitleScreen,
	Ambient,
	Feeding,
	Elysium,
	RedGas,
	Combat,
	Deployment,
	PreLoading,
	PostMatch,
	EntityNearby,
	LastStage,
	MasqueradeBreak,
	MainMenu,
	Count,
	ETigerMusicAudioState_MAX,
};

// Enum Tiger.ETigerFeedingAudioState
enum class ETigerFeedingAudioState : uint8 {
	None,
	IsFeeding,
	Count,
	ETigerFeedingAudioState_MAX,
};

// Enum Tiger.ETigerCombatAudioState
enum class ETigerCombatAudioState : uint8 {
	None,
	Kindred,
	Entity,
	Count,
	ETigerCombatAudioState_MAX,
};

// Enum Tiger.ETigerAmbienceAudioState
enum class ETigerAmbienceAudioState : uint8 {
	None,
	AmbienceOn,
	AmbienceOff,
	Count,
	ETigerAmbienceAudioState_MAX,
};

// Enum Tiger.ETigerMainMenuAudioState
enum class ETigerMainMenuAudioState : uint8 {
	None,
	InMainMenu,
	OutMainMenu,
	Count,
	ETigerMainMenuAudioState_MAX,
};

// Enum Tiger.ETigerIndoorAudioState
enum class ETigerIndoorAudioState : uint8 {
	None,
	Indoor,
	Count,
	ETigerIndoorAudioState_MAX,
};

// Enum Tiger.ETigerBlindedAudioState
enum class ETigerBlindedAudioState : uint8 {
	None,
	Blind,
	Count,
	ETigerBlindedAudioState_MAX,
};

// Enum Tiger.ETigerLodSplitMeshQuality
enum class ETigerLodSplitMeshQuality : uint8 {
	FullMesh,
	OnlyLod0,
	NoLod0,
	ETigerLodSplitMeshQuality_MAX,
};

// Enum Tiger.ETigerCharacterMeshPart
enum class ETigerCharacterMeshPart : uint8 {
	Body,
	Head,
	Hair,
	Hoodie,
	Headgear,
	Eyewear,
	Weapon,
	SecondaryWeapon,
	HolsteredWeapon,
	SecondaryHolsteredWeapon,
	BodyAdditional,
	Count,
	ETigerCharacterMeshPart_MAX,
};

// Enum Tiger.ETigerCharacterDynamicMeshType
enum class ETigerCharacterDynamicMeshType : uint8 {
	Generic,
	Piercing,
	Beard,
	Count,
	ETigerCharacterDynamicMeshType_MAX,
};

// Enum Tiger.ETigerOutlineMode
enum class ETigerOutlineMode : uint8 {
	HeightenedSenses,
	Lure,
	EnemyPlayer,
	ScoutingFamiliarsGroupMember,
	ScoutingFamiliars,
	BloodHuntedHSReveal,
	BloodHunted,
	CapturingHaven,
	CharmingUs,
	GroupMember,
	LocalPlayer,
	Count,
	None,
	ETigerOutlineMode_MAX,
};

// Enum Tiger.ETigerPersistentStoreCategory
enum class ETigerPersistentStoreCategory : uint8 {
	Featured,
	Apparel,
	Character,
	SkinColor,
	EyeBrows,
	EyebrowColors,
	EyebrowCategory,
	Beards,
	Hair,
	EyeColors,
	Accessories,
	Ink,
	Ethnicity,
	HairStyle,
	HairColor,
	FacialHair,
	FacialHairColor,
	FacePaint,
	Tattoo,
	Mask,
	Glasses,
	Body,
	BodyCategory,
	Emote,
	PlayerIcon,
	PlayerCardBackground,
	PlayerCardShape,
	Count,
	ETigerPersistentStoreCategory_MAX,
};

// Enum Tiger.ETigerPlayerApperanceChangeReason
enum class ETigerPlayerApperanceChangeReason : uint8 {
	Generic,
	CharacterSwitch,
	ETigerPlayerApperanceChangeReason_MAX,
};

// Enum Tiger.ETigerSessionSearchStatus
enum class ETigerSessionSearchStatus : uint8 {
	ReadyToSearch,
	Searching,
	SessionFound,
	JoiningSession,
	CouldNotFindSession,
	CouldNotJoinSession,
	ETigerSessionSearchStatus_MAX,
};

// Enum Tiger.ETigerWorldCompositionGridLayout
enum class ETigerWorldCompositionGridLayout : uint8 {
	QuadTree,
	HexGrid,
	ETigerWorldCompositionGridLayout_MAX,
};

// Enum Tiger.ETigerItemRarity
enum class ETigerItemRarity : uint8 {
	TigerItemRarity_Common,
	TigerItemRarity_Uncommon,
	TigerItemRarity_Rare,
	TigerItemRarity_Epic,
	TigerItemRarity_Legendary,
	TigerItemRarity_Size,
	TigerItemRarity_MAX,
};

// Enum Tiger.ETigerBloodResonanceBlockType
enum class ETigerBloodResonanceBlockType : uint8 {
	BloodType,
	ResonanceCap,
	Count,
	ETigerBloodResonanceBlockType_MAX,
};

// Enum Tiger.ETigerBloodVeinAlternateAction
enum class ETigerBloodVeinAlternateAction : uint8 {
	None,
	LaunchSolo,
	RejoinGroupLaunch,
	PassCoterieNavigator,
	ETigerBloodVeinAlternateAction_MAX,
};

// Enum Tiger.ETigerSelectNewSpectatorDirection
enum class ETigerSelectNewSpectatorDirection : uint8 {
	Next,
	Previous,
	ETigerSelectNewSpectatorDirection_MAX,
};

// Enum Tiger.ETigerMissionSuccessRating
enum class ETigerMissionSuccessRating : uint8 {
	Abject_Failure,
	Failure,
	Slight_Failure,
	Success,
	Good,
	Very_Good,
	Perfect,
	Minted,
	Double_Minted,
	ETigerMissionSuccessRating_MAX,
};

// Enum Tiger.ETigerCustomizePart
enum class ETigerCustomizePart : uint8 {
	Outfit,
	BodyType,
	Head,
	SkinColor,
	HairType,
	HairColor,
	Eyes,
	Tattoo,
	Makeup,
	BeardType,
	BeardColor,
	Count,
	ETigerCustomizePart_MAX,
};

// Enum Tiger.ETigerNewNotificationMenuOptions
enum class ETigerNewNotificationMenuOptions : uint8 {
	Rootmenu,
	LandingPage,
	Battlepass,
	Challenges,
	Challenges_Daily,
	Challenges_Weekly,
	Grimoire,
	Grimoire_Archetypes,
	Grimoire_Talents,
	Grimoire_Items,
	Grimoire_Locations,
	Grimoire_Lore,
	Grimoire_Characters,
	Grimoire_Collectibles,
	Grimoire_Tutorial,
	Bloodtrack,
	Inventory,
	Inventory_Character,
	Inventory_Body,
	Inventory_BodyType,
	Inventory_Head,
	Inventory_Hair,
	Inventory_Haircut,
	Inventory_HairColor,
	Inventory_Eyes,
	Inventory_Eyebrows,
	Inventory_EyebrowType,
	Inventory_EyebrowColor,
	Inventory_Makeup,
	Inventory_Tattoos,
	Inventory_FacialHair,
	Inventory_FacialHairType,
	Inventory_FacialHairColor,
	Inventory_Wardrobe,
	Inventory_Outfit,
	Inventory_Accessories,
	Inventory_Piercing,
	Inventory_Mask,
	Inventory_Glasses,
	Inventory_Hats,
	Inventory_Emotes,
	StoreMenu,
	Store_Flash,
	Store_Currency,
	ArchetypeSelect,
	Social,
	Social_Friends,
	Social_Elysium,
	Social_Invites,
	Social_GroupInvites,
	Social_FriendInvites,
	Thralls,
	Grimoire_Conversations,
	Inventory_Icon,
	Inventory_CardBackground,
	Count,
	None,
	ETigerNewNotificationMenuOptions_MAX,
};

// Enum Tiger.ETigerGrimoireSortType
enum class ETigerGrimoireSortType : uint8 {
	Default,
	Alphabetical,
	Unread,
	ETigerGrimoireSortType_MAX,
};

// Enum Tiger.ETigerChatMessageCategory
enum class ETigerChatMessageCategory : uint8 {
	Unknown,
	General,
	Group,
	Server,
	Game,
	ChatBanned,
	ETigerChatMessageCategory_MAX,
};

// Enum Tiger.ETigerIsDedicatedServer
enum class ETigerIsDedicatedServer : uint8 {
	DedicatedServer,
	Other,
	ETigerIsDedicatedServer_MAX,
};

// Enum Tiger.ETigerDamageCauser
enum class ETigerDamageCauser : uint8 {
	Unknown,
	HolyIncense,
	Water,
	Helicopter,
	NPC,
	Player,
	Trigger,
	ETigerDamageCauser_MAX,
};

// Enum Tiger.ETigerSignificanceBudgetType
enum class ETigerSignificanceBudgetType : uint8 {
	Elysium,
	Match,
	Count,
	ETigerSignificanceBudgetType_MAX,
};

// Enum Tiger.ETigerWeaponFireMode
enum class ETigerWeaponFireMode : uint8 {
	Single,
	Burst,
	Automatic,
	Count,
	ETigerWeaponFireMode_MAX,
};

// Enum Tiger.ETigerSpreadIncreaseMode
enum class ETigerSpreadIncreaseMode : uint8 {
	Add,
	Multiply,
	ETigerSpreadIncreaseMode_MAX,
};

// Enum Tiger.ETigerFireAudioState
enum class ETigerFireAudioState : uint8 {
	Idle,
	Firing,
	FiringLoopAudio,
	ETigerFireAudioState_MAX,
};

// Enum Tiger.ETigerAsyncMoveResult
enum class ETigerAsyncMoveResult : uint8 {
	SuccessfullyStartedAsyncRequest,
	Failed,
	ETigerAsyncMoveResult_MAX,
};

// Enum Tiger.ETigerBotWeaponPowerState
enum class ETigerBotWeaponPowerState : uint8 {
	PowerAvailable,
	PowerInUse,
	PowerOnCooldown,
	ETigerBotWeaponPowerState_MAX,
};

// Enum Tiger.ETigerEntityEvent
enum class ETigerEntityEvent : uint8 {
	NewThreatEnterCombat,
	NewThreatInCombat,
	Count,
	ETigerEntityEvent_MAX,
};

// Enum Tiger.ETigerNpcSquadOrder
enum class ETigerNpcSquadOrder : uint8 {
	FollowCaptain,
	HoldPosition,
	OpenFire,
	ETigerNpcSquadOrder_MAX,
};

// Enum Tiger.ETigerNpcMovementRestrictionBoundsArea
enum class ETigerNpcMovementRestrictionBoundsArea : uint8 {
	InnerRestriction,
	OuterRestriction,
	OutOfBounds,
	ETigerNpcMovementRestrictionBoundsArea_MAX,
};

// Enum Tiger.ETigerJudgeRotationMode
enum class ETigerJudgeRotationMode : uint8 {
	RotateTowardsPrimaryTarget,
	RotateTowardsLocation,
	RotateTowardsMovement,
	NoForcedRotation,
	Count,
	ETigerJudgeRotationMode_MAX,
};

// Enum Tiger.ETigerPatrollingHelicopterEventType
enum class ETigerPatrollingHelicopterEventType : uint8 {
	BloodHunt,
	RooftopGunFight,
	ETigerPatrollingHelicopterEventType_MAX,
};

// Enum Tiger.ETigerAiMovementReason
enum class ETigerAiMovementReason : uint8 {
	GenericMovement,
	ThreatMovement,
	CapMovement,
	Count,
	ETigerAiMovementReason_MAX,
};

// Enum Tiger.ETigerNpcReactionEventSeverity
enum class ETigerNpcReactionEventSeverity : uint8 {
	Mild,
	Average,
	Severe,
	ETigerNpcReactionEventSeverity_MAX,
};

// Enum Tiger.ETigerAiConditionCheckTiming
enum class ETigerAiConditionCheckTiming : uint8 {
	OnConditionCommandStart,
	OnConditionCommandEnd,
	ETigerAiConditionCheckTiming_MAX,
};

// Enum Tiger.ETigerAiFailedCAPConditionAction
enum class ETigerAiFailedCAPConditionAction : uint8 {
	ExitCAP,
	RedoLastCommand,
	RestartCommandList,
	Wait,
	ETigerAiFailedCAPConditionAction_MAX,
};

// Enum Tiger.ETigerJumpDistribution
enum class ETigerJumpDistribution : uint8 {
	Random,
	Early,
	Late,
	Middle,
	ETigerJumpDistribution_MAX,
};

// Enum Tiger.ETigerAnimBlendState
enum class ETigerAnimBlendState : uint8 {
	BlendingIn,
	BlendingOut,
	FullyBlended,
	ETigerAnimBlendState_MAX,
};

// Enum Tiger.ETigerIKDirection
enum class ETigerIKDirection : uint8 {
	Forward,
	Downward,
	ETigerIKDirection_MAX,
};

// Enum Tiger.ETigerPlayOnClients
enum class ETigerPlayOnClients : uint8 {
	PlayOnSelf,
	PlayOnOthers,
	PlayOnAll,
	ETigerPlayOnClients_MAX,
};

// Enum Tiger.ETigerTriggerUpdateWpnAppearance
enum class ETigerTriggerUpdateWpnAppearance : uint8 {
	None,
	Begin,
	End,
	ETigerTriggerUpdateWpnAppearance_MAX,
};

// Enum Tiger.ETigerArchetypeSelectUiState
enum class ETigerArchetypeSelectUiState : uint8 {
	PreSelection,
	Player0,
	Player1,
	Player2,
	PostSelection,
	ETigerArchetypeSelectUiState_MAX,
};

// Enum Tiger.ETigerBloodTrackPassivePowerIncrease
enum class ETigerBloodTrackPassivePowerIncrease : uint8 {
	None,
	LevelDisciplineClan,
	LevelDisciplineArchetype,
	LevelPassives,
	Unused,
	ETigerBloodTrackPassivePowerIncrease_MAX,
};

// Enum Tiger.ETigerBloodTrackPassiveCategory
enum class ETigerBloodTrackPassiveCategory : uint8 {
	Archetype,
	General,
	HealthUpgrade,
	UltimatePredator,
	UnlockPowers,
	Count,
	ETigerBloodTrackPassiveCategory_MAX,
};

// Enum Tiger.ETigerBuffProgressType
enum class ETigerBuffProgressType : uint8 {
	Increase,
	Decrease,
	ETigerBuffProgressType_MAX,
};

// Enum Tiger.ETigerBuffStatusType
enum class ETigerBuffStatusType : uint8 {
	Neutral,
	Positive,
	Negative,
	ETigerBuffStatusType_MAX,
};

// Enum Tiger.UTigerBuildingSide
enum class UTigerBuildingSide : uint8 {
	Front,
	Left,
	Back,
	Right,
	UTigerBuildingSide_MAX,
};

// Enum Tiger.ETigerCameraPresetModeAdditive
enum class ETigerCameraPresetModeAdditive : uint8 {
	Crouching,
	Running,
	Combat,
	Sliding,
	Count,
	ETigerCameraPresetModeAdditive_MAX,
};

// Enum Tiger.ETigerCapturePointStatus
enum class ETigerCapturePointStatus : uint8 {
	YouCapturing,
	EnemyCapturing,
	ContestedWithCapturee,
	ContestedWithoutCapturee,
	None,
	ETigerCapturePointStatus_MAX,
};

// Enum Tiger.ETigerAkCharacterGender
enum class ETigerAkCharacterGender : uint8 {
	Male,
	Female,
	Count,
	ETigerAkCharacterGender_MAX,
};

// Enum Tiger.ETigerCustomizationType
enum class ETigerCustomizationType : uint8 {
	None,
	Outfits,
	Heads,
	Hairs,
	HairColors,
	EyeColors,
	Tattoos,
	FacePaints,
	PiercingSets,
	Headgears,
	Eyewears,
	Eyebrows,
	EyebrowColors,
	Beards,
	BeardColors,
	CharacterCardShapes,
	CharacterCardTextures,
	CharacterIcons,
	Emotes,
	All,
	ETigerCustomizationType_MAX,
};

// Enum Tiger.ETigerForcedMoveResult
enum class ETigerForcedMoveResult : uint8 {
	Finished,
	Overridden,
	Canceled,
	ETigerForcedMoveResult_MAX,
};

// Enum Tiger.ETigerMovementMode
enum class ETigerMovementMode : uint8 {
	None,
	Sliding,
	ETigerMovementMode_MAX,
};

// Enum Tiger.ETigerEquippedWeaponType
enum class ETigerEquippedWeaponType : uint8 {
	TigerEquippedWeaponType_NoWeapon,
	TigerEquippedWeaponType_Ranged,
	TigerEquippedWeaponType_Melee,
	TigerEquippedWeaponType_MAX,
};

// Enum Tiger.ETigerQuickUseConsumable
enum class ETigerQuickUseConsumable : uint8 {
	Syringe,
	Bloodbag,
	Armor,
	Stimpack,
	UnholyStimulant,
	Flare,
	Count,
	ETigerQuickUseConsumable_MAX,
};

// Enum Tiger.ETigerContextualHelpShouldShowInGameMode
enum class ETigerContextualHelpShouldShowInGameMode : uint8 {
	TutorialOnly,
	MatchOnly,
	All,
	ETigerContextualHelpShouldShowInGameMode_MAX,
};

// Enum Tiger.ETigerContextualHelpType
enum class ETigerContextualHelpType : uint8 {
	Reminder,
	Interaction,
	Count,
	ETigerContextualHelpType_MAX,
};

// Enum Tiger.ETigerDesiredPawnType
enum class ETigerDesiredPawnType : uint8 {
	DefaultPawn,
	BloodVeinPawn,
	ETigerDesiredPawnType_MAX,
};

// Enum Tiger.ETigerDisciplineCharmState
enum class ETigerDisciplineCharmState : uint8 {
	Ready,
	Bonding,
	ETigerDisciplineCharmState_MAX,
};

// Enum Tiger.ETigerDisciplineCanUseResult
enum class ETigerDisciplineCanUseResult : uint8 {
	UseAllowed,
	FailedDisciplineOutOfBounds,
	FailedBlockingDiscipline,
	FailedDoesNotExist,
	FailedLocked,
	FailedIsPassive,
	FailedDisciplineRequirements,
	FailedOnCooldown,
	FailedOnCharges,
	FailedInteract,
	FailedChargingAttack,
	FailedMeleeSwing,
	FailedBuffBlocking,
	ETigerDisciplineCanUseResult_MAX,
};

// Enum Tiger.ETigerActionAllowed
enum class ETigerActionAllowed : uint8 {
	Allowed,
	Blocked,
	Cancel,
	None,
	ETigerActionAllowed_MAX,
};

// Enum Tiger.ETigerFOTTStage
enum class ETigerFOTTStage : uint8 {
	ChargeUp,
	Charged,
	Attacking,
	Recover,
	Count,
	ETigerFOTTStage_MAX,
};

// Enum Tiger.ETigerDisciplineParticleStrategyColorModes
enum class ETigerDisciplineParticleStrategyColorModes : uint8 {
	Default,
	OverrideFriendlyOnly,
	OverrideEnemyOnly,
	OverrideBothSingleColor,
	OverrideBothSplitColor,
	ETigerDisciplineParticleStrategyColorModes_MAX,
};

// Enum Tiger.ETigerPassionStage
enum class ETigerPassionStage : uint8 {
	ChooseEffect,
	ChargeEffect,
	Count,
	ETigerPassionStage_MAX,
};

// Enum Tiger.ETigerPassionEffect
enum class ETigerPassionEffect : uint8 {
	None,
	Panic,
	Apathy,
	Wrath,
	Count,
	ETigerPassionEffect_MAX,
};

// Enum Tiger.ETigerProjectionDashCooldownStart
enum class ETigerProjectionDashCooldownStart : uint8 {
	AfterProjectionSpawned,
	AfterDash,
	ETigerProjectionDashCooldownStart_MAX,
};

// Enum Tiger.ETigerProjectionDashEndReason
enum class ETigerProjectionDashEndReason : uint8 {
	TimedOut,
	MaxDistanceReached,
	ETigerProjectionDashEndReason_MAX,
};

// Enum Tiger.ETigerJudgeHelicopterSpotlightState
enum class ETigerJudgeHelicopterSpotlightState : uint8 {
	InCombat,
	Idling,
	ETigerJudgeHelicopterSpotlightState_MAX,
};

// Enum Tiger.ETigerPatrollingHelicopterSpotlightState
enum class ETigerPatrollingHelicopterSpotlightState : uint8 {
	TargetInSight,
	Searching,
	Idling,
	ETigerPatrollingHelicopterSpotlightState_MAX,
};

// Enum Tiger.ETigerPatrollingHelicopterState
enum class ETigerPatrollingHelicopterState : uint8 {
	Patrolling,
	TrackingPlayer,
	LostPlayer,
	ETigerPatrollingHelicopterState_MAX,
};

// Enum Tiger.ETigerFeedingState
enum class ETigerFeedingState : uint8 {
	Inactive,
	StartFeeding,
	Approach,
	Feeding,
	Decouple,
	FedOnApproach,
	FedOn,
	FedOnDecouple,
	ETigerFeedingState_MAX,
};

// Enum Tiger.ETigerFriendLoadStatus
enum class ETigerFriendLoadStatus : uint8 {
	Unloaded,
	Loading,
	Loaded,
	LoadFailed,
	ETigerFriendLoadStatus_MAX,
};

// Enum Tiger.ETigerGraphicsSettingPreset
enum class ETigerGraphicsSettingPreset : uint8 {
	Low,
	Mid,
	High,
	Ultra,
	ETigerGraphicsSettingPreset_MAX,
};

// Enum Tiger.ETigerCurrentGameFlowState
enum class ETigerCurrentGameFlowState : uint8 {
	CharacterSelect,
	LoadingElysium,
	Elysium,
	LoadingPrague,
	StreamingPrague,
	LoadingCharacter,
	Waiting_Or_PreSpawn,
	SpawningMechanic,
	Spawned,
	EndGame,
	LoadingPragueToElysiumLimbo,
	PragueToElysiumLimbo,
	ETigerCurrentGameFlowState_MAX,
};

// Enum Tiger.ETigerGrimoireArticleType
enum class ETigerGrimoireArticleType : uint8 {
	Featured,
	Suggested,
	New,
	ETigerGrimoireArticleType_MAX,
};

// Enum Tiger.ETigerGrimoireSearchEntryType
enum class ETigerGrimoireSearchEntryType : uint8 {
	Category,
	Entry,
	ETigerGrimoireSearchEntryType_MAX,
};

// Enum Tiger.ETigerGrimoireContinuationMethod
enum class ETigerGrimoireContinuationMethod : uint8 {
	NewParagraph,
	ExtendParagraph,
	Conversation,
	ETigerGrimoireContinuationMethod_MAX,
};

// Enum Tiger.ETigerGrimoireEntryTextMode
enum class ETigerGrimoireEntryTextMode : uint8 {
	Small,
	Large,
	ETigerGrimoireEntryTextMode_MAX,
};

// Enum Tiger.ETigerGrimoireEntryMediaDisplayMode
enum class ETigerGrimoireEntryMediaDisplayMode : uint8 {
	Image,
	Background,
	Video,
	Info,
	Card,
	Model,
	ETigerGrimoireEntryMediaDisplayMode_MAX,
};

// Enum Tiger.ETigerHeatmap
enum class ETigerHeatmap : uint8 {
	PlayerDeaths,
	Feeding,
	PlayerMovement,
	RangedAttack,
	MeleeAttack,
	DisciplineUsed,
	Camping,
	PickedUpItem,
	NPCMovement,
	NPCDamagedPlayer,
	PVECombat,
	PVPCombat,
	Count,
	ETigerHeatmap_MAX,
};

// Enum Tiger.ETigerHookState
enum class ETigerHookState : uint8 {
	Spawned,
	Throwing,
	Rotating,
	Reeling,
	Missed,
	Done,
	ETigerHookState_MAX,
};

// Enum Tiger.ETigerDamageNumberAmount
enum class ETigerDamageNumberAmount : uint8 {
	NoNumbers,
	Accumulate,
	EveryHit,
	ETigerDamageNumberAmount_MAX,
};

// Enum Tiger.ETigerVendorType
enum class ETigerVendorType : uint8 {
	MatchMaker,
	OutfitStore,
	TalentTrainer,
	ETigerVendorType_MAX,
};

// Enum Tiger.EInteractiveObjectState
enum class EInteractiveObjectState : uint8 {
	NotInteractive,
	Inactive,
	Activated_Volume,
	Activated_Interaction,
	Activated_Shooting,
	Done,
	EInteractiveObjectState_MAX,
};

// Enum Tiger.ETigerWeaponCycleDirection
enum class ETigerWeaponCycleDirection : uint8 {
	Previous,
	Next,
	ETigerWeaponCycleDirection_MAX,
};

// Enum Tiger.ETigerItemPickupInfo
enum class ETigerItemPickupInfo : uint8 {
	CanBePickedUp,
	AlreadyPickedUp,
	CategoryFull,
	ItemIsNull,
	CanPickUpAmmo,
	AmmoFull,
	Swap,
	ETigerItemPickupInfo_MAX,
};

// Enum Tiger.ERangedWeaponModType
enum class ERangedWeaponModType : uint8 {
	Scope,
	ExtendedMag,
	Stock,
	Special,
	Barrel,
	ERangedWeaponModType_MAX,
};

// Enum Tiger.ETigerArtifactAbility
enum class ETigerArtifactAbility : uint8 {
	DoubleJump,
	Count,
	ETigerArtifactAbility_MAX,
};

// Enum Tiger.ETigerTooltipStatChangeAmount
enum class ETigerTooltipStatChangeAmount : uint8 {
	Minor,
	Moderate,
	Significant,
	Major,
	Hidden,
	ETigerTooltipStatChangeAmount_MAX,
};

// Enum Tiger.ETigerInventoryItemType
enum class ETigerInventoryItemType : uint8 {
	TigerInventoryItem_Firearm,
	TigerInventoryItem_Melee,
	TigerInventoryItem_Unarmed,
	TigerInventoryItem_Outfit,
	TigerInventoryItem_Amulet,
	TigerInventoryItem_Artifact,
	TigerInventoryItem_BodyArmor,
	TigerInventoryItem_Relic,
	TigerInventoryItem_Ammo,
	TigerInventoryItem_Consumable,
	TigerInventoryItem_Mod,
	TigerInventoryItem_Collectible,
	TigerInventoryItem_Size,
	TigerInventoryItem_MAX,
};

// Enum Tiger.ETigerTimedAnimationType
enum class ETigerTimedAnimationType : uint8 {
	Montage,
	Section,
	ETigerTimedAnimationType_MAX,
};

// Enum Tiger.ETigerLegalDocumentType
enum class ETigerLegalDocumentType : uint8 {
	Eula,
	ExportGate,
	ExportGateDenied,
	PrivacyPolicy,
	Newsletter,
	NewsletterKorea,
	KoreaSpecial1,
	KoreaSpecial2,
	KoreaSpecial3,
	KoreaSpecial4,
	KoreaSpecial5,
	ETigerLegalDocumentType_MAX,
};

// Enum Tiger.ETigerAIPlayerMainState
enum class ETigerAIPlayerMainState : uint8 {
	Idle,
	InBloodVein,
	Wandering,
	Combat,
	Fleeing,
	GoingForItem,
	GoingForFeeding,
	Healing,
	PreMatch,
	ETigerAIPlayerMainState_MAX,
};

// Enum Tiger.ETigerAIPlayerTargetType
enum class ETigerAIPlayerTargetType : uint8 {
	Move,
	Feed,
	Loot,
	ETigerAIPlayerTargetType_MAX,
};

// Enum Tiger.ETigerLootCategory
enum class ETigerLootCategory : uint8 {
	Weapons,
	Ammo,
	RangedMods,
	Consumables,
	Backpacks,
	Collectible,
	ETigerLootCategory_MAX,
};

// Enum Tiger.EMapMarkerType
enum class EMapMarkerType : uint8 {
	Other,
	AntiqueStore,
	TailorStore,
	PharmacyStore,
	EntityCheckpoint,
	EMapMarkerType_MAX,
};

// Enum Tiger.ETigerBlockState
enum class ETigerBlockState : uint8 {
	NotParrying,
	StartParrying,
	DeflectIncomingAttacks,
	NumStates,
	ETigerBlockState_MAX,
};

// Enum Tiger.ETigerMeleeState
enum class ETigerMeleeState : uint8 {
	ETigerMeleeState_Inactive,
	ETigerMeleeState_SwingDamage,
	ETigerMeleeState_SwingFinish,
	ETigerMeleeState_MAX,
};

// Enum Tiger.ETigerMeleeWeaponIdentifier
enum class ETigerMeleeWeaponIdentifier : uint8 {
	None,
	Axe,
	Katana,
	ScourgeBlades,
	Unarmed,
	Bat,
	Count,
	ETigerMeleeWeaponIdentifier_MAX,
};

// Enum Tiger.ETigerDialogueQuestRequirementSpecifier
enum class ETigerDialogueQuestRequirementSpecifier : uint8 {
	InProgress,
	Completed,
	ETigerDialogueQuestRequirementSpecifier_MAX,
};

// Enum Tiger.ETigerDialogueEqualitySpecifier
enum class ETigerDialogueEqualitySpecifier : uint8 {
	LessThan,
	LessThanOrEqualTo,
	EqualTo,
	GreaterThanOrEqualTo,
	GreaterThan,
	ETigerDialogueEqualitySpecifier_MAX,
};

// Enum Tiger.ETigerDialogueOutfitRequirementSpecifier
enum class ETigerDialogueOutfitRequirementSpecifier : uint8 {
	ClanOutfit,
	GenderedOutfit,
	ClanGenderedOutfit,
	SpecificAssetName,
	ETigerDialogueOutfitRequirementSpecifier_MAX,
};

// Enum Tiger.ETigerDialogueClanRequirementSpecifier
enum class ETigerDialogueClanRequirementSpecifier : uint8 {
	BothAreSame,
	BothAreDifferent,
	PlayerIsSpecific,
	ETigerDialogueClanRequirementSpecifier_MAX,
};

// Enum Tiger.ETigerDialogueCategory
enum class ETigerDialogueCategory : uint8 {
	Uncategorised,
	Congratulations,
	Grimoire,
	Character,
	Collectible,
	Item,
	Location,
	Lore,
	Narrative,
	Quest,
	Reaction,
	Miscellaneous1,
	Miscellaneous2,
	Miscellaneous3,
	Miscellaneous4,
	Miscellaneous5,
	Max,
};

// Enum Tiger.ETigerDialogueRepeatability
enum class ETigerDialogueRepeatability : uint8 {
	Repeatable,
	OncePerElysium,
	OnceEver,
	ETigerDialogueRepeatability_MAX,
};

// Enum Tiger.ETigerDialogueIdleAnimation
enum class ETigerDialogueIdleAnimation : uint8 {
	Default,
	Happy,
	Sad,
	Angry,
	Fearful,
	Amazed,
	ETigerDialogueIdleAnimation_MAX,
};

// Enum Tiger.ETigerDialoguePriority
enum class ETigerDialoguePriority : uint8 {
	Flavour,
	Situational,
	Important,
	Urgent,
	Max,
};

// Enum Tiger.ETigerOnlineServiceStatus
enum class ETigerOnlineServiceStatus : uint8 {
	Available,
	Unavailable,
	ETigerOnlineServiceStatus_MAX,
};

// Enum Tiger.ETigerLoginResult
enum class ETigerLoginResult : uint8 {
	LoginSucceeded,
	InternalError,
	GetCharactersFailed,
	NoValidAuthentication,
	SteamNotEnabled,
	AutomaticLoginFailed,
	PlayerBanned,
	Count,
	ETigerLoginResult_MAX,
};

// Enum Tiger.ETigerPersistentConfigKey
enum class ETigerPersistentConfigKey : uint8 {
	LastRewardedStatusRank,
	ETigerPersistentConfigKey_MAX,
};

// Enum Tiger.ETigerPlayerNPCVisibility
enum class ETigerPlayerNPCVisibility : uint8 {
	NotSeenByNPC,
	SeenByCivilian,
	SeenByPolice,
	ETigerPlayerNPCVisibility_MAX,
};

// Enum Tiger.ETigerClimbingCameraInterpState
enum class ETigerClimbingCameraInterpState : uint8 {
	None,
	In,
	Out,
	ETigerClimbingCameraInterpState_MAX,
};

// Enum Tiger.ETigerPhysicalInteraction
enum class ETigerPhysicalInteraction : uint8 {
	Neither,
	Revive,
	Diablerie,
	ETigerPhysicalInteraction_MAX,
};

// Enum Tiger.ETigerBufferedActionType
enum class ETigerBufferedActionType : uint8 {
	Jump,
	Dodge,
	MeleeAttack,
	RangedAttack,
	DisciplineArchetype,
	DisciplineArchetypeReleased,
	DisciplineClan,
	DisciplineClanReleased,
	WeaponAbility,
	WeaponAbilityReleased,
	Sprint,
	Block,
	Crouch,
	Reload,
	SwitchWeapon,
	QuickAttack,
	ToggleHeightenedSenses,
	Count,
	ETigerBufferedActionType_MAX,
};

// Enum Tiger.ETigerWallJumpAnimationState
enum class ETigerWallJumpAnimationState : uint8 {
	None,
	Sliding,
	Jumping,
	ETigerWallJumpAnimationState_MAX,
};

// Enum Tiger.ETigerVersionIsValidResult
enum class ETigerVersionIsValidResult : uint8 {
	Valid,
	Invalid,
	ConnectionError,
	ParseError,
	ETigerVersionIsValidResult_MAX,
};

// Enum Tiger.ETigerGetTicketResult
enum class ETigerGetTicketResult : uint8 {
	Success,
	ConnectionError,
	ParseError,
	InvalidResponse,
	BackendOperationFailed,
	ETigerGetTicketResult_MAX,
};

// Enum Tiger.ETigerInterrupt
enum class ETigerInterrupt : uint8 {
	Climbing,
	Placeholder,
	Size,
	ETigerInterrupt_MAX,
};

// Enum Tiger.EHitAudio
enum class EHitAudio : uint8 {
	None,
	Flesh,
	Stone,
	Concrete,
	Fabric,
	MetalThick,
	Gravel,
	Ground,
	CeramicRoofTile,
	Grass,
	Puddle,
	Wood,
	MetalThin,
	Glass,
	MAX,
};

// Enum Tiger.ETigerWeaponReloadMode
enum class ETigerWeaponReloadMode : uint8 {
	NotReloading,
	WantsToReload,
	Reloading,
	ETigerWeaponReloadMode_MAX,
};

// Enum Tiger.ETigerReflectBehaviour
enum class ETigerReflectBehaviour : uint8 {
	Reflect,
	Block,
	None,
	ETigerReflectBehaviour_MAX,
};

// Enum Tiger.ETigerReflectAttackType
enum class ETigerReflectAttackType : uint8 {
	Bullet,
	Melee,
	ThrownAxe,
	ThrownTrap,
	ThrownChain,
	Count,
	ETigerReflectAttackType_MAX,
};

// Enum Tiger.ETigerClassRepNodeMapping
enum class ETigerClassRepNodeMapping : uint8 {
	NotRouted,
	RelevantAllConnections,
	OwnerRelevantConnection,
	Spatialize_Static,
	Spatialize_Dynamic,
	Spatialize_Dynamic_PlayerSpawned,
	Spatialize_Static_PlayerSpawned,
	Spatialize_Dormancy,
	ETigerClassRepNodeMapping_MAX,
};

// Enum Tiger.ETigerResurrectHolyIncenseInteractionType
enum class ETigerResurrectHolyIncenseInteractionType : uint8 {
	None,
	OnOverlap,
	OnWaveReveal,
	ETigerResurrectHolyIncenseInteractionType_MAX,
};

// Enum Tiger.EScreenTransitionState
enum class EScreenTransitionState : uint8 {
	NotStarted,
	TransitionIn,
	TransitionOut,
	Finished,
	EScreenTransitionState_MAX,
};

// Enum Tiger.EShockwaveWallDestroyReason
enum class EShockwaveWallDestroyReason : uint8 {
	CollidedWithTerrain,
	ReachedMaxDistance,
	OtherShockwaveWall,
	EShockwaveWallDestroyReason_MAX,
};

// Enum Tiger.ETigerSignificanceElysiumNpcMeshType
enum class ETigerSignificanceElysiumNpcMeshType : uint8 {
	Body,
	Head,
	Hair,
	Hoodie,
	Props,
	ETigerSignificanceElysiumNpcMeshType_MAX,
};

// Enum Tiger.ETigerSignificancePlayerMeshType
enum class ETigerSignificancePlayerMeshType : uint8 {
	Body,
	Head,
	Hair,
	Hoodie,
	Headgear,
	Eyewear,
	Weapon,
	SecondaryWeapon,
	HolsteredWeapon,
	SecondaryHolsteredWeapon,
	BodyAdditional,
	Generic,
	Piercing,
	Beard,
	ETigerSignificancePlayerMeshType_MAX,
};

// Enum Tiger.ESplatmapTextureChannel
enum class ESplatmapTextureChannel : uint8 {
	R,
	G,
	B,
	A,
	ChannelCount,
	ESplatmapTextureChannel_MAX,
};

// Enum Tiger.ETigerStaticMeshType
enum class ETigerStaticMeshType : uint8 {
	Default,
	Stairs,
	Slope,
	ETigerStaticMeshType_MAX,
};

// Enum Tiger.ETigerLocalPlayerStatsCategory
enum class ETigerLocalPlayerStatsCategory : uint8 {
	OnlineTime,
	PlayTime,
	Count,
	ETigerLocalPlayerStatsCategory_MAX,
};

// Enum Tiger.ETigerStatsGroupType
enum class ETigerStatsGroupType : uint8 {
	GeneralStats,
	RangedWeaponStats,
	MeleeWeaponStats,
	Count,
	ETigerStatsGroupType_MAX,
};

// Enum Tiger.ETigerStatsCategory
enum class ETigerStatsCategory : uint8 {
	TimeInRedGas,
	TimeInRedGasWithStimulant,
	TotalMoveDistance,
	WalkingDistance,
	DisciplineTravelDistance,
	CrouchingTime,
	ClimbingTime,
	TimeInside,
	WallHangTime,
	WallGrindTime,
	SlideTime,
	AirTime,
	NotMovingTime,
	TotalJumps,
	TotalWallJumps,
	TotalSlideJumps,
	TotalLedgeGrabs,
	TotalLowVaults,
	NumberOfAlliedRevives,
	TotalAmountOfHealing,
	TotalNumberOfHealingEvents,
	TotalFeedingAbortsByDamage,
	TotalFeedingAbortsByPlayer,
	TotalTimeBloodHunted,
	TotalBloodHuntsByFeeding,
	TotalBloodHuntsByKilling,
	TotalNumberAreaMarkerConsequences,
	TotalNumberMapMarkerConsequences,
	PingMin,
	PingMax,
	TotalDamageDone,
	SurvivalTime,
	KindredsKilled,
	Placement,
	Diableries,
	DownedPlayers,
	LevelReached,
	Assists,
	TotalExpGained,
	Deaths,
	NumberOfRangedHits,
	NumberOfRangedShots,
	DamageDealtWithWeapon,
	EnemiesDownedWithWeapon,
	NumberOfTimesOutOfAmmoWithWeapon,
	NumberHeadshotsWithWeapon,
	DurationMeleeWeaponHeldFor,
	NumberOfTimesMeleeWeaponDrawn,
	NumberOfAttacksWithMeleeWeapon,
	NumberOfHitsWithMeleeWeapon,
	TotalDamageDoneWithMeleeWeapon,
	TotalNumberOfDownsWithMeleeWeapon,
	TotalNumberOfKillsWithMeleeWeapon,
	Count,
	ETigerStatsCategory_MAX,
};

// Enum Tiger.ETigerTalent
enum class ETigerTalent : uint8 {
	None,
	ShootingDamage1,
	ShotgunDamage1,
	ShotgunDamage2,
	DecreaseSignatureSkillCD,
	IncreaseAbilityDamage1,
	Count,
	ETigerTalent_MAX,
};

// Enum Tiger.ETigerTalentType
enum class ETigerTalentType : uint8 {
	PassiveStatBoost,
	ETigerTalentType_MAX,
};

// Enum Tiger.ETigerTelemetryAceDeathType
enum class ETigerTelemetryAceDeathType : uint8 {
	Unknown,
	Damage,
	Diablerize,
	ETigerTelemetryAceDeathType_MAX,
};

// Enum Tiger.ETigerTelemetryMetaItemSourceType
enum class ETigerTelemetryMetaItemSourceType : uint8 {
	FlashStore,
	Battlepass,
	Reward,
	Other,
	ETigerTelemetryMetaItemSourceType_MAX,
};

// Enum Tiger.ETigerTelemetryAceRebirthType
enum class ETigerTelemetryAceRebirthType : uint8 {
	Unknown,
	Revive,
	Respawn,
	ETigerTelemetryAceRebirthType_MAX,
};

// Enum Tiger.ETigerTelemetryNetworkIpType
enum class ETigerTelemetryNetworkIpType : uint8 {
	Unspec,
	Ipv4,
	Ipv6,
	ETigerTelemetryNetworkIpType_MAX,
};

// Enum Tiger.ETigerTelemetryNetworkType
enum class ETigerTelemetryNetworkType : uint8 {
	Unknown,
	Ethernet,
	Wifi,
	ETigerTelemetryNetworkType_MAX,
};

// Enum Tiger.ETigerTelemetryChallengeType
enum class ETigerTelemetryChallengeType : uint8 {
	Daily,
	Weekly,
	Other,
	ETigerTelemetryChallengeType_MAX,
};

// Enum Tiger.ETigerTelemetryHardCurrencyRecieveMethod
enum class ETigerTelemetryHardCurrencyRecieveMethod : uint8 {
	TopUp,
	BattlepassReward,
	Gifted,
	Other,
	ETigerTelemetryHardCurrencyRecieveMethod_MAX,
};

// Enum Tiger.ETigerTelemetryBattlepassType
enum class ETigerTelemetryBattlepassType : uint8 {
	Regular,
	Bundle,
	RankSkipOnly,
	ETigerTelemetryBattlepassType_MAX,
};

// Enum Tiger.ETigerTelemetryGameplayMode
enum class ETigerTelemetryGameplayMode : uint8 {
	BattleRoyale,
	ETigerTelemetryGameplayMode_MAX,
};

// Enum Tiger.ETigerTelemetryRankedMode
enum class ETigerTelemetryRankedMode : uint8 {
	Casual,
	ETigerTelemetryRankedMode_MAX,
};

// Enum Tiger.ETigerTelemetryMapIds
enum class ETigerTelemetryMapIds : uint8 {
	Prague,
	ETigerTelemetryMapIds_MAX,
};

// Enum Tiger.ETigerTelemetryPlatformType
enum class ETigerTelemetryPlatformType : uint8 {
	Steam,
	Unknown,
	ETigerTelemetryPlatformType_MAX,
};

// Enum Tiger.ETigerTelemetryDeviceType
enum class ETigerTelemetryDeviceType : uint8 {
	Windows,
	ETigerTelemetryDeviceType_MAX,
};

// Enum Tiger.ETigerTelemetryCauseOfPingRemoval
enum class ETigerTelemetryCauseOfPingRemoval : uint8 {
	Timeout,
	Cancel,
	CollectedLoot,
	GroupMemberRemoved,
	ETigerTelemetryCauseOfPingRemoval_MAX,
};

// Enum Tiger.ETigerTelemetryExpSource
enum class ETigerTelemetryExpSource : uint8 {
	Civillian,
	PotentCivillian,
	HighPotentCivillian,
	Diablerie,
	Rat,
	Team,
	Entity,
	Invalid,
	ETigerTelemetryExpSource_MAX,
};

// Enum Tiger.ETigerTelemetryDamageCauser
enum class ETigerTelemetryDamageCauser : uint8 {
	Undefined,
	Self,
	OtherPlayer,
	Entity,
	Judge,
	Civilian,
	None,
	RedGas,
	Environmental,
	ETigerTelemetryDamageCauser_MAX,
};

// Enum Tiger.ETigerTelemetryDamageType
enum class ETigerTelemetryDamageType : uint8 {
	Undefined,
	Ranged,
	Melee,
	Discipline,
	Environmental,
	RedGas,
	ETigerTelemetryDamageType_MAX,
};

// Enum Tiger.ETigerThrallMenu
enum class ETigerThrallMenu : uint8 {
	Thralls,
	Upgrades,
	Other,
	ETigerThrallMenu_MAX,
};

// Enum Tiger.ETigerMissionObjectiveType
enum class ETigerMissionObjectiveType : uint8 {
	Action_Brawl,
	Action_Firearms,
	Action_Chase,
	Stealth_FindEntrance,
	Stealth_TakePhoto,
	Stealth_Hack,
	Intel_StealIntenl,
	Intel_PlantBug,
	Intel_ThreatenWitness,
	ETigerMissionObjectiveType_MAX,
};

// Enum Tiger.ETigerMissionType
enum class ETigerMissionType : uint8 {
	Action,
	Stealth,
	Intel,
	ETigerMissionType_MAX,
};

// Enum Tiger.ETigerThrallSystemLoadedTable
enum class ETigerThrallSystemLoadedTable : uint8 {
	Abilities,
	BaseThralls,
	StatsModifier,
	ThrallMission,
	ETigerThrallSystemLoadedTable_MAX,
};

// Enum Tiger.ETigerThrallStatId
enum class ETigerThrallStatId : uint8 {
	Perception,
	Commitment,
	Dominance,
	Sociability,
	Proficiency,
	Stealth,
	Stamina,
	Combat,
	Count,
	ETigerThrallStatId_MAX,
};

// Enum Tiger.ETigerThrallAbilityId
enum class ETigerThrallAbilityId : uint8 {
	None,
	Diplomat,
	Slippery,
	NaturalEnemy,
	IWorkAlone,
	ETigerThrallAbilityId_MAX,
};

// Enum Tiger.ETigerTraversalNetValue
enum class ETigerTraversalNetValue : uint8 {
	Sprint,
	RootMotionDisabled,
	Climb,
	ForcedMove,
	Stagger,
	LedgeGrab,
	LowVault,
	Downed,
	WallGrind,
	Sliding,
	RESERVE_2,
	RESERVE_3,
	RESERVE_4,
	RESERVE_5,
	RESERVE_6,
	ETigerTraversalNetValue_MAX,
};

// Enum Tiger.ETigerTraversalTransitionResult
enum class ETigerTraversalTransitionResult : uint8 {
	Success,
	SuccessWithConsumption,
	Fail,
	ETigerTraversalTransitionResult_MAX,
};

// Enum Tiger.ETigerWallJumpInputOption
enum class ETigerWallJumpInputOption : uint8 {
	None,
	OppositeToNormal,
	ParallelToNormal,
	ETigerWallJumpInputOption_MAX,
};

// Enum Tiger.ETigerUIBorderShape
enum class ETigerUIBorderShape : uint8 {
	ETigerBorderShape_Rectangle,
	ETigerBorderShape_Circle,
	ETigerBorderShape_MAX,
};

// Enum Tiger.ETigerMinMax
enum class ETigerMinMax : uint8 {
	Min,
	Max,
	Count,
};

// Enum Tiger.ETigerExtendedWeaponLevels
enum class ETigerExtendedWeaponLevels : uint8 {
	Default,
	ExtendedSmall,
	ExtendedMedium,
	ExtendedLarge,
	LevelCount,
	ETigerExtendedWeaponLevels_MAX,
};

// Enum Tiger.ETigerSpreadModifier
enum class ETigerSpreadModifier : uint8 {
	Aiming,
	Crouching,
	Moving,
	IsInAir,
	Sprinting,
	Sliding,
	WallHang,
	Count,
	ETigerSpreadModifier_MAX,
};

// Enum Tiger.ETigerWeaponAmmoType
enum class ETigerWeaponAmmoType : uint8 {
	Bullet,
	Buckshot,
	Pistol,
	SMG,
	Bolt,
	Precision,
	Unique,
	Count,
	ETigerWeaponAmmoType_MAX,
};

// Enum Tiger.ETigerWeaponType
enum class ETigerWeaponType : uint8 {
	AssaultRifle,
	Revolver,
	Rifle,
	SMG,
	Pistol,
	Axe,
	Bat,
	Knife,
	Shotgun,
	Sword,
	Bow,
	Crossbow,
	Count,
	ETigerWeaponType_MAX,
};

// Enum Tiger.ETigerWorldCompositionProxyMode
enum class ETigerWorldCompositionProxyMode : uint8 {
	Legacy,
	SingleStageMerge,
	ETigerWorldCompositionProxyMode_MAX,
};

// ScriptStruct Tiger.TigerGrimoireSearchEntry
// Size: 0x38 (Inherited: 0x00)
struct FTigerGrimoireSearchEntry {
	struct FString Name; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
	struct UTigerGrimoireCategory* Category; // 0x18(0x08)
	struct FString EntryIdAsString; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct Tiger.DisciplineUse
// Size: 0x50 (Inherited: 0x00)
struct FDisciplineUse {
	enum class ETigerDisciplinesEnum DisciplineUsed; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector Location; // 0x04(0x0c)
	struct FVector Direction; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct ATigerCharacter*> Targets; // 0x20(0x10)
	struct FVector DisciplineSpecificVector1; // 0x30(0x0c)
	struct FVector DisciplineSpecificVector2; // 0x3c(0x0c)
	bool bDisciplineSpecificBool1; // 0x48(0x01)
	bool bDisciplineSpecificBool2; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct Tiger.TigerScouterCharacterData
// Size: 0x30 (Inherited: 0x00)
struct FTigerScouterCharacterData {
	struct TArray<struct FTigerScoutedCharacter> ScoutedCharacters; // 0x00(0x10)
	struct TArray<struct FTigerScoutedCharacter> GroupScoutedCharacters; // 0x10(0x10)
	struct UUserWidget* ScoutedPlayerMapMarkerClass; // 0x20(0x08)
	struct UUserWidget* ScoutedNpcMapMarkerClass; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerScoutedCharacter
// Size: 0x18 (Inherited: 0x00)
struct FTigerScoutedCharacter {
	struct ATigerCharacter* ScoutedCharacter; // 0x00(0x08)
	struct UTigerMapMarkerProxy* MarkerProxy; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerCharacterStatModification
// Size: 0xb4 (Inherited: 0x00)
struct FTigerCharacterStatModification {
	float ClanSkillCooldownMultiplier; // 0x00(0x04)
	float ArchetypeSkillCooldownMultiplier; // 0x04(0x04)
	float CooldownMultiplier; // 0x08(0x04)
	float CooldownSpeedMultiplier; // 0x0c(0x04)
	float RechargeMultiplier; // 0x10(0x04)
	float RechargeSpeedMultiplier; // 0x14(0x04)
	struct FTigerCharacterSingleStatModification MovementSpeed; // 0x18(0x08)
	float ClimbSpeedMultiplier; // 0x20(0x04)
	float MasqueradePointMultiplier; // 0x24(0x04)
	struct FTigerCharacterSingleStatModification MovementAcceleration; // 0x28(0x08)
	struct FTigerCharacterSingleStatModification Health; // 0x30(0x08)
	float JumpForceMultiplier; // 0x38(0x04)
	float WallJumpForceMultiplier; // 0x3c(0x04)
	float AttackSpeedMultiplier; // 0x40(0x04)
	float ReloadSpeedMultiplier; // 0x44(0x04)
	float StaminaCostMultiplier; // 0x48(0x04)
	float AmmoFindMultiplier; // 0x4c(0x04)
	float FeedSpeedMultiplier; // 0x50(0x04)
	float MeleeDamageDealtMultiplier; // 0x54(0x04)
	float DamageDealtMultiplier; // 0x58(0x04)
	float DamageDealtToCiviliansMultiplier; // 0x5c(0x04)
	struct FClanDamageMultiplierMatrix DamageToClansMultiplierMatrix; // 0x60(0x24)
	float AbilityDamageDealtMultiplier; // 0x84(0x04)
	float ShotgunDamageDealtMultiplier; // 0x88(0x04)
	float ShootingDamageDealtMultiplier; // 0x8c(0x04)
	float DamageTakenMultiplier; // 0x90(0x04)
	float MeleeDamageTakenMultiplier; // 0x94(0x04)
	float AbilityDamageTakenMultiplier; // 0x98(0x04)
	float ShootingDamageTakenMultiplier; // 0x9c(0x04)
	float MosquitoDamageTakenMultiplier; // 0xa0(0x04)
	float LoudnessMultiplier; // 0xa4(0x04)
	float ReviveSpeedMultiplier; // 0xa8(0x04)
	float ExperienceGainMultiplier; // 0xac(0x04)
	float AimSensitivityMultiplier; // 0xb0(0x04)
};

// ScriptStruct Tiger.ClanDamageMultiplierMatrix
// Size: 0x24 (Inherited: 0x00)
struct FClanDamageMultiplierMatrix {
	float BrujahAgainst[0x3]; // 0x00(0x0c)
	float NosferatuAgainst[0x3]; // 0x0c(0x0c)
	float ToreadorAgainst[0x3]; // 0x18(0x0c)
};

// ScriptStruct Tiger.TigerCharacterSingleStatModification
// Size: 0x08 (Inherited: 0x00)
struct FTigerCharacterSingleStatModification {
	float AdditiveChange; // 0x00(0x04)
	float MultiplicativeChange; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerNonReplicatedCharacterStats
// Size: 0x9c (Inherited: 0x00)
struct FTigerNonReplicatedCharacterStats {
	struct FTigerCharacterSingleStatModification MovementAcceleration; // 0x00(0x08)
	float JumpForceMultiplier; // 0x08(0x04)
	float WallJumpForceMultiplier; // 0x0c(0x04)
	float MeleeDamageDealtMultiplier; // 0x10(0x04)
	float AbilityDamageDealtMultiplier; // 0x14(0x04)
	float DamageTakenMultiplier; // 0x18(0x04)
	float MeleeDamageTakenMultiplier; // 0x1c(0x04)
	float AbilityDamageTakenMultiplier; // 0x20(0x04)
	float ShootingDamageTakenMultiplier; // 0x24(0x04)
	float CooldownMultiplier; // 0x28(0x04)
	float CooldownSpeedMultiplier; // 0x2c(0x04)
	float RechargeMultiplier; // 0x30(0x04)
	float RechargeSpeedMultiplier; // 0x34(0x04)
	float MasqueradePointMultiplier; // 0x38(0x04)
	float ClanSkillCooldownMultiplier; // 0x3c(0x04)
	float ArchetypeSkillCooldownMultiplier; // 0x40(0x04)
	float AttackSpeedMultiplier; // 0x44(0x04)
	float ReloadSpeedMultiplier; // 0x48(0x04)
	float ShootingDamageDealtMultiplier; // 0x4c(0x04)
	float ShotgunDamageDealtMultiplier; // 0x50(0x04)
	float StaminaCostMultiplier; // 0x54(0x04)
	float AmmoFindMultiplier; // 0x58(0x04)
	float FeedSpeedMultiplier; // 0x5c(0x04)
	float MosquitoDamageTakenMultiplier; // 0x60(0x04)
	float LoudnessMultiplier; // 0x64(0x04)
	float ExperienceGainMultiplier; // 0x68(0x04)
	float AimSensitivityMultiplier; // 0x6c(0x04)
	float DamageDealtMultiplier; // 0x70(0x04)
	float DamageDealtToCiviliansMultiplier; // 0x74(0x04)
	struct FClanDamageMultiplierMatrix DamageToClansMultiplierMatrix; // 0x78(0x24)
};

// ScriptStruct Tiger.TigerReplicatedCharacterStats
// Size: 0x18 (Inherited: 0x00)
struct FTigerReplicatedCharacterStats {
	struct FTigerCharacterSingleStatModification Health; // 0x00(0x08)
	struct FTigerCharacterSingleStatModification MovementSpeed; // 0x08(0x08)
	float ClimbSpeedMultiplier; // 0x10(0x04)
	float ReviveSpeedMultiplier; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerMetaStoreEntriesConfig
// Size: 0x28 (Inherited: 0x00)
struct FTigerMetaStoreEntriesConfig {
	enum class ETigerMetaStoreCategoryType ConfigCategory; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FTigerMetaStoreEntry> StoreEntries; // 0x08(0x10)
	int64_t Checksum; // 0x18(0x08)
	bool bIsValid; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerMetaStoreEntry
// Size: 0x50 (Inherited: 0x00)
struct FTigerMetaStoreEntry {
	uint64_t StoreEntryID; // 0x00(0x08)
	uint32_t PremiumPrice; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ImagePath; // 0x10(0x10)
	uint32_t Discount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDateTime StartDate; // 0x28(0x08)
	struct FDateTime EndDate; // 0x30(0x08)
	int32_t FlashStoreSlot; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FTigerMetaStoreEntryItem> Items; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerMetaStoreEntryItem
// Size: 0x10 (Inherited: 0x00)
struct FTigerMetaStoreEntryItem {
	struct FTigerItemId ItemId; // 0x00(0x08)
	uint32_t Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerItemId
// Size: 0x08 (Inherited: 0x00)
struct FTigerItemId {
	uint64_t Value; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerBuyStoreEntryResponsePayload
// Size: 0x28 (Inherited: 0x00)
struct FTigerBuyStoreEntryResponsePayload {
	struct TArray<struct FTigerItemId> BoughtItems; // 0x00(0x10)
	struct TArray<uint32_t> BoughtItemQuantities; // 0x10(0x10)
	enum class ETigerBuyStoreEntryResponseCode ResponseCode; // 0x20(0x01)
	bool bSuccess; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct Tiger.TigerMetaStoreBuyPayloadElement
// Size: 0x10 (Inherited: 0x00)
struct FTigerMetaStoreBuyPayloadElement {
	uint64_t EntryToBuy; // 0x00(0x08)
	int32_t QuantityToBuy; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPersistentPlayerCharacter
// Size: 0xb8 (Inherited: 0x00)
struct FTigerPersistentPlayerCharacter {
	struct FTigerPersistentCharacterID UniqueCharacterID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTigerPersistentPlayerCharacterData Data; // 0x08(0xa8)
	int64_t LastUsedAt; // 0xb0(0x08)
};

// ScriptStruct Tiger.TigerPersistentPlayerCharacterData
// Size: 0xa8 (Inherited: 0x00)
struct FTigerPersistentPlayerCharacterData {
	enum class ETigerPowerKitType ArchetypeType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTigerSavedBloodTrackData BloodTrack; // 0x08(0x10)
	struct FTigerCharacterAppearance CharacterAppearance; // 0x18(0x80)
	struct TArray<int32_t> Talents; // 0x98(0x10)
};

// ScriptStruct Tiger.TigerCharacterAppearance
// Size: 0x80 (Inherited: 0x00)
struct FTigerCharacterAppearance {
	struct FTigerPersistentOutfitSetup PersistentAppearance; // 0x00(0x30)
	int32_t HeadId; // 0x30(0x04)
	int32_t SkinColorIndex; // 0x34(0x04)
	int32_t HairId; // 0x38(0x04)
	int32_t HairColorId; // 0x3c(0x04)
	int32_t EyeColorId; // 0x40(0x04)
	int32_t TattooId; // 0x44(0x04)
	int32_t FacePaintId; // 0x48(0x04)
	int32_t HeadgearId; // 0x4c(0x04)
	int32_t EyewearId; // 0x50(0x04)
	int32_t PiercingSetId; // 0x54(0x04)
	int32_t EyebrowShapeId; // 0x58(0x04)
	int32_t EyebrowColorId; // 0x5c(0x04)
	int32_t BeardId; // 0x60(0x04)
	int32_t BeardColorId; // 0x64(0x04)
	enum class ETigerGender BodyType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<int32_t> EmoteIds; // 0x70(0x10)
};

// ScriptStruct Tiger.TigerPersistentOutfitSetup
// Size: 0x30 (Inherited: 0x00)
struct FTigerPersistentOutfitSetup {
	SoftClassProperty OutfitConfig; // 0x00(0x28)
	int32_t OutfitId; // 0x28(0x04)
	int32_t HoodieIndex; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerSavedBloodTrackData
// Size: 0x10 (Inherited: 0x00)
struct FTigerSavedBloodTrackData {
	struct TArray<struct FString> SelectedPassives; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerPersistentCharacterID
// Size: 0x01 (Inherited: 0x00)
struct FTigerPersistentCharacterID {
	char SlotIndex; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerPersistentPlayerCardData
// Size: 0x0c (Inherited: 0x00)
struct FTigerPersistentPlayerCardData {
	int32_t CharacterIconId; // 0x00(0x04)
	int32_t CharacterCardShapeMaskId; // 0x04(0x04)
	int32_t CharacterCardBackgroundTextureId; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerPersistentPlayerData
// Size: 0x1c0 (Inherited: 0x00)
struct FTigerPersistentPlayerData {
	struct FTigerQuestPersistentProgress QuestProgress; // 0x00(0x50)
	struct FTigerDailyChallengePersistentProgress DailyChallengeProgress; // 0x50(0x58)
	struct FTigerWeeklyChallengePersistentProgress WeeklyChallengeProgress; // 0xa8(0x60)
	struct FTigerPersistentSeasonMatchStats SeasonMatchStats; // 0x108(0x20)
	int32_t MatchesPlayed; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct TArray<int32_t> MatchesPlayedPerArchetype; // 0x130(0x10)
	struct TArray<struct FTigerGrimoireEntryStatusStruct> GrimoireEntries; // 0x140(0x10)
	struct TArray<int32_t> ReadDialogues; // 0x150(0x10)
	struct TArray<struct FTigerPersistentThrallData> PersistentThrallData; // 0x160(0x10)
	struct TArray<struct FTigerPersistentMissionData> PersistentThrallMissions; // 0x170(0x10)
	struct TArray<struct FTigerPersistentCollectibleData> PersistentCollectibleData; // 0x180(0x10)
	int32_t SharedThrallExp; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct FTigerSuggestedArticlesData GrimoireSuggestedArticlesData; // 0x198(0x18)
	struct TArray<struct FTigerReadDialogueCategoryWrapper> ReadDialogueCategoriesContainer; // 0x1b0(0x10)
};

// ScriptStruct Tiger.TigerReadDialogueCategoryWrapper
// Size: 0x20 (Inherited: 0x00)
struct FTigerReadDialogueCategoryWrapper {
	struct FString NpcIdentifier; // 0x00(0x10)
	struct TArray<char> ReadCategories; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerSuggestedArticlesData
// Size: 0x18 (Inherited: 0x00)
struct FTigerSuggestedArticlesData {
	int32_t Day; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> EntryIds; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerPersistentCollectibleData
// Size: 0x08 (Inherited: 0x00)
struct FTigerPersistentCollectibleData {
	uint32_t CollectibleId; // 0x00(0x04)
	char CollectibleCount; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Tiger.TigerPersistentMissionData
// Size: 0x20 (Inherited: 0x00)
struct FTigerPersistentMissionData {
	int32_t MissionId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<enum class ETigerThrallId> ThrallsOnMission; // 0x08(0x10)
	int32_t Progress; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerPersistentThrallData
// Size: 0x30 (Inherited: 0x00)
struct FTigerPersistentThrallData {
	struct FTigerThrallStats ThrallStats; // 0x00(0x10)
	char ThrallAbilities; // 0x10(0x01)
	enum class ETigerThrallId ThrallId; // 0x11(0x01)
	int8_t ThrallInjuryLevel; // 0x12(0x01)
	int8_t ThrallRating; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FTigerThrallStatModifier> ThrallStatModifiers; // 0x18(0x10)
	int32_t ThrallExp; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerThrallStatModifier
// Size: 0x38 (Inherited: 0x00)
struct FTigerThrallStatModifier {
	int32_t InjuryLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText ModifierName; // 0x08(0x18)
	uint32_t TurnsRemaining; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FTigerThrallStats StatModifiers; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerThrallStats
// Size: 0x10 (Inherited: 0x00)
struct FTigerThrallStats {
	struct TArray<int32_t> Stats; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerGrimoireEntryStatusStruct
// Size: 0x08 (Inherited: 0x00)
struct FTigerGrimoireEntryStatusStruct {
	uint32_t EntryId; // 0x00(0x04)
	char State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Tiger.TigerPersistentSeasonMatchStats
// Size: 0x20 (Inherited: 0x00)
struct FTigerPersistentSeasonMatchStats {
	struct TArray<struct FTigerSeasonMatchStat> Stats; // 0x00(0x10)
	int32_t MatchesPlayed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t SeasonId; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerSeasonMatchStat
// Size: 0x08 (Inherited: 0x00)
struct FTigerSeasonMatchStat {
	int32_t SeasonTotal; // 0x00(0x04)
	int32_t SeasonBest; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerWeeklyChallengePersistentProgress
// Size: 0x60 (Inherited: 0x00)
struct FTigerWeeklyChallengePersistentProgress {
	struct TMap<struct FTigerChallengeInstanceID, struct FTigerChallengePersistentProgressEntry> Progress; // 0x00(0x50)
	struct TArray<int32_t> LastRewardTrackIndices; // 0x50(0x10)
};

// ScriptStruct Tiger.TigerChallengeInstanceID
// Size: 0x04 (Inherited: 0x00)
struct FTigerChallengeInstanceID {
	int32_t UID; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerChallengePersistentProgressEntry
// Size: 0x08 (Inherited: 0x00)
struct FTigerChallengePersistentProgressEntry {
	int32_t Progress; // 0x00(0x04)
	bool bHasDistributedReward; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Tiger.TigerDailyChallengePersistentProgress
// Size: 0x58 (Inherited: 0x00)
struct FTigerDailyChallengePersistentProgress {
	struct TMap<struct FTigerChallengeTypeID, struct FTigerChallengePersistentProgressEntry> Progress; // 0x00(0x50)
	int32_t Date; // 0x50(0x04)
	int32_t LastRewardTrackIndex; // 0x54(0x04)
};

// ScriptStruct Tiger.TigerChallengeTypeID
// Size: 0x04 (Inherited: 0x00)
struct FTigerChallengeTypeID {
	uint32_t UID; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerQuestPersistentProgress
// Size: 0x50 (Inherited: 0x00)
struct FTigerQuestPersistentProgress {
	struct TMap<struct FString, struct FTigerQuestLinePersistentProgress> Progress; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerQuestLinePersistentProgress
// Size: 0x50 (Inherited: 0x00)
struct FTigerQuestLinePersistentProgress {
	struct TMap<struct FString, struct FTigerQuestPersistentProgressEntry> Progress; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerQuestPersistentProgressEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerQuestPersistentProgressEntry {
	bool bHasDistributedReward; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FTigerQuestObjectivePersistentProgressEntry> ObjectivesProgress; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerQuestObjectivePersistentProgressEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerQuestObjectivePersistentProgressEntry {
	struct FString Guid; // 0x00(0x10)
	int32_t Progress; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerPersistentPlayerTransactionalData
// Size: 0x68 (Inherited: 0x00)
struct FTigerPersistentPlayerTransactionalData {
	int64_t SeasonId; // 0x00(0x08)
	int64_t SeasonLevel; // 0x08(0x08)
	int64_t SeasonLevelExp; // 0x10(0x08)
	int32_t SeasonPlacementExpBonusPercentage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FTigerPersistentInventoryItem> InventoryItems; // 0x20(0x10)
	struct TArray<struct FTigerPersistentOutfitSetup> Outfits; // 0x30(0x10)
	struct TArray<struct FTigerPersistentArchetypeTransactionalData> ArchetypeData; // 0x40(0x10)
	float Rating; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	int64_t PremiumCurrencyBalance; // 0x58(0x08)
	char pad_60[0x8]; // 0x60(0x08)
};

// ScriptStruct Tiger.TigerPersistentArchetypeTransactionalData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPersistentArchetypeTransactionalData {
	int64_t ArchetypeLevel; // 0x00(0x08)
	int64_t ArchetypeLevelExp; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerPersistentInventoryItem
// Size: 0x30 (Inherited: 0x00)
struct FTigerPersistentInventoryItem {
	SoftClassProperty ItemClassPath; // 0x00(0x28)
	int32_t Count; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerMuteInfo
// Size: 0x18 (Inherited: 0x00)
struct FTigerMuteInfo {
	bool bIsMuted; // 0x00(0x01)
	char Reason; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString EndsAt; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfig
// Size: 0x258 (Inherited: 0x00)
struct FTigerSeasonConfig {
	struct FDateTime SeasonStartDate; // 0x00(0x08)
	struct FDateTime SeasonEndDate; // 0x08(0x08)
	struct FDateTime BattlepassStartDate; // 0x10(0x08)
	struct FDateTime BattlepassEndDate; // 0x18(0x08)
	struct FTigerItemId BattlePassItemId; // 0x20(0x08)
	uint32_t BattlePassPrice; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> BattlepassBannerTexture; // 0x30(0x28)
	struct TArray<struct FTigerItemIdWithPrice> SpecialItemPrices; // 0x58(0x10)
	struct TArray<struct FTigerSeasonConfig_RewardTier> FreeRewards; // 0x68(0x10)
	struct TArray<struct FTigerSeasonConfig_RewardTier> BattlepassRewards; // 0x78(0x10)
	struct TArray<struct FTigerSeasonConfig_ChallengeCollection> WeeklyChallenges; // 0x88(0x10)
	struct FTigerItemId DailyChallengeExpReward; // 0x98(0x08)
	struct FTigerSeasonConfig_DailyRewardCollection DailyRewards; // 0xa0(0x20)
	struct FName DefaultVendorSubLevelName; // 0xc0(0x08)
	struct FTigerItemId SoftCurrencyMatchRewardItemId; // 0xc8(0x08)
	float SoftCurrencyMatchRewardMultiplier; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FRuntimeFloatCurve SoftCurrencyPlacementBonus; // 0xd8(0x88)
	struct FTigerSeasonExperiences SeasonExperiences; // 0x160(0xc8)
	struct FTigerExpLevelRequirements SeasonExpRequirements; // 0x228(0x18)
	struct FTigerExpLevelRequirements ArchetypeExpRequirements; // 0x240(0x18)
};

// ScriptStruct Tiger.TigerExpLevelRequirements
// Size: 0x18 (Inherited: 0x00)
struct FTigerExpLevelRequirements {
	struct TArray<int32_t> ExpRequirements; // 0x00(0x10)
	bool bClampAtMaxLevel; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t ExpRequirementIncreasePostMaxLevel; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerSeasonExperiences
// Size: 0xc8 (Inherited: 0x00)
struct FTigerSeasonExperiences {
	struct TMap<enum class ETigerPlayerEvent, struct FTigerPlayerEventToSeasonExperienceSource> PlayerEventBasedExperiences; // 0x00(0x50)
	struct TArray<int32_t> TopPlacementExperience; // 0x50(0x10)
	struct FTigerSeasonExperienceSourceModifiers ExperienceSourceModifiers[0xd]; // 0x60(0x68)
};

// ScriptStruct Tiger.TigerSeasonExperienceSourceModifiers
// Size: 0x08 (Inherited: 0x00)
struct FTigerSeasonExperienceSourceModifiers {
	int32_t ExperienceCap; // 0x00(0x04)
	float ExperienceMultiplier; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerPlayerEventToSeasonExperienceSource
// Size: 0x08 (Inherited: 0x00)
struct FTigerPlayerEventToSeasonExperienceSource {
	enum class ETigerSeasonExperienceSource ExperienceSource; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ExperienceAmount; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerSeasonConfig_DailyRewardCollection
// Size: 0x20 (Inherited: 0x00)
struct FTigerSeasonConfig_DailyRewardCollection {
	struct TArray<struct FTigerItemId> TrackRewardIds; // 0x00(0x10)
	struct TArray<struct FTigerSeasonConfig_DailyFinalReward> DailyFinalRewardWeeks; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfig_DailyFinalReward
// Size: 0x38 (Inherited: 0x00)
struct FTigerSeasonConfig_DailyFinalReward {
	struct FTigerItemId DailyFinalRewardIds[0x7]; // 0x00(0x38)
};

// ScriptStruct Tiger.TigerSeasonConfig_ChallengeCollection
// Size: 0x30 (Inherited: 0x00)
struct FTigerSeasonConfig_ChallengeCollection {
	struct TArray<struct FTigerSeasonalChallengeInstanceDefinition> ChallengeDefinitions; // 0x00(0x10)
	struct TArray<struct FTigerItemId> RewardIds; // 0x10(0x10)
	struct FDateTime UnlockDate; // 0x20(0x08)
	struct FDateTime LockDate; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerSeasonalChallengeInstanceDefinition
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonalChallengeInstanceDefinition {
	struct FTigerChallengeInstanceID ChallengeInstanceID; // 0x00(0x04)
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x04(0x04)
	struct FTigerItemId RewardId; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerSeasonConfig_RewardTier
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonConfig_RewardTier {
	struct TArray<struct FTigerItemId> ItemIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerItemIdWithPrice
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemIdWithPrice {
	struct FTigerItemId ItemId; // 0x00(0x08)
	struct FTigerItemPrice Price; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerItemPrice
// Size: 0x10 (Inherited: 0x00)
struct FTigerItemPrice {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FTigerItemId SoftCurrencyId; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerLoginQueueToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerLoginQueueToken {
	struct FString Content; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerMetaStoreBuyPayload
// Size: 0x18 (Inherited: 0x00)
struct FTigerMetaStoreBuyPayload {
	struct TArray<struct FTigerMetaStoreBuyPayloadElement> EntriesToBuy; // 0x00(0x10)
	uint32_t TotalCost; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerDeltaCorrectionData
// Size: 0x40 (Inherited: 0x00)
struct FTigerDeltaCorrectionData {
	char pad_0[0x38]; // 0x00(0x38)
	struct UAnimMontage* CurrentAnimation; // 0x38(0x08)
};

// ScriptStruct Tiger.TigerPreMatchStateInfo
// Size: 0x08 (Inherited: 0x00)
struct FTigerPreMatchStateInfo {
	int32_t StateData; // 0x00(0x04)
	enum class ETigerPreMatchState State; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Tiger.TigerMeshCollection
// Size: 0xf0 (Inherited: 0x00)
struct FTigerMeshCollection {
	struct TSoftObjectPtr<struct USkeletalMesh> HeadMesh; // 0x00(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> HairMesh; // 0x28(0x28)
	struct TSoftObjectPtr<struct UTigerColorSetAsset> ColorSetAsset; // 0x50(0x28)
	struct TSoftObjectPtr<struct UTigerLinearColorSetAsset> HairColorSetAsset; // 0x78(0x28)
	struct TSoftObjectPtr<struct UTigerNPCVisualAsset> VisualAsset; // 0xa0(0x28)
	struct TSoftObjectPtr<struct UTigerNpcPropAsset> PropAsset; // 0xc8(0x28)
};

// ScriptStruct Tiger.TigerNpcReactionEvent
// Size: 0x18 (Inherited: 0x00)
struct FTigerNpcReactionEvent {
	float Intensity; // 0x00(0x04)
	enum class ETigerAIMasqueradeState PreState; // 0x04(0x01)
	enum class ETigerAIMasqueradeState PostState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FVector EventLocation; // 0x08(0x0c)
	bool bIsVisual; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerNpcReactionData
// Size: 0x0c (Inherited: 0x00)
struct FTigerNpcReactionData {
	float ReactionExpireTime; // 0x00(0x04)
	float ReactionCompensationAngle; // 0x04(0x04)
	bool bCanMoveDuringReaction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Tiger.TigerRewardsCollection
// Size: 0x20 (Inherited: 0x00)
struct FTigerRewardsCollection {
	struct TArray<struct FTigerRewardWithQuantity> InventoryRewards; // 0x00(0x10)
	int32_t PremiumCurrency; // 0x10(0x04)
	int32_t SeasonExp; // 0x14(0x04)
	int32_t ArchetypeExp; // 0x18(0x04)
	int32_t SeasonPlacementExpBoostPercentage; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerRewardWithQuantity
// Size: 0x10 (Inherited: 0x00)
struct FTigerRewardWithQuantity {
	struct FTigerItemId ItemId; // 0x00(0x08)
	int32_t Quantity; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerCharacterCardData
// Size: 0x98 (Inherited: 0x00)
struct FTigerCharacterCardData {
	SoftClassProperty CharacterIcon; // 0x00(0x28)
	SoftClassProperty CharacterCardShape; // 0x28(0x28)
	SoftClassProperty CharacterCardBackground; // 0x50(0x28)
	char pad_78[0x20]; // 0x78(0x20)
};

// ScriptStruct Tiger.TigerPlayerMatchMetaStats
// Size: 0x38 (Inherited: 0x00)
struct FTigerPlayerMatchMetaStats {
	struct FTigerSeasonSessionExperience SeasonSessionExperienceAccumulated; // 0x00(0x18)
	int32_t SeasonExpBeforeSession; // 0x18(0x04)
	int32_t ArchetypeExpBeforeSession; // 0x1c(0x04)
	int32_t ArchetypeExperienceAccumulated; // 0x20(0x04)
	int32_t SoftCurrencyBeforeSession; // 0x24(0x04)
	int32_t SoftCurrencyAccumulated; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTigerItemId SoftCurrencyItemId; // 0x30(0x08)
};

// ScriptStruct Tiger.TigerSeasonSessionExperience
// Size: 0x18 (Inherited: 0x00)
struct FTigerSeasonSessionExperience {
	struct TArray<int32_t> SeasonExperienceAccumulatedSources; // 0x00(0x10)
	int32_t SeasonExperienceAccumulated; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerPlayerMatchStats
// Size: 0x38 (Inherited: 0x00)
struct FTigerPlayerMatchStats {
	enum class ETigerKillerType KillerType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString KillerName; // 0x08(0x10)
	struct FTigerPlayerPostMatchScreenHighlightStat Placement; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FTigerPlayerPostMatchScreenHighlightStat> Stats; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerPlayerPostMatchScreenHighlightStat
// Size: 0x0c (Inherited: 0x00)
struct FTigerPlayerPostMatchScreenHighlightStat {
	int32_t MatchStatValue; // 0x00(0x04)
	float SeasonAverage; // 0x04(0x04)
	enum class ETigerSeasonMatchStatType MatchStatType; // 0x08(0x01)
	bool bIsNewSeasonBest; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Tiger.TigerGroupId
// Size: 0x10 (Inherited: 0x00)
struct FTigerGroupId {
	struct FGuid ID; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerGraphicsSettings
// Size: 0x4c (Inherited: 0x00)
struct FTigerGraphicsSettings {
	struct FTigerGraphicsQualityPreset QualityPreset; // 0x00(0x44)
	bool bUseDX12; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t SavedVersion; // 0x48(0x04)
};

// ScriptStruct Tiger.TigerGraphicsQualityPreset
// Size: 0x44 (Inherited: 0x00)
struct FTigerGraphicsQualityPreset {
	int32_t ViewDistanceQuality; // 0x00(0x04)
	int32_t MaterialQuality; // 0x04(0x04)
	int32_t TextureQuality; // 0x08(0x04)
	int32_t TextureFilteringQuality; // 0x0c(0x04)
	int32_t VisualEffectQuality; // 0x10(0x04)
	int32_t FoliageQuality; // 0x14(0x04)
	int32_t LightingQuality; // 0x18(0x04)
	int32_t VolumetricFogQuality; // 0x1c(0x04)
	int32_t AmbientOcclusionQuality; // 0x20(0x04)
	int32_t ScreenSpaceReflectionQuality; // 0x24(0x04)
	int32_t ShadowQuality; // 0x28(0x04)
	int32_t AntiAliasingQuality; // 0x2c(0x04)
	int32_t SubSurfaceScatteringQuality; // 0x30(0x04)
	int32_t MotionBlurQuality; // 0x34(0x04)
	int32_t BloomQuality; // 0x38(0x04)
	int32_t LensFlareQuality; // 0x3c(0x04)
	bool bUseChromaticAberration; // 0x40(0x01)
	bool bUseFilmGrain; // 0x41(0x01)
	bool bUseLightShafts; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
};

// ScriptStruct Tiger.TigerMatchStats
// Size: 0x98 (Inherited: 0x00)
struct FTigerMatchStats {
	struct FTigerPlayerMatchStats PlayerMatchStats; // 0x00(0x38)
	struct FTigerPlayerMatchMetaStats OwnPlayerStats; // 0x38(0x38)
	struct TArray<struct FTigerProgressedChallengeWrapper> ProgressedChallenges; // 0x70(0x10)
	char InitialGroupCount; // 0x80(0x01)
	enum class ETigerGroupingMode GROUPINGMODE; // 0x81(0x01)
	char pad_82[0x2]; // 0x82(0x02)
	struct FGuid MatchID; // 0x84(0x10)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Tiger.TigerProgressedChallengeWrapper
// Size: 0x28 (Inherited: 0x00)
struct FTigerProgressedChallengeWrapper {
	struct FText ChallengeDescription; // 0x00(0x18)
	int32_t TargetValue; // 0x18(0x04)
	int32_t PostSessionProgress; // 0x1c(0x04)
	int32_t PreSessionProgress; // 0x20(0x04)
	bool bIsDailyChallenge; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Tiger.TigerGroupInvitation
// Size: 0x10 (Inherited: 0x00)
struct FTigerGroupInvitation {
	struct FTigerGroupId GroupID; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerCharacterServerHit
// Size: 0x38 (Inherited: 0x00)
struct FTigerCharacterServerHit {
	struct ATigerCharacter* TigerChar; // 0x00(0x08)
	struct FVector_NetQuantize VictimLocation; // 0x08(0x0c)
	char BoneIndexHit; // 0x14(0x01)
	struct FSharkInt8Vector ImpactOffset; // 0x15(0x03)
	struct FVector_NetQuantizeNormal SwingDirection; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UAnimMontage* KnockbackMontage; // 0x28(0x08)
	bool bAbortAttack; // 0x30(0x01)
	char CompressedActorYaw; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Tiger.TigerMeleeAttackNetData
// Size: 0x20 (Inherited: 0x00)
struct FTigerMeleeAttackNetData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerCharacterClientHit
// Size: 0x28 (Inherited: 0x00)
struct FTigerCharacterClientHit {
	struct ATigerCharacter* TigerChar; // 0x00(0x08)
	struct FVector_NetQuantize VictimLocation; // 0x08(0x0c)
	char BoneIndexHit; // 0x14(0x01)
	struct FSharkInt8Vector ImpactOffset; // 0x15(0x03)
	struct FVector_NetQuantizeNormal SwingDirection; // 0x18(0x0c)
	char WeaponIndex; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Tiger.TigerMeleeWeaponAttackIdentifier
// Size: 0x02 (Inherited: 0x00)
struct FTigerMeleeWeaponAttackIdentifier {
	enum class ETigerWeaponMeleeAttackType AttackType; // 0x00(0x01)
	char AttackIndex; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerNetworkedDebugShape
// Size: 0x40 (Inherited: 0x00)
struct FTigerNetworkedDebugShape {
	struct FColor Color; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector ShapeSpecificData; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FQuat Rotation; // 0x20(0x10)
	float Thickness; // 0x30(0x04)
	float LifeTime; // 0x34(0x04)
	char Shape; // 0x38(0x01)
	char DepthPriority; // 0x39(0x01)
	bool bPersistentLines; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
};

// ScriptStruct Tiger.TigerOnlineErrorCode
// Size: 0x08 (Inherited: 0x00)
struct FTigerOnlineErrorCode {
	enum class ETigerOnlineErrorCategory Category; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ID; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerItemData
// Size: 0x10 (Inherited: 0x00)
struct FTigerItemData {
	struct UTigerItemAsset* ItemAsset; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerClientSpawnLocationInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerClientSpawnLocationInfo {
	struct ATigerPlayerState* PlayerState; // 0x00(0x08)
	struct FVector2D DesiredSpawnLocation; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerAIPlayerAction
// Size: 0x58 (Inherited: 0x00)
struct FTigerAIPlayerAction {
	char pad_0[0x4]; // 0x00(0x04)
	enum class ETigerAIPlayerAction Action; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct ATigerCharacter* AffectedTarget; // 0x08(0x08)
	struct FVector Location; // 0x10(0x0c)
	bool bUseCustomLocation; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float HearingRangeSquared; // 0x20(0x04)
	float VisionRangeSquared; // 0x24(0x04)
	float MustReactRangeSquared; // 0x28(0x04)
	float FearMultiplier; // 0x2c(0x04)
	float MasqueradeMultiplier; // 0x30(0x04)
	bool bProcessOnlyByAffectedTarget; // 0x34(0x01)
	bool bMustBeProcessedByAffectedTarget; // 0x35(0x01)
	bool bDontProcessForAffectedTarget; // 0x36(0x01)
	bool bIgnoreInvisibility; // 0x37(0x01)
	bool bShouldDistanceScaleFearValue; // 0x38(0x01)
	bool bShouldDistanceScaleMasqueradePoints; // 0x39(0x01)
	char pad_3A[0x1e]; // 0x3a(0x1e)
};

// ScriptStruct Tiger.TigerRangedHitInfo
// Size: 0x20 (Inherited: 0x00)
struct FTigerRangedHitInfo {
	struct FVector_NetQuantize100 End; // 0x00(0x0c)
	enum class EBodyPart BodyPart; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct ATigerCharacter* HitCharacter; // 0x10(0x08)
	int32_t ProjectileId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerFireProjectileData
// Size: 0x14 (Inherited: 0x00)
struct FTigerFireProjectileData {
	struct FVector_NetQuantize100 ProjectileSpawnLocation; // 0x00(0x0c)
	float ShootDirPitch; // 0x0c(0x04)
	float ShootDirYaw; // 0x10(0x04)
};

// ScriptStruct Tiger.TigerFireProjectileDataInterpolated
// Size: 0x18 (Inherited: 0x14)
struct FTigerFireProjectileDataInterpolated : FTigerFireProjectileData {
	float LocationAlpha; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerReadyToPlayState
// Size: 0x0c (Inherited: 0x00)
struct FTigerReadyToPlayState {
	struct TWeakObjectPtr<struct ATigerPlayerController> PlayerController; // 0x00(0x08)
	bool bIsReadyToPlay; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Tiger.TigerQuestIdentifier
// Size: 0x30 (Inherited: 0x00)
struct FTigerQuestIdentifier {
	struct FString QuestLineId; // 0x00(0x10)
	struct FString QuestId; // 0x10(0x10)
	struct FGuid ObjectiveId; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerPreviewerData
// Size: 0x2b0 (Inherited: 0x00)
struct FTigerPreviewerData {
	SoftClassProperty Outfit; // 0x00(0x28)
	int32_t OutfitHoodieIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	SoftClassProperty Head; // 0x30(0x28)
	int32_t SkinColorIndex; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	SoftClassProperty HairStyle; // 0x60(0x28)
	SoftClassProperty HairColor; // 0x88(0x28)
	SoftClassProperty Beard; // 0xb0(0x28)
	SoftClassProperty BeardColor; // 0xd8(0x28)
	SoftClassProperty EyeColor; // 0x100(0x28)
	SoftClassProperty Eyebrow; // 0x128(0x28)
	SoftClassProperty EyebrowColor; // 0x150(0x28)
	SoftClassProperty Tattoo; // 0x178(0x28)
	SoftClassProperty FacePaint; // 0x1a0(0x28)
	SoftClassProperty Headgear; // 0x1c8(0x28)
	SoftClassProperty Eyewear; // 0x1f0(0x28)
	SoftClassProperty PiercingSet; // 0x218(0x28)
	struct TArray<SoftClassProperty> Emotes; // 0x240(0x10)
	SoftClassProperty CurrentOutfitConfig; // 0x250(0x28)
	SoftClassProperty CombinedItem; // 0x278(0x28)
	char pad_2A0[0x10]; // 0x2a0(0x10)
};

// ScriptStruct Tiger.TigerCharacterCustomizationParameters
// Size: 0x38 (Inherited: 0x00)
struct FTigerCharacterCustomizationParameters {
	struct TArray<struct FTigerCharacterCustomizationScalarParameter> Scalars; // 0x00(0x10)
	struct TArray<struct FTigerCharacterCustomizationColorParameter> Colors; // 0x10(0x10)
	struct TArray<struct FTigerCharacterCustomizationTextureParameter> Textures; // 0x20(0x10)
	struct FName MaterialSlotName; // 0x30(0x08)
};

// ScriptStruct Tiger.TigerCharacterCustomizationTextureParameter
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterCustomizationTextureParameter {
	enum class ETigerCharacterDynamicMeshType DynamicMeshType; // 0x00(0x01)
	enum class ETigerCharacterMeshPart Part; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName Name; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTexture* Texture; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerCharacterCustomizationColorParameter
// Size: 0x1c (Inherited: 0x00)
struct FTigerCharacterCustomizationColorParameter {
	enum class ETigerCharacterDynamicMeshType DynamicMeshType; // 0x00(0x01)
	enum class ETigerCharacterMeshPart Part; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName Name; // 0x04(0x08)
	struct FLinearColor Color; // 0x0c(0x10)
};

// ScriptStruct Tiger.TigerCharacterCustomizationScalarParameter
// Size: 0x10 (Inherited: 0x00)
struct FTigerCharacterCustomizationScalarParameter {
	enum class ETigerCharacterDynamicMeshType DynamicMeshType; // 0x00(0x01)
	enum class ETigerCharacterMeshPart Part; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FName Name; // 0x04(0x08)
	float Value; // 0x0c(0x04)
};

// ScriptStruct Tiger.TutorialTrainerReviveData
// Size: 0x18 (Inherited: 0x00)
struct FTutorialTrainerReviveData {
	bool bIsGettingRevived; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ReviveTimeInSeconds; // 0x04(0x04)
	float CurrentReviveTime; // 0x08(0x04)
	float RotationSpeed; // 0x0c(0x04)
	struct TWeakObjectPtr<struct ATigerPlayer> CurrentRevivingPlayer; // 0x10(0x08)
};

// ScriptStruct Tiger.TutorialTrainerDiablerizeData
// Size: 0x20 (Inherited: 0x00)
struct FTutorialTrainerDiablerizeData {
	char pad_0[0x8]; // 0x00(0x08)
	float DiablerizeTimeLeft; // 0x08(0x04)
	float TimeToGetInPositionforDiablerize; // 0x0c(0x04)
	bool bIsGettingDiablerized; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct TWeakObjectPtr<struct ATigerCharacter> DiablerizingCharacter; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerClientCategoryDefinition
// Size: 0x18 (Inherited: 0x00)
struct FTigerClientCategoryDefinition {
	enum class ETigerPersistentStoreCategory Category; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FTigerClientItemDefinition> AvailableItems; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerClientItemDefinition
// Size: 0x18 (Inherited: 0x00)
struct FTigerClientItemDefinition {
	struct FTigerItemId ItemId; // 0x00(0x08)
	int32_t Cost; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTigerItemId SoftCurrencyId; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerParty
// Size: 0x30 (Inherited: 0x00)
struct FTigerParty {
	struct FTigerPartyId ID; // 0x00(0x10)
	struct TArray<struct FString> PlayerIds; // 0x10(0x10)
	struct FString LeaderPlayerId; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerPartyId
// Size: 0x10 (Inherited: 0x00)
struct FTigerPartyId {
	struct FGuid Guid; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRevealedWave
// Size: 0x30 (Inherited: 0x00)
struct FTigerRevealedWave {
	struct ATigerHaven* RevealedHaven; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<int32_t> DeformIndices; // 0x10(0x10)
	struct TArray<float> TargetArea; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerHolyIncenseSettings
// Size: 0x01 (Inherited: 0x00)
struct FTigerHolyIncenseSettings {
	enum class EMatchBalanceMode BalanceMode; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerWaveData
// Size: 0x90 (Inherited: 0x00)
struct FTigerWaveData {
	char pad_0[0x58]; // 0x00(0x58)
	struct FTigerRevealedWave RevealData; // 0x58(0x30)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Tiger.TigerPlayerPresenceInfo
// Size: 0x28 (Inherited: 0x00)
struct FTigerPlayerPresenceInfo {
	struct FString PlayerId; // 0x00(0x10)
	struct FString PlayerLocation; // 0x10(0x10)
	bool bIsOnline; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerBpFindSessionResultList
// Size: 0x28 (Inherited: 0x00)
struct FTigerBpFindSessionResultList {
	char pad_0[0x18]; // 0x00(0x18)
	struct TArray<struct FString> AlternativeStrings; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerBpFindSessionSelectedSession
// Size: 0x110 (Inherited: 0x00)
struct FTigerBpFindSessionSelectedSession {
	char pad_0[0x110]; // 0x00(0x110)
};

// ScriptStruct Tiger.TigerInviteId
// Size: 0x10 (Inherited: 0x00)
struct FTigerInviteId {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerStreamingPlayer
// Size: 0x38 (Inherited: 0x00)
struct FTigerStreamingPlayer {
	struct APlayerController* PlayerController; // 0x00(0x08)
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct Tiger.TigerRecentlyStreamedCellEntries
// Size: 0x10 (Inherited: 0x00)
struct FTigerRecentlyStreamedCellEntries {
	struct UTigerWorldCompositionCellComponent* Cell; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerItemDatabaseCategory
// Size: 0x10 (Inherited: 0x00)
struct FTigerItemDatabaseCategory {
	struct TArray<struct FTigerItemDatabaseCategoryEntry> Items; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerItemDatabaseCategoryEntry
// Size: 0x30 (Inherited: 0x00)
struct FTigerItemDatabaseCategoryEntry {
	uint64_t ItemId; // 0x00(0x08)
	SoftClassProperty ItemPath; // 0x08(0x28)
};

// ScriptStruct Tiger.TigerConsequenceData
// Size: 0x20 (Inherited: 0x00)
struct FTigerConsequenceData {
	struct UTigerMasqueradeConsequence* ConsequenceClass; // 0x00(0x08)
	struct FTigerConsequenceUpdateData UpdateData; // 0x08(0x14)
	enum class ETigerAIPlayerAction PlayerAction; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Tiger.TigerConsequenceUpdateData
// Size: 0x14 (Inherited: 0x00)
struct FTigerConsequenceUpdateData {
	int32_t ConsequenceId; // 0x00(0x04)
	float ExpectedTimeLeft; // 0x04(0x04)
	struct FVector_NetQuantize VectorData; // 0x08(0x0c)
};

// ScriptStruct Tiger.TigerUniquePingId
// Size: 0x04 (Inherited: 0x00)
struct FTigerUniquePingId {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerPingNotificationNetData
// Size: 0x18 (Inherited: 0x00)
struct FTigerPingNotificationNetData {
	struct UTigerPingBase* PingClass; // 0x00(0x08)
	struct FTigerPingContext Context; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerPingContext
// Size: 0x10 (Inherited: 0x00)
struct FTigerPingContext {
	struct UDataAsset* Asset; // 0x00(0x08)
	int32_t Argument; // 0x08(0x04)
	char TelemetryTypeId; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Tiger.TigerPingResponse
// Size: 0x02 (Inherited: 0x00)
struct FTigerPingResponse {
	char PlayerGroupIndex; // 0x00(0x01)
	bool bIsInterested; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerPingWorldNetData
// Size: 0x28 (Inherited: 0x18)
struct FTigerPingWorldNetData : FTigerPingNotificationNetData {
	struct FVector WorldLocation; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.PointOfInterest
// Size: 0xa0 (Inherited: 0x00)
struct FPointOfInterest {
	struct FText Name; // 0x00(0x18)
	struct UTexture2D* Image; // 0x18(0x08)
	struct FVector2D MapPosition; // 0x20(0x08)
	struct FText TooltipTitle; // 0x28(0x18)
	struct FLinearColor TooltipTitleColor; // 0x40(0x10)
	struct FText TooltipDescription; // 0x50(0x18)
	enum class ETigerItemRarity LootRarity; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UTigerPingBase* PingType; // 0x70(0x08)
	SoftClassProperty HighTierLootGroup; // 0x78(0x28)
};

// ScriptStruct Tiger.TigerPingWrapper
// Size: 0x20 (Inherited: 0x00)
struct FTigerPingWrapper {
	struct UTigerPingClientData* ClientData; // 0x00(0x08)
	struct UTigerPingWorldInstanceUI* InnerWidget; // 0x08(0x08)
	struct UTigerPingMarkerProxy* MapMarkerProxy; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerDisableHSenseTarget
// Size: 0x28 (Inherited: 0x00)
struct FTigerDisableHSenseTarget {
	SoftClassProperty Actor; // 0x00(0x28)
};

// ScriptStruct Tiger.TigerNPCMasqueradeStateMessage
// Size: 0x10 (Inherited: 0x00)
struct FTigerNPCMasqueradeStateMessage {
	struct ATigerNPC* NPC; // 0x00(0x08)
	enum class ETigerAIMasqueradeState MasqueradeState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Tiger.TigerBloodVeinBranchMovementSettings
// Size: 0x24 (Inherited: 0x00)
struct FTigerBloodVeinBranchMovementSettings {
	float LaunchPower; // 0x00(0x04)
	float SimulationTimeScale; // 0x04(0x04)
	float YawRotationSpeed; // 0x08(0x04)
	float PitchDownRotationSpeed; // 0x0c(0x04)
	float PitchUpRotationSpeed; // 0x10(0x04)
	float TargetPitchOffset; // 0x14(0x04)
	float MaxTargetPitch; // 0x18(0x04)
	float MaxSpeed; // 0x1c(0x04)
	float MaximumMovementYawAdjustment; // 0x20(0x04)
};

// ScriptStruct Tiger.TigerTooltipAction
// Size: 0x48 (Inherited: 0x00)
struct FTigerTooltipAction {
	struct FText ActionText; // 0x00(0x18)
	struct FName InputAction; // 0x18(0x08)
	bool bIsHoldAction; // 0x20(0x01)
	bool bListenForOnPreviewKeyDown; // 0x21(0x01)
	enum class EHorizontalAlignment HAlign; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
	struct FDelegate OnPressed; // 0x24(0x10)
	struct FDelegate OnReleased; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Tiger.AutoInitializedWidget
// Size: 0x20 (Inherited: 0x00)
struct FAutoInitializedWidget {
	struct UUserWidget* WidgetClass; // 0x00(0x08)
	struct FString AssignToPropertyName; // 0x08(0x10)
	bool bAddToViewportOnPlayerSpawn; // 0x18(0x01)
	bool bAddToOnScreenWidgets; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t ZOrder; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryIDBundle
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryIDBundle {
	struct UObject* FoundObject; // 0x00(0x08)
	uint64_t PersistentID; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerChatMessage
// Size: 0x58 (Inherited: 0x00)
struct FTigerChatMessage {
	struct FText PlayerName; // 0x00(0x18)
	struct FText Message; // 0x18(0x18)
	struct FSharkUserId SharkUserId; // 0x30(0x10)
	struct FTigerPersistentPlayerID PlayerId; // 0x40(0x10)
	enum class ETigerChatMessageCategory MessageCategory; // 0x50(0x01)
	char GroupPlayerId; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
};

// ScriptStruct Tiger.TigerTelemetryDefinition
// Size: 0x78 (Inherited: 0x00)
struct FTigerTelemetryDefinition {
	struct FString EnumName; // 0x00(0x10)
	struct FString VariableType; // 0x10(0x10)
	int32_t ActualDataSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TMap<struct FString, int32_t> KeyValuePairs; // 0x28(0x50)
};

// ScriptStruct Tiger.TigerTelemetryIDExportFilter
// Size: 0x08 (Inherited: 0x00)
struct FTigerTelemetryIDExportFilter {
	struct UObject* FilterClass; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerTelemetryIDCollisionBundle
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryIDCollisionBundle {
	struct UObject* CollidingObject1; // 0x00(0x08)
	struct UObject* CollidingObject2; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerPropAttachmentInfo
// Size: 0x60 (Inherited: 0x00)
struct FTigerPropAttachmentInfo {
	struct FName AttachIdentifier; // 0x00(0x08)
	struct UStreamableRenderAsset* Prop; // 0x08(0x08)
	struct FName SocketName; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x30)
	struct UMeshComponent* PropCompClass; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Tiger.PerfTimerHandle
// Size: 0x08 (Inherited: 0x00)
struct FPerfTimerHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerDamageContext
// Size: 0x18 (Inherited: 0x00)
struct FTigerDamageContext {
	char pad_0[0x8]; // 0x00(0x08)
	struct UObject* DamagingUObject; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerRangedRandomState
// Size: 0x08 (Inherited: 0x00)
struct FTigerRangedRandomState {
	uint64_t RandomState; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerFireSettings
// Size: 0xc0 (Inherited: 0x00)
struct FTigerFireSettings {
	float BulletDamage; // 0x00(0x04)
	enum class ETigerWeaponFireMode FireMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t BurstCount; // 0x08(0x04)
	float ShotsFiredPerSecondInBurst; // 0x0c(0x04)
	int32_t BulletsFiredSimultaneously; // 0x10(0x04)
	float ShotsFiredPerSecond; // 0x14(0x04)
	struct ATigerAreaEffect* AreaEffect; // 0x18(0x08)
	float FireStickyTime; // 0x20(0x04)
	float VerticalRecoilAmount; // 0x24(0x04)
	float HorizontalRecoilAmount; // 0x28(0x04)
	float StartingSpread; // 0x2c(0x04)
	struct FTigerSpreadModifier SpreadModifiers[0x7]; // 0x30(0x54)
	float TimeUntilSpreadDecreases; // 0x84(0x04)
	float BaseMovementSpeedMultiplier; // 0x88(0x04)
	float AimingMovementSpeedMultiplier; // 0x8c(0x04)
	float HipFireMovementSpeedMultiplier; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct UCurveFloat* SpreadIncreaseCurve; // 0x98(0x08)
	struct UCurveFloat* SpreadDecreaseCurve; // 0xa0(0x08)
	struct UCurveFloat* FireRateIncreaseCurve; // 0xa8(0x08)
	struct UCurveFloat* FireRateDecreaseCurve; // 0xb0(0x08)
	float MasqueradeNoiseEventRadius; // 0xb8(0x04)
	bool ReverseSpreadChange; // 0xbc(0x01)
	bool bPierceCivilians; // 0xbd(0x01)
	bool bUsesScope; // 0xbe(0x01)
	char pad_BF[0x1]; // 0xbf(0x01)
};

// ScriptStruct Tiger.TigerSpreadModifier
// Size: 0x0c (Inherited: 0x00)
struct FTigerSpreadModifier {
	enum class ETigerSpreadIncreaseMode Mode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Speed; // 0x04(0x04)
	float Amount; // 0x08(0x04)
};

// ScriptStruct Tiger.StreamingBenchmarkConfig
// Size: 0x01 (Inherited: 0x00)
struct FStreamingBenchmarkConfig {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerResponseEnvelope
// Size: 0x18 (Inherited: 0x00)
struct FTigerResponseEnvelope {
	bool OK; // 0x00(0x01)
	bool Retryable; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString Error; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerResponse_AdminMessagesConfigs
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_AdminMessagesConfigs : FTigerResponseEnvelope {
	struct FString MessagesJson; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerAdminMessagesConfig
// Size: 0x10 (Inherited: 0x00)
struct FTigerAdminMessagesConfig {
	struct FString MessagesJson; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerAIMoveToLocationData
// Size: 0x18 (Inherited: 0x00)
struct FTigerAIMoveToLocationData {
	struct FVector Location; // 0x00(0x0c)
	float AcceptanceRadius; // 0x0c(0x04)
	float Yaw; // 0x10(0x04)
	bool bSetRotation; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerCommandQueue
// Size: 0x10 (Inherited: 0x00)
struct FTigerCommandQueue {
	struct TArray<struct UTigerAICommandBase*> Commands; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerContextualAnimationWrapper
// Size: 0x0c (Inherited: 0x00)
struct FTigerContextualAnimationWrapper {
	struct FName AnimationName; // 0x00(0x08)
	float Chance; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerAiMovementTicketGroup
// Size: 0x58 (Inherited: 0x00)
struct FTigerAiMovementTicketGroup {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Tiger.TigerAiMovementBudget
// Size: 0x18 (Inherited: 0x00)
struct FTigerAiMovementBudget {
	int32_t NpcMoveBudget[0x3]; // 0x00(0x0c)
	float MinAllotedMoveTime; // 0x0c(0x04)
	float MaxAllotedMoveTime; // 0x10(0x04)
	bool bRestrictMovementTimePerTicket; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerPatrollingHelicopterEventTicket
// Size: 0x20 (Inherited: 0x00)
struct FTigerPatrollingHelicopterEventTicket {
	struct TWeakObjectPtr<struct ATigerPlayer> BloodHuntTarget; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Tiger.TigerMasqueradeState
// Size: 0x2c (Inherited: 0x00)
struct FTigerMasqueradeState {
	char pad_0[0x4]; // 0x00(0x04)
	struct TWeakObjectPtr<struct ATigerBaseNPC> NPC; // 0x04(0x08)
	struct TWeakObjectPtr<struct ATigerPlayer> TigerPlayer; // 0x0c(0x08)
	char pad_14[0x18]; // 0x14(0x18)
};

// ScriptStruct Tiger.TigerInvestigationTicket
// Size: 0x28 (Inherited: 0x00)
struct FTigerInvestigationTicket {
	struct TArray<struct TWeakObjectPtr<struct ATigerNPC>> WaitList; // 0x00(0x10)
	struct TWeakObjectPtr<struct ATigerNPC> CurrentInvestigator; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerPlayerActionProcessData
// Size: 0x70 (Inherited: 0x00)
struct FTigerPlayerActionProcessData {
	struct ATigerPlayer* TigerPlayer; // 0x00(0x08)
	struct ATigerBaseNPC* NPC; // 0x08(0x08)
	char pad_10[0x60]; // 0x10(0x60)
};

// ScriptStruct Tiger.TigerSightedPlayerData
// Size: 0x1c (Inherited: 0x00)
struct FTigerSightedPlayerData {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct Tiger.TigerAiGroupCapSlot
// Size: 0x50 (Inherited: 0x00)
struct FTigerAiGroupCapSlot {
	struct FVector Location; // 0x00(0x0c)
	float Yaw; // 0x0c(0x04)
	struct UTigerNPCAsset* NpcAssetToSpawn; // 0x10(0x08)
	struct TArray<enum class ETigerNPCType> RestrictedNpcTypesForSlot; // 0x18(0x10)
	struct TArray<struct FTigerAIGroupCapCommandWrapper> SlotCommands; // 0x28(0x10)
	bool bLoopCommands; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct ATigerNPC* OccupyingNPC; // 0x40(0x08)
	int32_t CommandIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Tiger.TigerAIGroupCapCommandWrapper
// Size: 0x18 (Inherited: 0x00)
struct FTigerAIGroupCapCommandWrapper {
	struct FTigerAIGroupCapCondition Condition; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTigerAICommandBase* Command; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerAIGroupCapCondition
// Size: 0x0c (Inherited: 0x00)
struct FTigerAIGroupCapCondition {
	int32_t Slot; // 0x00(0x04)
	int32_t CommandIndex; // 0x04(0x04)
	enum class ETigerAiConditionCheckTiming ConditionCheckTiming; // 0x08(0x01)
	enum class ETigerAiFailedCAPConditionAction FailedConditionAction; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct Tiger.WeaponDistanceDesc
// Size: 0x08 (Inherited: 0x00)
struct FWeaponDistanceDesc {
	float MinDistSquared; // 0x00(0x04)
	float MaxDistSquared; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerAIMasqueradeEvent
// Size: 0x88 (Inherited: 0x00)
struct FTigerAIMasqueradeEvent {
	float Amount; // 0x00(0x04)
	struct FVector Location; // 0x04(0x0c)
	struct FVector HitLocation; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct ATigerCharacter* TargetActor; // 0x20(0x08)
	struct ATigerPlayer* Instigator; // 0x28(0x08)
	struct FTigerAIPlayerAction PlayerAction; // 0x30(0x58)
};

// ScriptStruct Tiger.TigerSightConfigData
// Size: 0x50 (Inherited: 0x00)
struct FTigerSightConfigData {
	struct TMap<enum class ETigerAIMasqueradeState, struct FTigerSightConfigProperties> SightProperties; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerSightConfigProperties
// Size: 0x1c (Inherited: 0x00)
struct FTigerSightConfigProperties {
	float SightRadius; // 0x00(0x04)
	float LoseSightRadius; // 0x04(0x04)
	float PeripheralVisionAngleDegrees; // 0x08(0x04)
	float CloseSightRadius; // 0x0c(0x04)
	float CloseLoseSightRadius; // 0x10(0x04)
	float ClosePeripheralVisionAngleDegrees; // 0x14(0x04)
	float HeightDifference; // 0x18(0x04)
};

// ScriptStruct Tiger.TigerCapSpawnData
// Size: 0x40 (Inherited: 0x00)
struct FTigerCapSpawnData {
	struct UTigerNPCAsset* SpawnAsset; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform SpawnTransform; // 0x10(0x30)
};

// ScriptStruct Tiger.TigerRandomVisualAsset
// Size: 0x10 (Inherited: 0x00)
struct FTigerRandomVisualAsset {
	struct UTigerNPCVisualAsset* VisualAsset; // 0x00(0x08)
	float Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerAISplinePathData
// Size: 0xa0 (Inherited: 0x00)
struct FTigerAISplinePathData {
	struct TArray<struct FVector> PathWaypoints; // 0x00(0x10)
	struct TArray<struct FVector> PathWaypointsRightVectors; // 0x10(0x10)
	struct FTigerAISplinePathConnection StartingPoint; // 0x20(0x30)
	struct FTigerAISplinePathConnection EndPoint; // 0x50(0x30)
	struct TArray<struct FTigerAISplinePathConnection> AdditionalPathConnections; // 0x80(0x10)
	bool bLooping; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	int32_t ExtraRows; // 0x94(0x04)
	float RowDistance; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Tiger.TigerAISplinePathConnection
// Size: 0x30 (Inherited: 0x00)
struct FTigerAISplinePathConnection {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<enum class ETigerNPCType> RestrictedTypes; // 0x08(0x10)
	struct ATigerAiSplinePathHub* ConnectedHub; // 0x18(0x08)
	struct ATigerAISplinePath* OwningSpline; // 0x20(0x08)
	float Weight; // 0x28(0x04)
	bool bAlwaysSwitchSpline; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct Tiger.TigerAnimMetaData
// Size: 0x18 (Inherited: 0x00)
struct FTigerAnimMetaData {
	struct UAnimMontage* Montage; // 0x00(0x08)
	struct UAnimMetaData* MetaData; // 0x08(0x08)
	float BlendWeight; // 0x10(0x04)
	enum class ETigerAnimBlendState BlendState; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerPlayerBlendSpace1DByClan
// Size: 0x18 (Inherited: 0x00)
struct FTigerPlayerBlendSpace1DByClan {
	struct UBlendSpace1D* AnimationObjects[0x3]; // 0x00(0x18)
};

// ScriptStruct Tiger.TigerPlayerBlendSpaceByClan
// Size: 0x18 (Inherited: 0x00)
struct FTigerPlayerBlendSpaceByClan {
	struct UBlendSpace* AnimationObjects[0x3]; // 0x00(0x18)
};

// ScriptStruct Tiger.TigerPlayerMontageByClan
// Size: 0x18 (Inherited: 0x00)
struct FTigerPlayerMontageByClan {
	struct UAnimMontage* AnimationObjects[0x3]; // 0x00(0x18)
};

// ScriptStruct Tiger.TigerPlayerSequenceByClan
// Size: 0x18 (Inherited: 0x00)
struct FTigerPlayerSequenceByClan {
	struct UAnimSequence* AnimationObjects[0x3]; // 0x00(0x18)
};

// ScriptStruct Tiger.TigerAnimNotifyIKData
// Size: 0x34 (Inherited: 0x00)
struct FTigerAnimNotifyIKData {
	struct FVector IKTarget; // 0x00(0x0c)
	struct FVector RelativeTargetJointTarget; // 0x0c(0x0c)
	float CurrentIKAlphaBlend; // 0x18(0x04)
	bool bShouldBeUsed; // 0x1c(0x01)
	char pad_1D[0x17]; // 0x1d(0x17)
};

// ScriptStruct Tiger.TigerDamageImmunitySelector
// Size: 0x08 (Inherited: 0x00)
struct FTigerDamageImmunitySelector {
	struct UDamageType* DamageType; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerHeightenedSensesAudioVisualization
// Size: 0x08 (Inherited: 0x00)
struct FTigerHeightenedSensesAudioVisualization {
	struct UParticleSystemComponent* ParticleSystem; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerBuildingSystemBalconyVolumeDefaults
// Size: 0x48 (Inherited: 0x00)
struct FTigerBuildingSystemBalconyVolumeDefaults {
	struct FVector BottomVolumeOffset; // 0x00(0x0c)
	struct FVector BottomVolumeScale; // 0x0c(0x0c)
	struct FVector LeftVolumeOffset; // 0x18(0x0c)
	struct FVector LeftVolumeScale; // 0x24(0x0c)
	struct FVector RightVolumeOffset; // 0x30(0x0c)
	struct FVector RightVolumeScale; // 0x3c(0x0c)
};

// ScriptStruct Tiger.TigerFacePoseData
// Size: 0x38 (Inherited: 0x00)
struct FTigerFacePoseData {
	struct TSoftObjectPtr<struct USkeletalMesh> HeadMesh; // 0x00(0x28)
	struct UPoseAsset* PoseAsset; // 0x28(0x08)
	struct UAnimSequence* PoseSourceAnimation; // 0x30(0x08)
};

// ScriptStruct Tiger.TigerBloodResonanceBuffs
// Size: 0x10 (Inherited: 0x00)
struct FTigerBloodResonanceBuffs {
	struct TArray<struct UTigerBuff*> Buffs; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerBloodTrack
// Size: 0x10 (Inherited: 0x00)
struct FTigerBloodTrack {
	struct TArray<struct UTigerBloodTrackPassiveConfig*> Passives; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerBuffReplicatedInstanceData
// Size: 0x20 (Inherited: 0x00)
struct FTigerBuffReplicatedInstanceData {
	struct UTigerBuff* BuffType; // 0x00(0x08)
	int32_t BuffID; // 0x08(0x04)
	float TimeLeft; // 0x0c(0x04)
	float BuffStrength; // 0x10(0x04)
	struct TWeakObjectPtr<struct ATigerCharacter> BuffCaster; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerNiagaraAttachment
// Size: 0x48 (Inherited: 0x00)
struct FTigerNiagaraAttachment {
	struct FSoftObjectPath NiagaraPath; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FName AttachPointName; // 0x20(0x08)
	struct FVector Location; // 0x28(0x0c)
	struct FRotator Rotation; // 0x34(0x0c)
	enum class EAttachLocation AttachLocationRule; // 0x40(0x01)
	bool bOnlySpawnOnLocalPlayer; // 0x41(0x01)
	bool bUseAbsoluteRotation; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct Tiger.TigerDeferredBuffInstantiation
// Size: 0x28 (Inherited: 0x00)
struct FTigerDeferredBuffInstantiation {
	char pad_0[0x8]; // 0x00(0x08)
	struct ATigerCharacter* BuffCaster; // 0x08(0x08)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Tiger.TigerSidePieceMaterialOverrideCache
// Size: 0x28 (Inherited: 0x00)
struct FTigerSidePieceMaterialOverrideCache {
	struct UStaticMesh* OldMesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> Materials; // 0x08(0x10)
	struct TArray<struct FName> SlotNames; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerBuildingSystemWallPieceInstancingData
// Size: 0x10 (Inherited: 0x00)
struct FTigerBuildingSystemWallPieceInstancingData {
	struct TArray<struct FTigerBuildingSystemWallPieceInstancingDataEntry> Entries; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerBuildingSystemWallPieceInstancingDataEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerBuildingSystemWallPieceInstancingDataEntry {
	struct UStaticMeshComponent* Component; // 0x00(0x08)
	struct TArray<float> Data; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerBuildingSystemMaterialCache
// Size: 0x18 (Inherited: 0x00)
struct FTigerBuildingSystemMaterialCache {
	struct TArray<struct FTigerBuildingSystemMaterialCacheMaterialBinding> MaterialBindings; // 0x00(0x10)
	bool bStaticMeshComponent; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerBuildingSystemMaterialCacheMaterialBinding
// Size: 0x10 (Inherited: 0x00)
struct FTigerBuildingSystemMaterialCacheMaterialBinding {
	int32_t MaterialIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerBuildingSystemSideFloorEnables
// Size: 0x04 (Inherited: 0x00)
struct FTigerBuildingSystemSideFloorEnables {
	bool bFront; // 0x00(0x01)
	bool bLeft; // 0x01(0x01)
	bool bBack; // 0x02(0x01)
	bool bRight; // 0x03(0x01)
};

// ScriptStruct Tiger.TigerBuildingSystemFloorComponents
// Size: 0x10 (Inherited: 0x00)
struct FTigerBuildingSystemFloorComponents {
	struct TArray<struct UStaticMeshComponent*> SidePieceComponents; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerBuildingSystemCornerOverrides
// Size: 0x40 (Inherited: 0x00)
struct FTigerBuildingSystemCornerOverrides {
	struct UStaticMesh* GroundFloorCorners; // 0x00(0x08)
	struct UStaticMesh* ColumnsFloor1; // 0x08(0x08)
	struct UStaticMesh* ColumnsFloor2; // 0x10(0x08)
	struct UStaticMesh* ColumnsFloor3; // 0x18(0x08)
	struct UStaticMesh* ColumnsFloor4; // 0x20(0x08)
	struct UStaticMesh* ColumnsFloor5; // 0x28(0x08)
	struct UStaticMesh* ColumnsFloor6; // 0x30(0x08)
	struct UStaticMesh* ColumnsFloor7; // 0x38(0x08)
};

// ScriptStruct Tiger.TigerBuildingSystemGroundFloorOverrides
// Size: 0x18 (Inherited: 0x00)
struct FTigerBuildingSystemGroundFloorOverrides {
	struct UTigerBuildingWallPreset* Preset; // 0x00(0x08)
	int32_t Index; // 0x08(0x04)
	bool bOverrideScaling; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MeshWidth; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerBuildingSystemSideOverrides
// Size: 0x40 (Inherited: 0x00)
struct FTigerBuildingSystemSideOverrides {
	struct UTigerBuildingWallPreset* GroundFloorPreset; // 0x00(0x08)
	struct UTigerBuildingWallPreset* FloorPreset1; // 0x08(0x08)
	struct UTigerBuildingWallPreset* FloorPreset2; // 0x10(0x08)
	struct UTigerBuildingWallPreset* FloorPreset3; // 0x18(0x08)
	struct UTigerBuildingWallPreset* FloorPreset4; // 0x20(0x08)
	struct UTigerBuildingWallPreset* FloorPreset5; // 0x28(0x08)
	struct UTigerBuildingWallPreset* FloorPreset6; // 0x30(0x08)
	struct UTigerBuildingWallPreset* FloorPreset7; // 0x38(0x08)
};

// ScriptStruct Tiger.TigerBuildingSystemTransformableCorner
// Size: 0x40 (Inherited: 0x00)
struct FTigerBuildingSystemTransformableCorner {
	struct UPoseableMeshComponent* Component; // 0x00(0x08)
	struct UStaticMeshComponent* StaticComponent; // 0x08(0x08)
	struct FRotator MiddleBoneRotation; // 0x10(0x0c)
	struct FVector EndBoneLocation; // 0x1c(0x0c)
	struct FVector StartNormal; // 0x28(0x0c)
	struct FVector NextNormal; // 0x34(0x0c)
};

// ScriptStruct Tiger.TigerStreamableBuildingSides
// Size: 0x10 (Inherited: 0x00)
struct FTigerStreamableBuildingSides {
	struct TArray<struct FTigerStreamableBuildingSide> BuildingWalls; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerStreamableBuildingSide
// Size: 0x30 (Inherited: 0x00)
struct FTigerStreamableBuildingSide {
	struct TArray<struct UStaticMeshComponent*> SideSegments; // 0x00(0x10)
	struct FVector Normal; // 0x10(0x0c)
	struct FVector Center; // 0x1c(0x0c)
	bool bVisible; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Tiger.TigerChallengeCollectionEntry
// Size: 0x10 (Inherited: 0x00)
struct FTigerChallengeCollectionEntry {
	struct UTigerChallenge* ReferenceChallenge; // 0x00(0x08)
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerChallengeRequirementBase
// Size: 0x08 (Inherited: 0x00)
struct FTigerChallengeRequirementBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerChallengeRequirementDisciplineSlot
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementDisciplineSlot : FTigerChallengeRequirementBase {
	bool bUseSpecificSlot; // 0x08(0x01)
	enum class ETigerDisciplineSlot RequiredSlot; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Tiger.TigerChallengeRequirementGameMode
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementGameMode : FTigerChallengeRequirementBase {
	bool bSpecificGameMode; // 0x08(0x01)
	enum class EMatchBalanceMode RequiredGameMode; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Tiger.TigerChallengeRequirementClan
// Size: 0x10 (Inherited: 0x08)
struct FTigerChallengeRequirementClan : FTigerChallengeRequirementBase {
	bool bSpecificClan; // 0x08(0x01)
	enum class ETigerClan RequiredClan; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Tiger.TigerChallengeRequirementWeaponType
// Size: 0x18 (Inherited: 0x08)
struct FTigerChallengeRequirementWeaponType : FTigerChallengeRequirementBase {
	bool bAnyRangedWeapon; // 0x08(0x01)
	bool bAnyMeleeWeapon; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UTigerItemAsset* RequiredWeaponAsAsset; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerDamageSource
// Size: 0x24 (Inherited: 0x00)
struct FTigerDamageSource {
	struct FVector DamageSourceDirection; // 0x00(0x0c)
	struct FVector DamageSourceLocation; // 0x0c(0x0c)
	float NewHealth; // 0x18(0x04)
	float DamageAmount; // 0x1c(0x04)
	bool bIsRedGasDamage; // 0x20(0x01)
	bool bHasDirection; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct Tiger.TigerCompressedRotation
// Size: 0x02 (Inherited: 0x00)
struct FTigerCompressedRotation {
	char Yaw; // 0x00(0x01)
	char Pitch; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerCombinedItemCustomizations
// Size: 0x10 (Inherited: 0x00)
struct FTigerCombinedItemCustomizations {
	struct TArray<struct FTigerCharacterCustomizationItem> CombinedItems; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerCharacterCustomizationItem
// Size: 0x28 (Inherited: 0x00)
struct FTigerCharacterCustomizationItem {
	SoftClassProperty ItemClassPath; // 0x00(0x28)
};

// ScriptStruct Tiger.TigerCharacterPiercingSetCustomizationItem
// Size: 0x10 (Inherited: 0x00)
struct FTigerCharacterPiercingSetCustomizationItem {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct FName FaceSlot; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerCharacterCustomizationHeadData
// Size: 0x28 (Inherited: 0x00)
struct FTigerCharacterCustomizationHeadData {
	SoftClassProperty ItemClassPath; // 0x00(0x28)
};

// ScriptStruct Tiger.TigerCharacterCustomizationOutfitData
// Size: 0x28 (Inherited: 0x00)
struct FTigerCharacterCustomizationOutfitData {
	SoftClassProperty ItemClassPath; // 0x00(0x28)
};

// ScriptStruct Tiger.TigerCharacterHeadEyewearOffset
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterHeadEyewearOffset {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Tiger.TigerCharacterHeadHeadgearOffset
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterHeadHeadgearOffset {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Tiger.TigerCharacterHeadPiercingSocket
// Size: 0x18 (Inherited: 0x00)
struct FTigerCharacterHeadPiercingSocket {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
};

// ScriptStruct Tiger.TigerCharacterOutfitHoodieVariation
// Size: 0xb8 (Inherited: 0x00)
struct FTigerCharacterOutfitHoodieVariation {
	bool bEnableHairAnimDynamics; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh; // 0x08(0x28)
	struct TMap<int32_t, struct TSoftObjectPtr<struct UMaterialInterface>> Materials; // 0x30(0x50)
	struct FTigerCharacterCustomizationParameters AdditionalParameters; // 0x80(0x38)
};

// ScriptStruct Tiger.TigerLodSplitMesh
// Size: 0x78 (Inherited: 0x00)
struct FTigerLodSplitMesh {
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh; // 0x00(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh_Lod0; // 0x28(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> Mesh_NoLod0; // 0x50(0x28)
};

// ScriptStruct Tiger.TigerCharacterHolsteredWeaponTransforms
// Size: 0x60 (Inherited: 0x00)
struct FTigerCharacterHolsteredWeaponTransforms {
	struct FTransform MeleeWeaponHolsteredTransform; // 0x00(0x30)
	struct FTransform MeleeWeaponSecondaryHolsteredTransform; // 0x30(0x30)
};

// ScriptStruct Tiger.TigerCharacterPoseableMeshBoneSetupData
// Size: 0x2c (Inherited: 0x00)
struct FTigerCharacterPoseableMeshBoneSetupData {
	enum class ETigerCharacterMeshPart BodyPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParentBone; // 0x04(0x08)
	struct FName MeshBone; // 0x0c(0x08)
	struct FVector RelativeLocation; // 0x14(0x0c)
	struct FRotator RelativeRotation; // 0x20(0x0c)
};

// ScriptStruct Tiger.TigerMeshData
// Size: 0x02 (Inherited: 0x00)
struct FTigerMeshData {
	bool bIsVisibile; // 0x00(0x01)
	bool bVisibilityIsAllowed; // 0x01(0x01)
};

// ScriptStruct Tiger.TigerPoseableMeshData
// Size: 0x18 (Inherited: 0x02)
struct FTigerPoseableMeshData : FTigerMeshData {
	char pad_2[0x6]; // 0x02(0x06)
	struct USkeletalMeshComponent* MeshComponent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerStaticMeshData
// Size: 0x18 (Inherited: 0x02)
struct FTigerStaticMeshData : FTigerMeshData {
	char pad_2[0x6]; // 0x02(0x06)
	struct UStaticMeshComponent* MeshComponent; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerCharacterMeshData
// Size: 0x18 (Inherited: 0x02)
struct FTigerCharacterMeshData : FTigerMeshData {
	char pad_2[0x6]; // 0x02(0x06)
	struct USkeletalMeshComponent* MeshComponent; // 0x08(0x08)
	struct USkeletalMesh* RegisteredMesh; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerPhysicalInteractionMontages
// Size: 0x60 (Inherited: 0x00)
struct FTigerPhysicalInteractionMontages {
	struct FTigerPhysicalInteractionDescription DescriptionByTargetGender[0x2]; // 0x00(0x60)
};

// ScriptStruct Tiger.TigerPhysicalInteractionDescription
// Size: 0x30 (Inherited: 0x00)
struct FTigerPhysicalInteractionDescription {
	struct UAnimMontage* PrimeStart; // 0x00(0x08)
	struct UAnimMontage* PrimeMid; // 0x08(0x08)
	struct UAnimMontage* PrimeEnd; // 0x10(0x08)
	struct UAnimMontage* SecondaryStart; // 0x18(0x08)
	struct UAnimMontage* SecondaryMid; // 0x20(0x08)
	struct UAnimMontage* SecondaryEnd; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerCharacterPoseableMeshBoneData
// Size: 0x24 (Inherited: 0x00)
struct FTigerCharacterPoseableMeshBoneData {
	enum class ETigerCharacterMeshPart BodyPart; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParentBone; // 0x04(0x08)
	struct FVector RelativeLocation; // 0x0c(0x0c)
	struct FRotator RelativeRotation; // 0x18(0x0c)
};

// ScriptStruct Tiger.StatChangeDescription
// Size: 0x28 (Inherited: 0x00)
struct FStatChangeDescription {
	struct FText StatName; // 0x00(0x18)
	struct FString StatChange; // 0x18(0x10)
};

// ScriptStruct Tiger.ClientDebugInfo
// Size: 0x0c (Inherited: 0x00)
struct FClientDebugInfo {
	uint32_t ClientUid; // 0x00(0x04)
	struct FVector2D Location; // 0x04(0x08)
};

// ScriptStruct Tiger.ActivateObjectState
// Size: 0x08 (Inherited: 0x00)
struct FActivateObjectState {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tiger.ClientSpawnData
// Size: 0x50 (Inherited: 0x00)
struct FClientSpawnData {
	uint32_t ClientUid; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* SpawnClass; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x30)
	struct TArray<char> ClassSpecificData; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerLoggedInElsewherePush
// Size: 0x01 (Inherited: 0x00)
struct FTigerLoggedInElsewherePush {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerCollectibleTableRow
// Size: 0x10 (Inherited: 0x08)
struct FTigerCollectibleTableRow : FTableRowBase {
	struct UTigerCollectibleData* Collectible; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerOwnedConsumable
// Size: 0x10 (Inherited: 0x00)
struct FTigerOwnedConsumable {
	struct UTigerConsumableAsset* ConsumableAsset; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerCurrentContextualHelp
// Size: 0x18 (Inherited: 0x00)
struct FTigerCurrentContextualHelp {
	struct UTigerContextualHelp* ContextualHelp; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerContextualHelpContext
// Size: 0x18 (Inherited: 0x00)
struct FTigerContextualHelpContext {
	struct ATigerPlayerController* PlayerController; // 0x00(0x08)
	struct UTigerPowerKit* PowerKit; // 0x08(0x08)
	int32_t NumMatchesPlayedTotal; // 0x10(0x04)
	int32_t NumMatchesWithArchetype; // 0x14(0x04)
};

// ScriptStruct Tiger.DamageTriggerOverlapData
// Size: 0x10 (Inherited: 0x00)
struct FDamageTriggerOverlapData {
	struct ATigerCharacter* Character; // 0x00(0x08)
	float TimerAccumulator; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerDisciplineLevelInfo
// Size: 0x40 (Inherited: 0x00)
struct FTigerDisciplineLevelInfo {
	struct FText StatName; // 0x00(0x18)
	struct TArray<float> StatChanges; // 0x18(0x10)
	struct FText StatChangeSuffix; // 0x28(0x18)
};

// ScriptStruct Tiger.EarthshockUseDataNetworked
// Size: 0x34 (Inherited: 0x00)
struct FEarthshockUseDataNetworked {
	struct FVector StartLocation; // 0x00(0x0c)
	struct FVector TargetLocation; // 0x0c(0x0c)
	struct FVector SurfaceNormal; // 0x18(0x0c)
	struct FVector ConeDirection; // 0x24(0x0c)
	bool bTargetIsWall; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct Tiger.DistrictDataAnchor
// Size: 0x10 (Inherited: 0x00)
struct FDistrictDataAnchor {
	struct FVector2D WorldPosition; // 0x00(0x08)
	struct FVector2D MapPosition; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerDsGameSessionDetails
// Size: 0x18 (Inherited: 0x00)
struct FTigerDsGameSessionDetails {
	struct FString GameSessionData; // 0x00(0x10)
	int32_t MaxPlayers; // 0x10(0x04)
	bool AllowsJoin; // 0x14(0x01)
	char GROUPINGMODE; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct Tiger.TigerElysiumNpcData
// Size: 0x1d0 (Inherited: 0x00)
struct FTigerElysiumNpcData {
	struct TSoftObjectPtr<struct USkeletalMesh> BodyMesh; // 0x00(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> HeadMesh; // 0x28(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> HairMesh; // 0x50(0x28)
	struct TSoftObjectPtr<struct USkeletalMesh> HoodieMesh; // 0x78(0x28)
	struct FTigerElysiumNpcProp FirstPropAsset; // 0xa0(0x90)
	struct FTigerElysiumNpcProp SecondPropAsset; // 0x130(0x90)
	struct FTigerElysiumNpcAnimationData AnimationData; // 0x1c0(0x10)
};

// ScriptStruct Tiger.TigerElysiumNpcAnimationData
// Size: 0x10 (Inherited: 0x00)
struct FTigerElysiumNpcAnimationData {
	struct UAnimSequenceBase* AnimationToPlay; // 0x00(0x08)
	float AnimationOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerElysiumNpcProp
// Size: 0x90 (Inherited: 0x00)
struct FTigerElysiumNpcProp {
	struct TSoftObjectPtr<struct UObject> PropAsset; // 0x00(0x28)
	SoftClassProperty PropActorAsset; // 0x28(0x28)
	struct FTransform LocalTransform; // 0x50(0x30)
	struct FName AttachmentPoint; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Tiger.TigerEmoteTableRow
// Size: 0x38 (Inherited: 0x08)
struct FTigerEmoteTableRow : FTableRowBase {
	struct FText EmoteName; // 0x08(0x18)
	struct UTexture2D* EmoteIcon; // 0x20(0x08)
	struct UAnimMontage* EmoteMontage; // 0x28(0x08)
	bool bStopsMovement; // 0x30(0x01)
	bool bAlwaysUnlocked; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Tiger.TigerPlayingEmote
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayingEmote {
	struct UAnimMontage* Montage; // 0x00(0x08)
	float StartTime; // 0x08(0x04)
	bool StopsMovement; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Tiger.TigerFakeGameSessionToken
// Size: 0x18 (Inherited: 0x00)
struct FTigerFakeGameSessionToken {
	struct FString Ip; // 0x00(0x10)
	uint16_t Port; // 0x10(0x02)
	char GROUPINGMODE; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Tiger.TigerFeedingDataByGender
// Size: 0x120 (Inherited: 0x00)
struct FTigerFeedingDataByGender {
	struct FTigerFeedingMontages FeedingDataByVampireGender[0x2]; // 0x00(0x120)
};

// ScriptStruct Tiger.TigerFeedingMontages
// Size: 0x90 (Inherited: 0x00)
struct FTigerFeedingMontages {
	struct FTigerFeedingDescription FemaleTargetDescription; // 0x00(0x30)
	struct FTigerFeedingDescription MaleTargetDescription; // 0x30(0x30)
	struct FTigerFeedingDescription EntityTargetDescription; // 0x60(0x30)
};

// ScriptStruct Tiger.TigerFeedingDescription
// Size: 0x30 (Inherited: 0x00)
struct FTigerFeedingDescription {
	struct UAnimMontage* AttackerApproach; // 0x00(0x08)
	struct UAnimMontage* AttackerFeeding; // 0x08(0x08)
	struct UAnimMontage* AttackerDecouple; // 0x10(0x08)
	struct UAnimMontage* VictimApproach; // 0x18(0x08)
	struct UAnimMontage* VictimFeeding; // 0x20(0x08)
	struct UAnimMontage* VictimDecouple; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerResponse_ConvertedIds
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_ConvertedIds : FTigerResponseEnvelope {
	struct TArray<struct FTigerFriendsAccountIdSet> PlayerIds; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerFriendsAccountIdSet
// Size: 0x30 (Inherited: 0x00)
struct FTigerFriendsAccountIdSet {
	struct FString PlatformUserId; // 0x00(0x10)
	struct FString PlayerId; // 0x10(0x10)
	struct FString SharkmobUserId; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetSharkmobAccountIds
// Size: 0x18 (Inherited: 0x00)
struct FTigerRequest_GetSharkmobAccountIds {
	uint32_t ChannelID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> PlatformUserIds; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerRequest_FriendAction
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_FriendAction {
	struct FString SharkmobUserId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_FriendInvites
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_FriendInvites : FTigerResponseEnvelope {
	struct TArray<struct FTigerFriendServiceFriend> Invites; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerFriendServiceFriend
// Size: 0x20 (Inherited: 0x00)
struct FTigerFriendServiceFriend {
	struct FString DISPLAYNAME; // 0x00(0x10)
	struct FString SharkmobUserId; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_FriendsList
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_FriendsList : FTigerResponseEnvelope {
	struct TArray<struct FTigerFriendServiceFriend> Friends; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerFullCharacterAppearance
// Size: 0x90 (Inherited: 0x00)
struct FTigerFullCharacterAppearance {
	struct FTigerCharacterAppearance PartialCharacterAppearance; // 0x00(0x80)
	struct FTigerPersistentPlayerCardData PlayerCardData; // 0x80(0x0c)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Tiger.TigerGameplaySettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerGameplaySettings {
	bool bSwapOutDefaultWeapon; // 0x00(0x01)
	bool bMuteGeneralChat; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t SavedVersion; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerLanguageSettings
// Size: 0x28 (Inherited: 0x00)
struct FTigerLanguageSettings {
	struct FString AudioLanguage; // 0x00(0x10)
	struct FString TextLanguage; // 0x10(0x10)
	bool bUseSubtitles; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t SavedVersion; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerAudioSettings
// Size: 0x24 (Inherited: 0x00)
struct FTigerAudioSettings {
	float MasterVolume; // 0x00(0x04)
	float SFXVolume; // 0x04(0x04)
	float MusicVolume; // 0x08(0x04)
	float VideoVolume; // 0x0c(0x04)
	float DialogueVolume; // 0x10(0x04)
	float VoiceChatVolume; // 0x14(0x04)
	float MicVolume; // 0x18(0x04)
	bool bEnableVoiceChat; // 0x1c(0x01)
	bool bPushToTalk; // 0x1d(0x01)
	bool bAllowBackgroundAudio; // 0x1e(0x01)
	bool bEnableDolbyAtmos; // 0x1f(0x01)
	int32_t SavedVersion; // 0x20(0x04)
};

// ScriptStruct Tiger.TigerDisplaySettings
// Size: 0x28 (Inherited: 0x00)
struct FTigerDisplaySettings {
	int32_t ResolutionX; // 0x00(0x04)
	int32_t ResolutionY; // 0x04(0x04)
	float ResolutionScale; // 0x08(0x04)
	int32_t WindowMode; // 0x0c(0x04)
	float Gamma; // 0x10(0x04)
	float FrameRateLimit; // 0x14(0x04)
	bool bEnableFrameRateSmoothing; // 0x18(0x01)
	bool bEnableVSync; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t FsrQualityLevel; // 0x1c(0x04)
	float FsrSharpening; // 0x20(0x04)
	int32_t SavedVersion; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerGrimoireCardBorderQualityRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerGrimoireCardBorderQualityRow : FTableRowBase {
	float DamageAmount; // 0x08(0x04)
	float ExtraDamage; // 0x0c(0x04)
	float ExtraDamageOnEdges; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerGrimoireCardColorRow
// Size: 0x10 (Inherited: 0x08)
struct FTigerGrimoireCardColorRow : FTableRowBase {
	struct FColor Color; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerGrimoireEntryRow
// Size: 0x28 (Inherited: 0x08)
struct FTigerGrimoireEntryRow : FTableRowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct UTigerGrimoireEntry* Entry; // 0x10(0x08)
	struct TArray<struct FTigerGrimoireSubEntry> SubEntries; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerGrimoireSubEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerGrimoireSubEntry {
	char pad_0[0x4]; // 0x00(0x04)
	struct FName EntryName; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTigerGrimoireEntry* Entry; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerGroupSettingsData
// Size: 0x10 (Inherited: 0x00)
struct FTigerGroupSettingsData {
	struct UTexture2D* CompassMarkerTexture; // 0x00(0x08)
	struct UUserWidget* MapMarkerWidgetType; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerHeatmapData
// Size: 0x14 (Inherited: 0x00)
struct FTigerHeatmapData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Tiger.TigerCampingData
// Size: 0x10 (Inherited: 0x00)
struct FTigerCampingData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerDebugDrawCallbackEntry
// Size: 0x60 (Inherited: 0x00)
struct FTigerDebugDrawCallbackEntry {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Tiger.TigerModSlotInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerModSlotInfo {
	struct UTigerRangedModItemAsset* Mod; // 0x00(0x08)
	bool IsUnlocked; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Tiger.TigerInventorySlotContent
// Size: 0x18 (Inherited: 0x00)
struct FTigerInventorySlotContent {
	enum class ETigerInventoryItemType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTigerItemAsset* ItemAsset; // 0x08(0x08)
	int32_t StackCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerInventoryWeapon
// Size: 0x08 (Inherited: 0x00)
struct FTigerInventoryWeapon {
	struct UTigerItemAsset* ItemAsset; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerTooltipStatChange
// Size: 0x20 (Inherited: 0x00)
struct FTigerTooltipStatChange {
	struct FText StatName; // 0x00(0x18)
	enum class ETigerTooltipStatChangeAmount Amount; // 0x18(0x01)
	bool bIsNegativeChange; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Tiger.ItemClusterArray
// Size: 0x120 (Inherited: 0x108)
struct FItemClusterArray : FFastArraySerializer {
	struct TArray<struct FTigerClusteredItem> Items; // 0x108(0x10)
	struct ATigerItemCluster* Parent; // 0x118(0x08)
};

// ScriptStruct Tiger.TigerClusteredItem
// Size: 0x70 (Inherited: 0x0c)
struct FTigerClusteredItem : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x30)
	struct FVector Velocity; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UTigerItemAsset* Item; // 0x50(0x08)
	int32_t ItemCount; // 0x58(0x04)
	uint32_t ItemUID; // 0x5c(0x04)
	struct TWeakObjectPtr<struct ATigerPlayerState> PlayerWhoDroppedItem; // 0x60(0x08)
	float DropTime; // 0x68(0x04)
	enum class ETigerTelemetryItemSourceID ItemSource; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct Tiger.TigerSeasonalItemLink
// Size: 0x38 (Inherited: 0x08)
struct FTigerSeasonalItemLink : FTableRowBase {
	uint64_t ItemId; // 0x08(0x08)
	SoftClassProperty ItemPath; // 0x10(0x28)
};

// ScriptStruct Tiger.TigerItemPreviewCamera
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemPreviewCamera {
	struct ACineCameraActor* CameraActor; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerJudgeRotationSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerJudgeRotationSettings {
	enum class ETigerJudgeRotationMode RotationMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RotationSpeed; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerTimedAnimationTriggerWrapper
// Size: 0x18 (Inherited: 0x00)
struct FTigerTimedAnimationTriggerWrapper {
	struct TArray<struct FTigerTimedAnimationTrigger> AnimationTriggers; // 0x00(0x10)
	float ElapsedTime; // 0x10(0x04)
	bool bIsActive; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerTimedAnimationTrigger
// Size: 0x10 (Inherited: 0x00)
struct FTigerTimedAnimationTrigger {
	struct FName Name; // 0x00(0x08)
	float TriggerTime; // 0x08(0x04)
	enum class ETigerTimedAnimationType AnimationType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Tiger.TigerJudgePlayerDamage
// Size: 0x20 (Inherited: 0x00)
struct FTigerJudgePlayerDamage {
	struct ATigerPlayer* Player; // 0x00(0x08)
	struct TArray<float> DamageCollection; // 0x08(0x10)
	float DamageOverLastSecond; // 0x18(0x04)
	float TotalDamage; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerJudgeSwingCollisionInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerJudgeSwingCollisionInfo {
	struct TArray<struct FTigerJudgeSwingCollisionInstant> CollisionInstants; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerJudgeSwingCollisionInstant
// Size: 0x30 (Inherited: 0x00)
struct FTigerJudgeSwingCollisionInstant {
	float TimeInSwing; // 0x00(0x04)
	struct FVector SwordStartSweepLoc; // 0x04(0x0c)
	struct FVector SwordEndSweepLoc; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FQuat SwordRot; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerJudgeTargetConsideration
// Size: 0x28 (Inherited: 0x00)
struct FTigerJudgeTargetConsideration {
	struct ATigerPlayer* Player; // 0x00(0x08)
	struct TArray<struct UTigerJudgeBaseAttackState*> ApplicableAttacks; // 0x08(0x10)
	float DamageDoneSinceReset; // 0x18(0x04)
	float DistanceToPlayer; // 0x1c(0x04)
	float TargetValue; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerBotNameData
// Size: 0x20 (Inherited: 0x08)
struct FTigerBotNameData : FTableRowBase {
	struct FText BotNames; // 0x08(0x18)
};

// ScriptStruct Tiger.TigerResponse_LoginToken
// Size: 0x30 (Inherited: 0x18)
struct FTigerResponse_LoginToken : FTigerResponseEnvelope {
	uint16_t EstimatedTimeInSeconds; // 0x18(0x02)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString Token; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerRequest_LoginToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_LoginToken {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerLootItemType
// Size: 0x10 (Inherited: 0x00)
struct FTigerLootItemType {
	struct UTigerItemAsset* LootAsset; // 0x00(0x08)
	int32_t AmmoCount; // 0x08(0x04)
	int32_t DropChanceWeight; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerLootLocationEntry
// Size: 0x10 (Inherited: 0x00)
struct FTigerLootLocationEntry {
	struct UTigerItemLootTable* LootTable; // 0x00(0x08)
	int32_t MinimumItemCount; // 0x08(0x04)
	int32_t MaximumItemCount; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerSubItemLootTable
// Size: 0x28 (Inherited: 0x00)
struct FTigerSubItemLootTable {
	struct UTigerItemLootTable* SubLootTable; // 0x00(0x08)
	enum class ETigerItemRarity MinimumRarity; // 0x08(0x01)
	enum class ETigerItemRarity MaximumRarity; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float WeightMultiplier; // 0x0c(0x04)
	float WeightMultiplierByRarity[0x5]; // 0x10(0x14)
	float OverrideTotalWeight; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerGeneratedLootTable
// Size: 0x18 (Inherited: 0x00)
struct FTigerGeneratedLootTable {
	struct TArray<struct FTigerItemLootEntry> Items; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerItemLootEntry
// Size: 0x20 (Inherited: 0x00)
struct FTigerItemLootEntry {
	struct UTigerItemAsset* ItemAsset; // 0x00(0x08)
	int32_t MinItemCount; // 0x08(0x04)
	int32_t MaxItemCount; // 0x0c(0x04)
	float Weight; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTigerItemLootTable* SpawnsWith; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerLootTableKey
// Size: 0x03 (Inherited: 0x00)
struct FTigerLootTableKey {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct Tiger.TigerRandomizedLootResult
// Size: 0x20 (Inherited: 0x00)
struct FTigerRandomizedLootResult {
	struct UTigerItemAsset* PrimaryItem; // 0x00(0x08)
	int32_t PrimaryItemCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UTigerItemAsset* SecondaryItem; // 0x10(0x08)
	int32_t SecondaryItemCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerMapInfo
// Size: 0xb8 (Inherited: 0x00)
struct FTigerMapInfo {
	struct FMapLandmarkPoint FirstLandmark; // 0x00(0x18)
	struct FMapLandmarkPoint SecondLandmark; // 0x18(0x18)
	struct UTexture2D* MapTexture; // 0x30(0x08)
	struct FString LevelName; // 0x38(0x10)
	struct TArray<struct FPointOfInterest> PointsOfInterest; // 0x48(0x10)
	struct FVector2D MinimapSize; // 0x58(0x08)
	float CachedScale; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TMap<struct UUserWidget*, enum class EMapMarkerType> BotMarkerTypes; // 0x68(0x50)
};

// ScriptStruct Tiger.MapLandmarkPoint
// Size: 0x18 (Inherited: 0x00)
struct FMapLandmarkPoint {
	struct FName LandmarkName; // 0x00(0x08)
	struct FVector2D PositionInWorld; // 0x08(0x08)
	struct FVector2D PositionOnMap; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerBloodHuntPositionWrapper
// Size: 0x18 (Inherited: 0x00)
struct FTigerBloodHuntPositionWrapper {
	struct ATigerPlayerState* PlayerState; // 0x00(0x08)
	struct FVector_NetQuantize WorldPosition; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerHighTierLootSettings
// Size: 0x30 (Inherited: 0x00)
struct FTigerHighTierLootSettings {
	struct FSharkRandomDeviationInt NumberOfHighTierLootLocations; // 0x00(0x08)
	struct TSoftObjectPtr<struct UTigerItemLootTable> HighTierLootTable; // 0x08(0x28)
};

// ScriptStruct Tiger.TigerPreSpawnSettings
// Size: 0x28 (Inherited: 0x00)
struct FTigerPreSpawnSettings {
	int32_t GroupSyncSettleTime; // 0x00(0x04)
	int32_t InitialArchetypeSelectCountDown; // 0x04(0x04)
	int32_t PostArchetypeSelectTime; // 0x08(0x04)
	int32_t PreSpawnSelectionTime; // 0x0c(0x04)
	int32_t SpawnSelectionTime; // 0x10(0x04)
	int32_t TimeUntilAutomaticSpawnAssignment; // 0x14(0x04)
	int32_t PostSpawnSelectionTime; // 0x18(0x04)
	int32_t ArchetypeSelectTimePerPlayer; // 0x1c(0x04)
	int32_t TeamViewTime; // 0x20(0x04)
	int32_t FreeLookPreparationTime; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerBattleRoyalePlayerSpawnSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerBattleRoyalePlayerSpawnSettings {
	float MinimumDistanceCentimetersBetweenGroups; // 0x00(0x04)
	float DesiredDistanceCentimetersBetweenGroups; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerHavenCapturePointSettings
// Size: 0x20 (Inherited: 0x00)
struct FTigerHavenCapturePointSettings {
	float TimeUntilEnableCapturePoint; // 0x00(0x04)
	float TimeUntilRevealEveryoneAndSpeedupCapturePercentages; // 0x04(0x04)
	float CaptureSpeedPercentageIncreasePerSecondWhenEveryoneIsRevealed; // 0x08(0x04)
	float MaxCaptureSpeedPercentagePerSecondWhenEveryoneIsRevealed; // 0x0c(0x04)
	float CaptureTime; // 0x10(0x04)
	float CapturePercentageIncreasePerSecond; // 0x14(0x04)
	float FastDecrementPercentageDropPerSecond; // 0x18(0x04)
	float SlowDecrementPercentageDropPerSecond; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerSHPBSettings
// Size: 0x1c (Inherited: 0x00)
struct FTigerSHPBSettings {
	int32_t StartMinSHPBNPCs; // 0x00(0x04)
	int32_t StartMaxSHPBNPCs; // 0x04(0x04)
	int32_t IntervalMinSHPBNPCs; // 0x08(0x04)
	int32_t IntervalMaxSHPBNPCs; // 0x0c(0x04)
	float MinSpawnInterval; // 0x10(0x04)
	float MaxSpawnInterval; // 0x14(0x04)
	float LastIntervalSpawnMatchTime; // 0x18(0x04)
};

// ScriptStruct Tiger.TigerRatSpawnpointSettings
// Size: 0x08 (Inherited: 0x00)
struct FTigerRatSpawnpointSettings {
	int32_t MinRatSpawnpoints; // 0x00(0x04)
	int32_t MaxRatSpawnpoints; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerEntityCheckpointsSettings
// Size: 0x10 (Inherited: 0x00)
struct FTigerEntityCheckpointsSettings {
	int32_t MinEntityCheckpoints; // 0x00(0x04)
	int32_t MaxEntityCheckpoints; // 0x04(0x04)
	float MinAutomaticSupplyDropCallInDelay; // 0x08(0x04)
	float MaxAutomaticSupplyDropCallInDelay; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerMeleeAttack
// Size: 0x88 (Inherited: 0x00)
struct FTigerMeleeAttack {
	struct FName AttackName; // 0x00(0x08)
	int32_t AttackGroup; // 0x08(0x04)
	struct FName SwingAnimationMontageName; // 0x0c(0x08)
	struct FName SwingAnimationNoTargetMontageName; // 0x14(0x08)
	struct FName RecoveryAnimationMontageName; // 0x1c(0x08)
	struct FName RecoveryAnimationNoTargetMontageName; // 0x24(0x08)
	struct FName HitAnimationMontageName; // 0x2c(0x08)
	struct FName DirectionalHitAnimationMontageNames[0x4]; // 0x34(0x20)
	float HitEffectAngle; // 0x54(0x04)
	struct UMatineeCameraShake* HitCameraShake; // 0x58(0x08)
	struct UCurveFloat* InputMultiplierCurve; // 0x60(0x08)
	float AttackCooldown; // 0x68(0x04)
	bool bAllowMultipleHits; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
	float TargetingAttackMinimumDistance; // 0x70(0x04)
	float AerialAttackAbortedBlendOutTime; // 0x74(0x04)
	struct UCurveFloat* DamageScalingCurve; // 0x78(0x08)
	int32_t AttackIndex; // 0x80(0x04)
	enum class ETigerWeaponMeleeAttackType AttackType; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct Tiger.TigerMeleeWeaponAttackData
// Size: 0x48 (Inherited: 0x08)
struct FTigerMeleeWeaponAttackData : FTableRowBase {
	float SwingDepth; // 0x08(0x04)
	float SwingOffsetX; // 0x0c(0x04)
	float SwingOffsetY; // 0x10(0x04)
	float SwingOffsetZ; // 0x14(0x04)
	float SwingDamageAmount; // 0x18(0x04)
	struct FVector2D FlinchStrengthMin; // 0x1c(0x08)
	struct FVector2D FlinchStrengthMax; // 0x24(0x08)
	float AimAssistConeAngle; // 0x2c(0x04)
	float AimAssistConeLength; // 0x30(0x04)
	float StopAimAssistTime; // 0x34(0x04)
	float EnableMeleeRecoveryMoveTime; // 0x38(0x04)
	float CanStartNextAttackTime; // 0x3c(0x04)
	float WorldStaticCollisionRadius; // 0x40(0x04)
	float WorldStaticCollisionHalfHeight; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerMeleeAimAssistData
// Size: 0x08 (Inherited: 0x00)
struct FTigerMeleeAimAssistData {
	float ConeAngle; // 0x00(0x04)
	float ConeLength; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerMeleeAimAssistCandidate
// Size: 0x28 (Inherited: 0x00)
struct FTigerMeleeAimAssistCandidate {
	struct ATigerCharacter* TigerCharacter; // 0x00(0x08)
	struct FVector PredictedLocation; // 0x08(0x0c)
	bool bCanSweepToPredictedLocation; // 0x14(0x01)
	bool bIsKindred; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float DistanceFromCrosshair; // 0x18(0x04)
	float DistanceFromPlayerSquared; // 0x1c(0x04)
	float AngleFromPlayer; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Tiger.TigerSwingCollisionInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerSwingCollisionInfo {
	struct TArray<struct FTigerSwingCollisionInstant> CollisionInstants; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerSwingCollisionInstant
// Size: 0x40 (Inherited: 0x00)
struct FTigerSwingCollisionInstant {
	struct FTransform Transform; // 0x00(0x30)
	float TimeInSwing; // 0x30(0x04)
	int32_t HitboxNotifyIndexForWeapon; // 0x34(0x04)
	int32_t WeaponIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Tiger.TigerMeleeFlinchData
// Size: 0x18 (Inherited: 0x00)
struct FTigerMeleeFlinchData {
	struct UCurveFloat* HorizontalFlinch; // 0x00(0x08)
	struct UCurveFloat* VerticalFlinch; // 0x08(0x08)
	float HorizontalStrength; // 0x10(0x04)
	float VerticalStrength; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerMetaStoreEntriesKeeper
// Size: 0x40 (Inherited: 0x00)
struct FTigerMetaStoreEntriesKeeper {
	struct TArray<struct FDelegate> ConfigEventSubscribers; // 0x00(0x10)
	struct FTigerMetaStoreEntriesConfig StoreEntryConfig; // 0x10(0x28)
	enum class ETigerMetaStoreEventType LastEventStatus; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Tiger.TigerMultiplayMetaData
// Size: 0x08 (Inherited: 0x00)
struct FTigerMultiplayMetaData {
	bool FakeMatchmakingEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t BuildChangeList; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerMultiplayServerInfo
// Size: 0x10 (Inherited: 0x00)
struct FTigerMultiplayServerInfo {
	struct FString SessionId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_MultiplayDeallocate
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_MultiplayDeallocate {
	struct FString FleetId; // 0x00(0x10)
	struct FString GameSessionId; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_MultiplayHeartbeat
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_MultiplayHeartbeat : FTigerResponseEnvelope {
	bool IsDraining; // 0x18(0x01)
	bool ShouldForceStop; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct Tiger.TigerRequest_MultiplayHeartbeat
// Size: 0x28 (Inherited: 0x00)
struct FTigerRequest_MultiplayHeartbeat {
	struct FString GameSessionId; // 0x00(0x10)
	int32_t PlayerCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MetaData; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRegionsConfigResponse
// Size: 0x28 (Inherited: 0x18)
struct FTigerRegionsConfigResponse : FTigerResponseEnvelope {
	struct TArray<struct FTigerRegionConfig> AvailableRegions; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRegionConfig
// Size: 0x30 (Inherited: 0x00)
struct FTigerRegionConfig {
	struct FString RegionName; // 0x00(0x10)
	struct FString RegionId; // 0x10(0x10)
	struct TArray<struct FTigerPingServerConfig> PingServers; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerPingServerConfig
// Size: 0x18 (Inherited: 0x00)
struct FTigerPingServerConfig {
	struct FString PingServerIpV4; // 0x00(0x10)
	uint16_t PingServerPort; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Tiger.TigerNearCameraFadeDebugData
// Size: 0x28 (Inherited: 0x00)
struct FTigerNearCameraFadeDebugData {
	bool bDebugNearCameraFade; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UMaterialInterface* NearCameraFadeDebugMaterial; // 0x08(0x08)
	struct UMaterialInterface* DebugVisualizationMaterialEnabled; // 0x10(0x08)
	struct UMaterialInterface* DebugVisualizationMaterialNoMaster; // 0x18(0x08)
	struct UMaterialInterface* DebugVisualizationMaterialNoSimpleCollision; // 0x20(0x08)
};

// ScriptStruct Tiger.TigerNearCameraFadeMaterialMasterData
// Size: 0x18 (Inherited: 0x00)
struct FTigerNearCameraFadeMaterialMasterData {
	struct UMaterialInterface* MasterMaterial; // 0x00(0x08)
	struct FName UseCameraDitherFadeName; // 0x08(0x08)
	struct FName FadeLengthName; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerTrackedPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FTigerTrackedPlayerData {
	struct APlayerState* PlayerState; // 0x00(0x08)
	struct ATigerBestialTrailVisualizer* Visualizer; // 0x08(0x08)
	int32_t TrackingBuffID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerItemNotification
// Size: 0x28 (Inherited: 0x00)
struct FTigerItemNotification {
	struct UTigerItemAsset* Item; // 0x00(0x08)
	int32_t ItemCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText OverrideName; // 0x10(0x18)
};

// ScriptStruct Tiger.DisplayedItemWidget
// Size: 0x10 (Inherited: 0x00)
struct FDisplayedItemWidget {
	struct UUserWidget* Widget; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerNpcDialogue
// Size: 0xa8 (Inherited: 0x00)
struct FTigerNpcDialogue {
	struct FText DialogueHeader; // 0x00(0x18)
	struct TArray<struct FText> DialogueText; // 0x18(0x10)
	bool bRandomiseText; // 0x28(0x01)
	enum class ETigerDialoguePriority DialoguePriority; // 0x29(0x01)
	enum class ETigerDialogueIdleAnimation IdleAnimation; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct TArray<struct UTigerDialogueCondition*> DialogueConditions; // 0x30(0x10)
	enum class ETigerDialogueRepeatability Repeatability; // 0x40(0x01)
	enum class ETigerDialogueCategory DialogueCategory; // 0x41(0x01)
	bool bIgnoreCategoryRestrictions; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct FTigerQuestIdentifier QuestToStartId; // 0x48(0x30)
	struct TArray<struct UTigerGrimoireEntry*> EntriesToUnlock; // 0x78(0x10)
	struct UAkAudioEvent* DialogueAudio; // 0x88(0x08)
	struct UAnimMontage* AnimationToPlay; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
};

// ScriptStruct Tiger.TigerNPCSpawningPoint
// Size: 0x20 (Inherited: 0x00)
struct FTigerNPCSpawningPoint {
	struct UTigerNPCAsset* NPCAsset; // 0x00(0x08)
	struct FVector SpawnPoint; // 0x08(0x0c)
	struct FRotator Rotation; // 0x14(0x0c)
};

// ScriptStruct Tiger.TigerPropAttachment
// Size: 0x18 (Inherited: 0x00)
struct FTigerPropAttachment {
	struct FName AttachIdentifier; // 0x00(0x08)
	struct TScriptInterface<None> Prop; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerSpawnGroupBudgetTableRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerSpawnGroupBudgetTableRow : FTableRowBase {
	struct FTigerSpawnGroupBudget Budgets[0x2]; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerSpawnGroupBudget
// Size: 0x08 (Inherited: 0x00)
struct FTigerSpawnGroupBudget {
	int32_t MaxSpawned; // 0x00(0x04)
	int32_t MinSpawned; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerNpcVoCategory
// Size: 0x08 (Inherited: 0x00)
struct FTigerNpcVoCategory {
	struct FName Category; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerOnlineStatusMessageEntry
// Size: 0x20 (Inherited: 0x00)
struct FTigerOnlineStatusMessageEntry {
	struct FTigerOnlineErrorCode ErrorCode; // 0x00(0x08)
	struct FText Message; // 0x08(0x18)
};

// ScriptStruct Tiger.TigerSessionConnectionParams
// Size: 0x20 (Inherited: 0x00)
struct FTigerSessionConnectionParams {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Tiger.TigerRequest_AcknowledgeStateUpdate
// Size: 0x04 (Inherited: 0x00)
struct FTigerRequest_AcknowledgeStateUpdate {
	uint32_t StateUpdateId; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerRequest_CreateGameSession
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_CreateGameSession {
	struct FString GameSessionToken; // 0x00(0x10)
	struct FString SESSIONTYPE; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_AcceptInvite
// Size: 0x78 (Inherited: 0x18)
struct FTigerResponse_AcceptInvite : FTigerResponseEnvelope {
	struct FString HostPlayerId; // 0x18(0x10)
	struct FString PartyId; // 0x28(0x10)
	struct TArray<struct FString> PartyPlayerIds; // 0x38(0x10)
	int32_t LeaderIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString HostAddr; // 0x50(0x10)
	int32_t HostPort; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString GameSessionToken; // 0x68(0x10)
};

// ScriptStruct Tiger.TigerRequest_DeclineInvite
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_DeclineInvite {
	struct FString PartyInviteToken; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_AcceptInvite
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_AcceptInvite {
	struct FString PartyInviteToken; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_InvitePlayer
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_InvitePlayer : FTigerResponseEnvelope {
	struct FString InviteId; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRequest_InvitePlayer
// Size: 0x30 (Inherited: 0x00)
struct FTigerRequest_InvitePlayer {
	struct FString GuestPlayerId; // 0x00(0x10)
	struct FString GameSessionToken; // 0x10(0x10)
	struct FString LanSessionUrl; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetParty
// Size: 0x70 (Inherited: 0x18)
struct FTigerResponse_GetParty : FTigerResponseEnvelope {
	bool PartyFound; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString PartyId; // 0x20(0x10)
	struct TArray<struct FString> PlayerIds; // 0x30(0x10)
	int32_t LeaderIndex; // 0x40(0x04)
	int32_t MaxMembers; // 0x44(0x04)
	struct FString HostAddr; // 0x48(0x10)
	int32_t HostPort; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString GameSessionToken; // 0x60(0x10)
};

// ScriptStruct Tiger.TigerPartyInviteToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerPartyInviteToken {
	struct FString Content; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerClanPassiveAndDefault
// Size: 0x10 (Inherited: 0x00)
struct FTigerClanPassiveAndDefault {
	struct UActorComponent* PassiveLogic; // 0x00(0x08)
	struct UTigerPassiveConfig* PassiveConfig; // 0x08(0x08)
};

// ScriptStruct Tiger.HideousTimingData
// Size: 0x08 (Inherited: 0x00)
struct FHideousTimingData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerPersistentCategoryGroupDefinition
// Size: 0x10 (Inherited: 0x00)
struct FTigerPersistentCategoryGroupDefinition {
	struct TArray<struct FTigerPersistentCategoryDefinition> CategoryDefinitions; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerPersistentCategoryDefinition
// Size: 0x20 (Inherited: 0x08)
struct FTigerPersistentCategoryDefinition : FTableRowBase {
	enum class ETigerPersistentStoreCategory Category; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FTigerPersistentItemDefinition> AvailableItems; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerPersistentItemDefinition
// Size: 0x30 (Inherited: 0x00)
struct FTigerPersistentItemDefinition {
	struct FTigerItemId ItemId; // 0x00(0x08)
	struct FSoftObjectPath ItemClassPath; // 0x08(0x18)
	int32_t Cost; // 0x20(0x04)
	int32_t StorePriority; // 0x24(0x04)
	struct FTigerItemId SoftCurrencyId; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerInventoryCombinedItemValue
// Size: 0x10 (Inherited: 0x00)
struct FTigerInventoryCombinedItemValue {
	struct FTigerInventoryItemOwnerType Key; // 0x00(0x03)
	char pad_3[0x5]; // 0x03(0x05)
	struct UTigerInventoryItemBase* Value; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerInventoryItemOwnerType
// Size: 0x03 (Inherited: 0x00)
struct FTigerInventoryItemOwnerType {
	enum class ETigerClan Clan; // 0x00(0x01)
	enum class ETigerPowerKitType Archetype; // 0x01(0x01)
	enum class ETigerGender Gender; // 0x02(0x01)
};

// ScriptStruct Tiger.TigerLoginFailedInfo
// Size: 0x20 (Inherited: 0x00)
struct FTigerLoginFailedInfo {
	enum class ETigerLoginResult FailReason; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FTigerBanInfo BanInfo; // 0x08(0x18)
};

// ScriptStruct Tiger.TigerBanInfo
// Size: 0x18 (Inherited: 0x00)
struct FTigerBanInfo {
	char Reason; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString EndsAt; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerProgressedQuestWrapper
// Size: 0x28 (Inherited: 0x00)
struct FTigerProgressedQuestWrapper {
	struct FText QuestDescription; // 0x00(0x18)
	struct TArray<struct FTigerProgressedObjectiveWrapper> ProgressedObjectives; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerProgressedObjectiveWrapper
// Size: 0x0c (Inherited: 0x00)
struct FTigerProgressedObjectiveWrapper {
	int32_t TargetValue; // 0x00(0x04)
	int32_t PostSessionProgress; // 0x04(0x04)
	int32_t PreSessionProgress; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerItemIdWithPriceJSON
// Size: 0x28 (Inherited: 0x00)
struct FTigerItemIdWithPriceJSON {
	struct FString ItemId; // 0x00(0x10)
	struct FTigerItemPriceJSON Price; // 0x10(0x18)
};

// ScriptStruct Tiger.TigerItemPriceJSON
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemPriceJSON {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SoftCurrencyId; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerPingNotificationUIData
// Size: 0x28 (Inherited: 0x00)
struct FTigerPingNotificationUIData {
	struct FText NotificationText; // 0x00(0x18)
	struct FTigerPingIconData IconData; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerPingIconData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPingIconData {
	struct UTexture2D* Texture; // 0x00(0x08)
	float Scale; // 0x08(0x04)
	enum class ETigerUIColor TintColor; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Tiger.TigerPingCoordinatorEntry
// Size: 0x48 (Inherited: 0x00)
struct FTigerPingCoordinatorEntry {
	struct FTigerUniquePingId UniqueID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTigerPingBase* PingClass; // 0x08(0x08)
	struct TWeakObjectPtr<struct AActor> ContextActor; // 0x10(0x08)
	struct UDataAsset* ContextObject; // 0x18(0x08)
	char TelemetryTypeId; // 0x20(0x01)
	char pad_21[0x27]; // 0x21(0x27)
};

// ScriptStruct Tiger.TigerAttackingNPCCollection
// Size: 0x18 (Inherited: 0x00)
struct FTigerAttackingNPCCollection {
	struct TArray<struct TWeakObjectPtr<struct ATigerNPC>> AttackingNPCs; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerNpcThatCanSeePlayerWrapper
// Size: 0x18 (Inherited: 0x00)
struct FTigerNpcThatCanSeePlayerWrapper {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Tiger.TigerNpcThatCanSeePlayerWrapper_Client
// Size: 0x0c (Inherited: 0x00)
struct FTigerNpcThatCanSeePlayerWrapper_Client {
	struct TWeakObjectPtr<struct ATigerBaseNPC> NPC; // 0x00(0x08)
	float LastTimeReactingToPlayerAction; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerInventoryStats
// Size: 0x1c (Inherited: 0x00)
struct FTigerInventoryStats {
	float MeleeDamage; // 0x00(0x04)
	float ShootingDamage; // 0x04(0x04)
	float AbilityDamageBonus; // 0x08(0x04)
	float MeleeDefense; // 0x0c(0x04)
	float ShootingDefense; // 0x10(0x04)
	float AbilityDefense; // 0x14(0x04)
	float AbilityHaste; // 0x18(0x04)
};

// ScriptStruct Tiger.TigerHandIkWallTraceData
// Size: 0x58 (Inherited: 0x00)
struct FTigerHandIkWallTraceData {
	struct FTigerHandIkData RightHandIkData; // 0x00(0x28)
	struct FTigerHandIkData LeftHandIkData; // 0x28(0x28)
	enum class ETraceTypeQuery InTraceChannel; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float TraceLength; // 0x54(0x04)
};

// ScriptStruct Tiger.TigerHandIkData
// Size: 0x28 (Inherited: 0x00)
struct FTigerHandIkData {
	struct FName HandBoneName; // 0x00(0x08)
	struct FVector HandLocation; // 0x08(0x0c)
	float ToWallDistance; // 0x14(0x04)
	bool bTraceSuccessful; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// ScriptStruct Tiger.TigerPlayerAnimationSets
// Size: 0x18 (Inherited: 0x00)
struct FTigerPlayerAnimationSets {
	struct UTigerAnimationSetAsset* AnimationSetByClan[0x3]; // 0x00(0x18)
};

// ScriptStruct Tiger.TigerSeasonalData
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonalData {
	uint32_t OldExp; // 0x00(0x04)
	uint32_t NewExp; // 0x04(0x04)
	uint32_t OldLevel; // 0x08(0x04)
	uint32_t NewLevel; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPlayerIdWithPlacement
// Size: 0x18 (Inherited: 0x00)
struct FTigerPlayerIdWithPlacement {
	struct FString PlayerId; // 0x00(0x10)
	int32_t Placement; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerResponse_GetPremiumCurrencyBalance
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_GetPremiumCurrencyBalance : FTigerResponseEnvelope {
	uint64_t Balance; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerResponse_IncrementPremiumCurrency
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_IncrementPremiumCurrency : FTigerResponseEnvelope {
	uint64_t OldAmount; // 0x18(0x08)
	uint64_t NewAmount; // 0x20(0x08)
};

// ScriptStruct Tiger.TigerRequest_IncrementPremiumCurrency
// Size: 0x08 (Inherited: 0x00)
struct FTigerRequest_IncrementPremiumCurrency {
	uint64_t Amount; // 0x00(0x08)
};

// ScriptStruct Tiger.TigerResponse_GetStoreEntriesChecksum
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_GetStoreEntriesChecksum : FTigerResponseEnvelope {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerResponse_GetStoreEntries
// Size: 0x30 (Inherited: 0x18)
struct FTigerResponse_GetStoreEntries : FTigerResponseEnvelope {
	struct TArray<struct FTigerResponse_StoreEntry> StoreEntries; // 0x18(0x10)
	int64_t Checksum; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerResponse_StoreEntry
// Size: 0x58 (Inherited: 0x00)
struct FTigerResponse_StoreEntry {
	struct FString StoreEntryID; // 0x00(0x10)
	uint32_t PremiumPrice; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ImagePath; // 0x18(0x10)
	uint32_t Discount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDateTime StartAt; // 0x30(0x08)
	struct FDateTime EndsAt; // 0x38(0x08)
	uint32_t Slot; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FTigerResponse_StoreEntryItem> Items; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerResponse_StoreEntryItem
// Size: 0x18 (Inherited: 0x00)
struct FTigerResponse_StoreEntryItem {
	struct FString ItemId; // 0x00(0x10)
	uint32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerResponse_GetServerMetricsConfig
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetServerMetricsConfig : FTigerResponseEnvelope {
	struct FString MetricsConfig; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_DailyRewardCollection
// Size: 0x20 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_DailyRewardCollection {
	struct TArray<struct FString> TrackRewardIds; // 0x00(0x10)
	struct TArray<struct FTigerSeasonConfigResponse_DailyFinalReward> DailyFinalRewardWeeks; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_DailyFinalReward
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_DailyFinalReward {
	struct TArray<struct FString> DailyFinalRewardIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_ChallengeCollection
// Size: 0x30 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_ChallengeCollection {
	struct TArray<struct FTigerSeasonConfigResponse_SeasonalChallengeDefinition> ChallengeDefinitions; // 0x00(0x10)
	struct TArray<struct FString> RewardIds; // 0x10(0x10)
	struct FDateTime UnlockDate; // 0x20(0x08)
	struct FDateTime LockDate; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_SeasonalChallengeDefinition
// Size: 0x18 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_SeasonalChallengeDefinition {
	struct FTigerChallengeInstanceID ChallengeInstanceID; // 0x00(0x04)
	struct FTigerChallengeTypeID ChallengeTypeID; // 0x04(0x04)
	struct FString RewardId; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerSeasonConfigResponse_RewardTier
// Size: 0x10 (Inherited: 0x00)
struct FTigerSeasonConfigResponse_RewardTier {
	struct TArray<struct FString> ItemIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_RegisterGameSessionResults
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_RegisterGameSessionResults {
	struct TArray<struct FTigerPlayerIdWithPlacement> Result; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetMatchmakingToken
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetMatchmakingToken : FTigerResponseEnvelope {
	struct FString MatchmakingDataToken; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetMatchmakingToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_GetMatchmakingToken {
	struct TArray<struct FString> PlayerIds; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetSeasonConfigs
// Size: 0x90 (Inherited: 0x18)
struct FTigerResponse_GetSeasonConfigs : FTigerResponseEnvelope {
	struct TMap<uint32_t, struct FString> ConfigsBySeasonId; // 0x18(0x50)
	struct FString PublicIpv4; // 0x68(0x10)
	struct FString PublicIpv6; // 0x78(0x10)
	struct FDateTime CurrentDateTime; // 0x88(0x08)
};

// ScriptStruct Tiger.TigerResponse_BuyItem
// Size: 0x130 (Inherited: 0x18)
struct FTigerResponse_BuyItem : FTigerResponseEnvelope {
	struct FTigerResponse_TransactionalPlayerData Transactional; // 0x18(0x118)
};

// ScriptStruct Tiger.TigerResponse_TransactionalPlayerData
// Size: 0x118 (Inherited: 0x00)
struct FTigerResponse_TransactionalPlayerData {
	int32_t Version; // 0x00(0x04)
	uint32_t SeasonId; // 0x04(0x04)
	uint32_t SeasonLevel; // 0x08(0x04)
	uint32_t SeasonLevelExp; // 0x0c(0x04)
	uint32_t SeasonPlacementExpBonusPercentage; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FString, struct FTigerResponse_GenericExp> GenericExps; // 0x18(0x50)
	struct TMap<struct FString, int32_t> InventoryItems; // 0x68(0x50)
	struct TMap<struct FString, struct FString> CustomizationConfigs; // 0xb8(0x50)
	float Rating; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	uint64_t PremiumCurrencyBalance; // 0x110(0x08)
};

// ScriptStruct Tiger.TigerResponse_GenericExp
// Size: 0x08 (Inherited: 0x00)
struct FTigerResponse_GenericExp {
	uint32_t Level; // 0x00(0x04)
	uint32_t Exp; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerRequest_SetCustomizationConfigs
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_SetCustomizationConfigs {
	struct TArray<struct FString> Keys; // 0x00(0x10)
	struct TArray<struct FString> Values; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_BuyStoreEntries
// Size: 0x148 (Inherited: 0x18)
struct FTigerResponse_BuyStoreEntries : FTigerResponseEnvelope {
	struct FTigerResponse_TransactionalPlayerData Transactional; // 0x18(0x118)
	struct TArray<struct FTigerBoughtItemElement> BoughtItems; // 0x130(0x10)
	char BuyResult; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// ScriptStruct Tiger.TigerBoughtItemElement
// Size: 0x18 (Inherited: 0x00)
struct FTigerBoughtItemElement {
	struct FString ItemId; // 0x00(0x10)
	uint32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerRequest_BuyStoreEntries
// Size: 0x18 (Inherited: 0x00)
struct FTigerRequest_BuyStoreEntries {
	struct TArray<struct FTigerStoreEntryAndQuantity> StoreEntriesToBuy; // 0x00(0x10)
	uint32_t TotalCost; // 0x10(0x04)
	char Channel; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Tiger.TigerStoreEntryAndQuantity
// Size: 0x18 (Inherited: 0x00)
struct FTigerStoreEntryAndQuantity {
	struct FString ItemId; // 0x00(0x10)
	uint32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerRequest_BuyItems
// Size: 0x50 (Inherited: 0x00)
struct FTigerRequest_BuyItems {
	struct TArray<struct FTigerItemIdWithQuantity> ItemsToBuy; // 0x00(0x10)
	struct TArray<struct FString> CustomizationKeys; // 0x10(0x10)
	struct TArray<struct FString> CustomizationValues; // 0x20(0x10)
	int32_t TotalCost; // 0x30(0x04)
	int32_t CurrencyAmountToAdd; // 0x34(0x04)
	uint32_t SeasonPlacementExpBoostPercentageToAdd; // 0x38(0x04)
	char Channel; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct TArray<struct FTigerItemIdWithQuantity> ItemsToConsume; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerItemIdWithQuantity
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemIdWithQuantity {
	struct FString ID; // 0x00(0x10)
	uint32_t Quantity; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerResponse_GetStoreItemConfigs
// Size: 0x68 (Inherited: 0x18)
struct FTigerResponse_GetStoreItemConfigs : FTigerResponseEnvelope {
	struct TMap<struct FString, struct FTigerResponse_CategoryGroupDefinition> CategoryGroups; // 0x18(0x50)
};

// ScriptStruct Tiger.TigerResponse_CategoryGroupDefinition
// Size: 0x10 (Inherited: 0x00)
struct FTigerResponse_CategoryGroupDefinition {
	struct FString CategoryDefinitions; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_StoreEntryConfig
// Size: 0x01 (Inherited: 0x00)
struct FTigerRequest_StoreEntryConfig {
	char Show; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerRequest_UpdatePlayerData
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_UpdatePlayerData {
	struct FString Data; // 0x00(0x10)
	struct FString CardData; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetCreatePlayer
// Size: 0x180 (Inherited: 0x18)
struct FTigerResponse_GetCreatePlayer : FTigerResponseEnvelope {
	struct FTigerResponse_TransactionalPlayerData Transactional; // 0x18(0x118)
	struct FString Data; // 0x130(0x10)
	struct FString CardData; // 0x140(0x10)
	bool Banned; // 0x150(0x01)
	char BanReason; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	struct FString BanEndsAt; // 0x158(0x10)
	bool Muted; // 0x168(0x01)
	char MutedReason; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct FString MutedEndsAt; // 0x170(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetCreatePlayer
// Size: 0x01 (Inherited: 0x00)
struct FTigerRequest_GetCreatePlayer {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerOutfitCustomizationConfigValue
// Size: 0x04 (Inherited: 0x00)
struct FTigerOutfitCustomizationConfigValue {
	int32_t HoodieIndex; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerResponse_UpdateSeasonProgress
// Size: 0x78 (Inherited: 0x18)
struct FTigerResponse_UpdateSeasonProgress : FTigerResponseEnvelope {
	uint32_t OldSeasonExp; // 0x18(0x04)
	uint32_t NewSeasonExp; // 0x1c(0x04)
	uint32_t OldSeasonLevel; // 0x20(0x04)
	uint32_t NewSeasonLevel; // 0x24(0x04)
	struct TMap<struct FString, struct FTigerResponse_GenericExp> NewGenericExps; // 0x28(0x50)
};

// ScriptStruct Tiger.TigerRequest_UpdateSeasonProgress
// Size: 0x78 (Inherited: 0x00)
struct FTigerRequest_UpdateSeasonProgress {
	uint32_t ExpGained; // 0x00(0x04)
	uint32_t ExpRemovedDueToConversion; // 0x04(0x04)
	uint32_t LevelCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ArchetypeId; // 0x10(0x10)
	uint32_t PlayedSeconds; // 0x20(0x04)
	bool IncrementMatchesPlayed; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TMap<struct FString, struct FTigerRequest_UpdateSeasonProgressGenericExp> GenericExps; // 0x28(0x50)
};

// ScriptStruct Tiger.TigerRequest_UpdateSeasonProgressGenericExp
// Size: 0x08 (Inherited: 0x00)
struct FTigerRequest_UpdateSeasonProgressGenericExp {
	uint32_t Level; // 0x00(0x04)
	uint32_t Exp; // 0x04(0x04)
};

// ScriptStruct Tiger.TigerResponse_IncrementSeasonExp
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_IncrementSeasonExp : FTigerResponseEnvelope {
	uint32_t OldExp; // 0x18(0x04)
	uint32_t NewExp; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerRequest_IncrementSeasonExp
// Size: 0x04 (Inherited: 0x00)
struct FTigerRequest_IncrementSeasonExp {
	uint32_t Exp; // 0x00(0x04)
};

// ScriptStruct Tiger.TigerRequest_UpdateLastUse
// Size: 0x01 (Inherited: 0x00)
struct FTigerRequest_UpdateLastUse {
	char CharacterId; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerResponse_GetCharactersForPlayer
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetCharactersForPlayer : FTigerResponseEnvelope {
	struct TArray<struct FTigerResponse_Character> Characters; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerResponse_Character
// Size: 0x20 (Inherited: 0x00)
struct FTigerResponse_Character {
	char CharacterId; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Data; // 0x08(0x10)
	int64_t LastUsedAt; // 0x18(0x08)
};

// ScriptStruct Tiger.TigerResponse_GetCharacter
// Size: 0x38 (Inherited: 0x18)
struct FTigerResponse_GetCharacter : FTigerResponseEnvelope {
	struct FTigerResponse_Character Character; // 0x18(0x20)
};

// ScriptStruct Tiger.TigerRequest_UpdateCharacter
// Size: 0xa8 (Inherited: 0x00)
struct FTigerRequest_UpdateCharacter {
	struct FTigerPersistentPlayerCharacterData CharacterData; // 0x00(0xa8)
};

// ScriptStruct Tiger.TigerRequest_AddCharacter
// Size: 0x01 (Inherited: 0x00)
struct FTigerRequest_AddCharacter {
	char Archetype; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerResponse_GetPlayerInfoFromTicket
// Size: 0x50 (Inherited: 0x18)
struct FTigerResponse_GetPlayerInfoFromTicket : FTigerResponseEnvelope {
	struct FString PlayerId; // 0x18(0x10)
	struct FString SharkmobUserId; // 0x28(0x10)
	struct FString PlayerName; // 0x38(0x10)
	char Channel; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Tiger.TigerRequest_GetPlayerInfoFromTicket
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_GetPlayerInfoFromTicket {
	struct FString Ticket; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetVersionIsValid
// Size: 0x40 (Inherited: 0x18)
struct FTigerResponse_GetVersionIsValid : FTigerResponseEnvelope {
	bool VersionIsValid; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString PublicIpv4; // 0x20(0x10)
	struct FString PublicIpv6; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetLonelyFishTicket
// Size: 0x40 (Inherited: 0x18)
struct FTigerResponse_GetLonelyFishTicket : FTigerResponseEnvelope {
	struct FString Ticket; // 0x18(0x10)
	struct FString PlayerId; // 0x28(0x10)
	float DesiredRefreshIntervalMinutes; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Tiger.TigerRequest_GetLonelyFishTicket
// Size: 0x48 (Inherited: 0x00)
struct FTigerRequest_GetLonelyFishTicket {
	struct FString AuthenticationOpenId; // 0x00(0x10)
	struct FString AuthenticationToken; // 0x10(0x10)
	char AuthenticationChannelId; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString LoginToken; // 0x28(0x10)
	struct FString Location; // 0x38(0x10)
};

// ScriptStruct Tiger.TigerPlayerGridCell
// Size: 0x30 (Inherited: 0x00)
struct FTigerPlayerGridCell {
	struct TArray<int32_t> CellIndexOffsets; // 0x00(0x10)
	struct FVector2D WorldPosition; // 0x10(0x08)
	int32_t PlayersInCellArea; // 0x18(0x04)
	int32_t ClosestPlayerCellDistance; // 0x1c(0x04)
	struct TArray<struct TWeakObjectPtr<struct ATigerPlayer>> PlayersInCell; // 0x20(0x10)
};

// ScriptStruct Tiger.BloodHuntMarker
// Size: 0x10 (Inherited: 0x00)
struct FBloodHuntMarker {
	struct UTigerCompassMarkerWidget* CompassMarker; // 0x00(0x08)
	struct UTigerMapMarkerProxy* MapMarkerProxy; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerPlayerMeshMaterialData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerMeshMaterialData {
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerPlayerSavedLocation
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerSavedLocation {
	struct FVector Location; // 0x00(0x0c)
	float Timestamp; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerPaperDollHighlightComponents
// Size: 0x50 (Inherited: 0x00)
struct FTigerPaperDollHighlightComponents {
	struct TMap<struct USpotLightComponent*, float> SpotLightIntensities; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerPremiumCurrencyPackData
// Size: 0x48 (Inherited: 0x00)
struct FTigerPremiumCurrencyPackData {
	int32_t CurrencyAmount; // 0x00(0x04)
	int32_t CurrencyBonusAmount; // 0x04(0x04)
	float RealCurrencyCost; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString DisplayImagePath; // 0x10(0x10)
	struct FText CurrencyType; // 0x20(0x18)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct Tiger.TigerRequest_DsPresence
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_DsPresence {
	struct FString DsInstanceId; // 0x00(0x10)
	struct TArray<struct FString> PlayerIds; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerRequest_SetInterestedPlayers
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_SetInterestedPlayers {
	struct TArray<struct FString> InterestedPlayers; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_SetLocation
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_SetLocation {
	struct FString Location; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRequest_Presence
// Size: 0x20 (Inherited: 0x00)
struct FTigerRequest_Presence {
	struct FString Location; // 0x00(0x10)
	struct TArray<struct FString> InterestedPlayers; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerResponse_Presence
// Size: 0x20 (Inherited: 0x18)
struct FTigerResponse_Presence : FTigerResponseEnvelope {
	bool ResendData; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Tiger.TigerResponse_GetPlayers
// Size: 0x30 (Inherited: 0x18)
struct FTigerResponse_GetPlayers : FTigerResponseEnvelope {
	struct TArray<struct FPresenceInfo> InterestedPlayers; // 0x18(0x10)
	bool ResendData; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Tiger.PresenceInfo
// Size: 0x28 (Inherited: 0x00)
struct FPresenceInfo {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
	bool IsOnline; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerPromotionalPopupConfig
// Size: 0xf8 (Inherited: 0x00)
struct FTigerPromotionalPopupConfig {
	struct TMap<struct FString, struct FString> PromoPopup_BgImage; // 0x00(0x50)
	struct TMap<struct FString, struct FString> PromoPopup_Title; // 0x50(0x50)
	struct TMap<struct FString, struct FString> PromoPopup_Paragraph; // 0xa0(0x50)
	int32_t PopupTriggerInterval; // 0xf0(0x04)
	int32_t PopupVersion; // 0xf4(0x04)
};

// ScriptStruct Tiger.TigerPromotionalPopupConfigEntry
// Size: 0x40 (Inherited: 0x00)
struct FTigerPromotionalPopupConfigEntry {
	struct FString ImageUrl; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct FText Paragraph; // 0x28(0x18)
};

// ScriptStruct Tiger.TigerPromotionalUiData
// Size: 0x10 (Inherited: 0x00)
struct FTigerPromotionalUiData {
	struct FDateTime LastShowDateTime; // 0x00(0x08)
	int32_t LastShowVersion; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerQueuedTextPromptPriorityEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerQueuedTextPromptPriorityEntry {
	struct FName PropertyName; // 0x00(0x08)
	struct UTigerSimpleTextPrompt* PromptClass; // 0x08(0x08)
	struct FName VisibleName; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerQueuedTextPrompt
// Size: 0x60 (Inherited: 0x00)
struct FTigerQueuedTextPrompt {
	struct UTigerSimpleTextPrompt* Prompt; // 0x00(0x08)
	char pad_8[0x58]; // 0x08(0x58)
};

// ScriptStruct Tiger.TigerDummyPropAttachment
// Size: 0x70 (Inherited: 0x00)
struct FTigerDummyPropAttachment {
	struct FTigerPropAttachmentInfo AttachmentInfo; // 0x00(0x60)
	bool bShow; // 0x60(0x01)
	char pad_61[0xf]; // 0x61(0x0f)
};

// ScriptStruct Tiger.TigerPushMessage
// Size: 0x10 (Inherited: 0x00)
struct FTigerPushMessage {
	struct FString MsgType; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerDsPushRegisterReq
// Size: 0x40 (Inherited: 0x10)
struct FTigerDsPushRegisterReq : FTigerPushMessage {
	struct FString ClientProtocolVersion; // 0x10(0x10)
	struct FString ServerSecret; // 0x20(0x10)
	struct FString DsInstanceId; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerGameClientPushRegisterReq
// Size: 0x30 (Inherited: 0x10)
struct FTigerGameClientPushRegisterReq : FTigerPushMessage {
	struct FString ClientProtocolVersion; // 0x10(0x10)
	struct FString Ticket; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerQuestItemLocationDetails
// Size: 0x40 (Inherited: 0x00)
struct FTigerQuestItemLocationDetails {
	struct FTigerQuestIdentifier QuestIdentifier; // 0x00(0x30)
	struct FVector Location; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Tiger.TigerQuestCollectionEntry
// Size: 0x10 (Inherited: 0x00)
struct FTigerQuestCollectionEntry {
	int32_t UniqueQuestID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTigerQuest* ReferenceQuest; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerProjectileAreaEffect
// Size: 0x10 (Inherited: 0x00)
struct FTigerProjectileAreaEffect {
	struct ATigerAreaEffect* AreaEffect; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerShotProjectileData
// Size: 0x30 (Inherited: 0x00)
struct FTigerShotProjectileData {
	char pad_0[0x28]; // 0x00(0x28)
	struct UTigerRangedWeapon* RangedWeapon; // 0x28(0x08)
};

// ScriptStruct Tiger.TigerRegionPingerSettings
// Size: 0x14 (Inherited: 0x00)
struct FTigerRegionPingerSettings {
	int32_t PingNumSamples; // 0x00(0x04)
	int32_t NumPingsToDisregard; // 0x04(0x04)
	float PingTimeoutSeconds; // 0x08(0x04)
	int32_t AllowedConsecutiveFailures; // 0x0c(0x04)
	float WaitSecondsOnUnreachable; // 0x10(0x04)
};

// ScriptStruct Tiger.TigerResurrectToken
// Size: 0x10 (Inherited: 0x00)
struct FTigerResurrectToken {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerRichIconRow
// Size: 0x90 (Inherited: 0x08)
struct FTigerRichIconRow : FTableRowBase {
	struct FSlateBrush Brush; // 0x08(0x88)
};

// ScriptStruct Tiger.TigerRoofSystemPrimitiveData
// Size: 0x20 (Inherited: 0x00)
struct FTigerRoofSystemPrimitiveData {
	struct FVector4 Color; // 0x00(0x10)
	float Desaturation; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformablePrimitiveData
// Size: 0x20 (Inherited: 0x00)
struct FTigerRoofSystemFreeTransformablePrimitiveData {
	struct FVector4 Color; // 0x00(0x10)
	float Desaturation; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableMaterialCache
// Size: 0x18 (Inherited: 0x00)
struct FTigerRoofSystemFreeTransformableMaterialCache {
	struct TArray<struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding> MaterialBindings; // 0x00(0x10)
	bool bStaticMeshComponent; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableMaterialCacheMaterialBinding
// Size: 0x10 (Inherited: 0x00)
struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding {
	int32_t MaterialIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableCorner
// Size: 0x40 (Inherited: 0x00)
struct FTigerRoofSystemFreeTransformableCorner {
	struct UPoseableMeshComponent* CornerComponent; // 0x00(0x08)
	struct UStaticMeshComponent* StaticComponent; // 0x08(0x08)
	struct UProceduralMeshComponent* CollisionComponent; // 0x10(0x08)
	struct FVector TopBoneLocation; // 0x18(0x0c)
	struct FVector LeftBoneLocation; // 0x24(0x0c)
	struct FVector RightBoneLocation; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Tiger.TigerSubLevelBackground
// Size: 0x30 (Inherited: 0x00)
struct FTigerSubLevelBackground {
	struct FSoftObjectPath SubLevel; // 0x00(0x18)
	struct FText UiName; // 0x18(0x18)
};

// ScriptStruct Tiger.TigerItemPreviewData
// Size: 0x18 (Inherited: 0x00)
struct FTigerItemPreviewData {
	struct ATigerBattlepassRewardPreview* PreviewActorClass; // 0x00(0x08)
	struct TArray<struct UTigerInventoryItemBase*> ItemClasses; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerBattlepassRewardPreviewRow
// Size: 0x60 (Inherited: 0x08)
struct FTigerBattlepassRewardPreviewRow : FTableRowBase {
	SoftClassProperty ItemClass; // 0x08(0x28)
	SoftClassProperty PreviewActorClass; // 0x30(0x28)
	struct FName CameraTag; // 0x58(0x08)
};

// ScriptStruct Tiger.TigerPostProcessSettingsSetup
// Size: 0x10 (Inherited: 0x00)
struct FTigerPostProcessSettingsSetup {
	struct TArray<struct UMaterialInterface*> PostProcessMaterials; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerDsLoginElsewherePush
// Size: 0x20 (Inherited: 0x00)
struct FTigerDsLoginElsewherePush {
	struct FString PlayerId; // 0x00(0x10)
	struct FString OtherDsInstanceId; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerKickPlayerPush
// Size: 0x10 (Inherited: 0x00)
struct FTigerKickPlayerPush {
	struct FString PlayerId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetGameSessionDsData
// Size: 0x68 (Inherited: 0x18)
struct FTigerResponse_GetGameSessionDsData : FTigerResponseEnvelope {
	int32_t GameSessionPlayerCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString GameSessionId; // 0x20(0x10)
	enum class ETigerGroupingMode GROUPINGMODE; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString GroupID; // 0x38(0x10)
	struct FString Ip; // 0x48(0x10)
	int32_t Port; // 0x58(0x04)
	bool EnableFakeMatchmakingDelay; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	uint32_t GameSessionBotCount; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Tiger.TigerRequest_GetGameSessionDsData
// Size: 0x38 (Inherited: 0x00)
struct FTigerRequest_GetGameSessionDsData {
	struct FString GameSessionToken; // 0x00(0x10)
	int32_t DsPort; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PlayerUniqueId; // 0x18(0x10)
	struct FString OverrideIp; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerRequest_RunningGameServerHeartbeat
// Size: 0x48 (Inherited: 0x00)
struct FTigerRequest_RunningGameServerHeartbeat {
	struct FString OverrideIp; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DsVersionId; // 0x18(0x10)
	int32_t PlayerCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTigerDsGameSessionDetails SessionDetails; // 0x30(0x18)
};

// ScriptStruct Tiger.TigerResponse_IdleGameServerHeartbeat
// Size: 0x38 (Inherited: 0x18)
struct FTigerResponse_IdleGameServerHeartbeat : FTigerResponseEnvelope {
	bool HasSwitchedToRunning; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FTigerDsGameSessionDetails SessionDetails; // 0x20(0x18)
};

// ScriptStruct Tiger.TigerRequest_IdleGameServerHeartbeat
// Size: 0x30 (Inherited: 0x00)
struct FTigerRequest_IdleGameServerHeartbeat {
	struct FString OverrideIp; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DsVersionId; // 0x18(0x10)
	int32_t PlayerCount; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerRequest_RegisterNewIdle
// Size: 0x28 (Inherited: 0x00)
struct FTigerRequest_RegisterNewIdle {
	struct FString OverrideIp; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DsVersionId; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerShockwaveWallData
// Size: 0x60 (Inherited: 0x00)
struct FTigerShockwaveWallData {
	struct TArray<struct UCurveFloat*> SpeedCurve; // 0x00(0x10)
	struct TArray<struct UCurveVector*> EffectExtentCurve; // 0x10(0x10)
	struct TArray<struct FVector> TerrainSweepBoxExtent; // 0x20(0x10)
	struct TArray<float> TravelDistance; // 0x30(0x10)
	struct TArray<float> Damage; // 0x40(0x10)
	struct TArray<struct UTigerBuff*> OnHitBuff; // 0x50(0x10)
};

// ScriptStruct Tiger.TigerSignificanceBudget
// Size: 0x40 (Inherited: 0x00)
struct FTigerSignificanceBudget {
	struct TArray<struct FTigerSignificancePlayerBucket> PlayerBuckets; // 0x00(0x10)
	struct TArray<struct FTigerSignificanceElysiumNpcBucket> ElysiumNpcBuckets; // 0x10(0x10)
	struct TArray<float> PlayerUroScreenSizeThresholds; // 0x20(0x10)
	struct TArray<float> NpcUroScreenSizeThresholds; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerSignificanceElysiumNpcBucket
// Size: 0x10 (Inherited: 0x00)
struct FTigerSignificanceElysiumNpcBucket {
	int32_t BucketSize; // 0x00(0x04)
	float TickRate; // 0x04(0x04)
	uint32_t VisibleMeshesBitMask; // 0x08(0x04)
	bool bForceLastLod; // 0x0c(0x01)
	bool bEnableClothSim; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct Tiger.TigerSignificancePlayerBucket
// Size: 0x14 (Inherited: 0x00)
struct FTigerSignificancePlayerBucket {
	int32_t BucketSize; // 0x00(0x04)
	float TickRate; // 0x04(0x04)
	float MoveCompTickRate; // 0x08(0x04)
	uint32_t VisibleMeshesBitMask; // 0x0c(0x04)
	bool bEnableClothSim; // 0x10(0x01)
	bool bEnableFootIk; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct Tiger.TigerPlayerStateFriendPair
// Size: 0x10 (Inherited: 0x00)
struct FTigerPlayerStateFriendPair {
	struct ATigerPlayerState* PlayerState; // 0x00(0x08)
	struct UTigerFriend* Friend; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerDesiredSpawnLocation
// Size: 0x20 (Inherited: 0x00)
struct FTigerDesiredSpawnLocation {
	struct ATigerPlayerController* PlayerController; // 0x00(0x08)
	struct AActor* AssignedSpawnPoint; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerSplatmapSplatHistoryItem
// Size: 0x20 (Inherited: 0x00)
struct FTigerSplatmapSplatHistoryItem {
	struct UTexture* Textures[0x4]; // 0x00(0x20)
};

// ScriptStruct Tiger.StaticPhysicsPiercingData
// Size: 0x50 (Inherited: 0x00)
struct FStaticPhysicsPiercingData {
	struct UStaticMeshComponent* PiercingStaticMesh; // 0x00(0x08)
	struct FVector PreviousLocation; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform CachedRelativeTransform; // 0x20(0x30)
};

// ScriptStruct Tiger.PlayerStatistic
// Size: 0x18 (Inherited: 0x00)
struct FPlayerStatistic {
	struct FString Name; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerAnimationStatistic
// Size: 0x18 (Inherited: 0x00)
struct FTigerAnimationStatistic {
	struct FString Name; // 0x00(0x10)
	int32_t RelativeTimePlayed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerTelemetryPlayerGeneralInfo
// Size: 0x40 (Inherited: 0x00)
struct FTigerTelemetryPlayerGeneralInfo {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Tiger.TigerTelemetryTutorialLocationsContainer
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryTutorialLocationsContainer {
	struct TArray<struct FTigerTelemetryTutorialLocation> Locations; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerTelemetryTutorialLocation
// Size: 0x20 (Inherited: 0x00)
struct FTigerTelemetryTutorialLocation {
	struct FString ObjectiveId; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerTelemetryTutorialTimeStampContainer
// Size: 0x10 (Inherited: 0x00)
struct FTigerTelemetryTutorialTimeStampContainer {
	struct TArray<struct FTigerTelemetryTutorialTimeStamp> TimeStamps; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerTelemetryTutorialTimeStamp
// Size: 0x18 (Inherited: 0x00)
struct FTigerTelemetryTutorialTimeStamp {
	struct FString ObjectiveId; // 0x00(0x10)
	float Timestamp; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerTelemetryItemSpawnAmounts
// Size: 0x50 (Inherited: 0x00)
struct FTigerTelemetryItemSpawnAmounts {
	struct TMap<uint64_t, int32_t> ItemAmounts; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerStatusEffect
// Size: 0x0b (Inherited: 0x00)
struct FTigerStatusEffect {
	bool bBlockInteraction; // 0x00(0x01)
	bool bInvulnerable; // 0x01(0x01)
	bool bInvisible; // 0x02(0x01)
	bool bHidden; // 0x03(0x01)
	bool bLogicHidden; // 0x04(0x01)
	bool bDisableSprint; // 0x05(0x01)
	bool bDisableClimb; // 0x06(0x01)
	bool bDisableDisciplines; // 0x07(0x01)
	bool bDisableRotation; // 0x08(0x01)
	bool bDisableHeightenedSenses; // 0x09(0x01)
	bool bBlockAILogic; // 0x0a(0x01)
};

// ScriptStruct Tiger.TigerResponse_GetPremiumCurrencyPacks
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetPremiumCurrencyPacks : FTigerResponseEnvelope {
	struct TArray<struct FTigerResponse_PremiumCurrencyPack> CurrencyPacks; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerResponse_PremiumCurrencyPack
// Size: 0x58 (Inherited: 0x18)
struct FTigerResponse_PremiumCurrencyPack : FTigerResponseEnvelope {
	int64_t ID; // 0x18(0x08)
	int32_t Amount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ImagePath; // 0x28(0x10)
	int16_t Bonus; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
	double Price; // 0x40(0x08)
	struct FString CurrencyType; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerRequest_PremiumCurrencyPack
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_PremiumCurrencyPack {
	struct FString CurrencyType; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerResponse_GetSupportedCurrencyCode
// Size: 0x28 (Inherited: 0x18)
struct FTigerResponse_GetSupportedCurrencyCode : FTigerResponseEnvelope {
	struct FString Type; // 0x18(0x10)
};

// ScriptStruct Tiger.TigerRequest_GetSupportedCurrencyCode
// Size: 0x10 (Inherited: 0x00)
struct FTigerRequest_GetSupportedCurrencyCode {
	struct FString UserId; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerTalentTableRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerTalentTableRow : FTableRowBase {
	struct UTigerTalentAsset* Talent; // 0x08(0x08)
	int32_t ManuallyInputUID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Tiger.TigerTelemetryResponse
// Size: 0x18 (Inherited: 0x00)
struct FTigerTelemetryResponse {
	struct FString Error; // 0x00(0x10)
	bool OK; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerTelemetryData
// Size: 0x80 (Inherited: 0x00)
struct FTigerTelemetryData {
	struct FString PlayerId; // 0x00(0x10)
	struct FString EventName; // 0x10(0x10)
	struct FString Universe; // 0x20(0x10)
	struct FString PlatformType; // 0x30(0x10)
	struct FString ApplicationVersion; // 0x40(0x10)
	struct FString EventTimestamp; // 0x50(0x10)
	struct FString SessionId; // 0x60(0x10)
	struct TArray<struct FTigerTelemetryKeyValuePair> Data; // 0x70(0x10)
};

// ScriptStruct Tiger.TigerTelemetryKeyValuePair
// Size: 0x20 (Inherited: 0x00)
struct FTigerTelemetryKeyValuePair {
	struct FString Key; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Tiger.TigerTelemetryDefinitionMaster
// Size: 0x50 (Inherited: 0x00)
struct FTigerTelemetryDefinitionMaster {
	struct TMap<struct FString, struct FTigerTelemetryDefinition> Definitions; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerTelemetryArchetypeAmounts
// Size: 0x50 (Inherited: 0x00)
struct FTigerTelemetryArchetypeAmounts {
	struct TMap<int32_t, int32_t> ArchetypeAmounts; // 0x00(0x50)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_AquiredInventoryItems
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventStore_AquiredInventoryItems : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString UnlockedItems; // 0x58(0x10)
	int32_t UnlockSource; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventAccount_Customization
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventAccount_Customization : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString CharacterCard; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventCharacter_Customization
// Size: 0xf8 (Inherited: 0x08)
struct FTigerTelemetryEventCharacter_Customization : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t ArchetypeId; // 0x58(0x04)
	int32_t CharacterId; // 0x5c(0x04)
	struct FString OutfitId; // 0x60(0x10)
	struct FString Accessories; // 0x70(0x10)
	struct FString Body; // 0x80(0x10)
	struct FString Hair; // 0x90(0x10)
	struct FString Eye; // 0xa0(0x10)
	struct FString MakeupID; // 0xb0(0x10)
	struct FString TattooId; // 0xc0(0x10)
	struct FString FacialHair; // 0xd0(0x10)
	struct FString EmotesID; // 0xe0(0x10)
	int32_t TotalTimeSpend; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventProgression_BattlepassLevelUp
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventProgression_BattlepassLevelUp : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString BattlepassExperienceSource; // 0x58(0x10)
	int32_t BattlepassLevelBefore; // 0x68(0x04)
	int32_t BattlepassLevelAfter; // 0x6c(0x04)
	int32_t BattlepassExperienceBefore; // 0x70(0x04)
	int32_t BattlepassExperienceAfter; // 0x74(0x04)
	int32_t ChangedBattlepassExperience; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_DeleteFriend
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventSocial_DeleteFriend : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString IDDeleted; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendRequestResponse
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventSocial_FriendRequestResponse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString IDRequestSentFrom; // 0x58(0x10)
	int32_t RequestResponse; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendRequest
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventSocial_FriendRequest : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString IDRequestRecipient; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendList
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventSocial_FriendList : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t SharkmobFriendNumber; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString SharkmobFriendIDList; // 0x60(0x10)
	struct FString PlatformFriendNumber; // 0x70(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventTutorial_Exit
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventTutorial_Exit : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t TutorialStartTime; // 0x58(0x04)
	int32_t TutorialEndTime; // 0x5c(0x04)
	int32_t TutorialFinished; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString ObjectiveDuration; // 0x68(0x10)
	struct FString ObjectiveLocation; // 0x78(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_Progress
// Size: 0x78 (Inherited: 0x08)
struct FTigerTelemetryEventChallenge_Progress : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString DailyChallengeProgress; // 0x58(0x10)
	struct FString WeeklyChallengeProgress; // 0x68(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_Completed
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventChallenge_Completed : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ChallengeID; // 0x58(0x10)
	int32_t ChallengeType; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_List
// Size: 0x78 (Inherited: 0x08)
struct FTigerTelemetryEventChallenge_List : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString DailyChallengeID; // 0x58(0x10)
	struct FString WeeklyChallengeID; // 0x68(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_CurrencySpend
// Size: 0x90 (Inherited: 0x08)
struct FTigerTelemetryEventStore_CurrencySpend : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString Country; // 0x58(0x10)
	struct FString StoreEntryID; // 0x68(0x10)
	int32_t Count; // 0x78(0x04)
	int32_t CurrencyType; // 0x7c(0x04)
	int32_t Price; // 0x80(0x04)
	int32_t DiscountedPrice; // 0x84(0x04)
	int32_t TotalDiscountedPrice; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_FlashStorePurchase
// Size: 0xb0 (Inherited: 0x08)
struct FTigerTelemetryEventStore_FlashStorePurchase : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString Country; // 0x58(0x10)
	struct FString StoreEntryID; // 0x68(0x10)
	struct FString StoreEntryName; // 0x78(0x10)
	int32_t CurrencyType; // 0x88(0x04)
	int32_t Price; // 0x8c(0x04)
	int32_t DiscountPrice; // 0x90(0x04)
	int32_t DiscountTotalPrice; // 0x94(0x04)
	int32_t DiscountTimeLeft; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString LocalizedStoreEntryName; // 0xa0(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_PremiumCurrencyIncrease
// Size: 0xe0 (Inherited: 0x08)
struct FTigerTelemetryEventStore_PremiumCurrencyIncrease : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ClientIP; // 0x58(0x10)
	struct FString Country; // 0x68(0x10)
	int32_t CurrencySource; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString PremiumCurrencyBefore; // 0x80(0x10)
	struct FString PremiumCurrencyAfter; // 0x90(0x10)
	int32_t IncreasedPremiumCurrency; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString CurrencyPackID; // 0xa8(0x10)
	int32_t OriginalCurrencyPackPrice; // 0xb8(0x04)
	int32_t DiscountedCurrencyPackPrice; // 0xbc(0x04)
	struct FString PlayerPayCurrency; // 0xc0(0x10)
	struct FString PurchasingPlatform; // 0xd0(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_FlashStoreRefresh
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventStore_FlashStoreRefresh : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ClientIP; // 0x58(0x10)
	struct FString Country; // 0x68(0x10)
	struct FString StoreEntryList; // 0x78(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_BattlepassPurchase
// Size: 0x88 (Inherited: 0x08)
struct FTigerTelemetryEventStore_BattlepassPurchase : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t BattlepassType; // 0x58(0x04)
	int32_t OriginalBattlepassPrice; // 0x5c(0x04)
	int32_t DiscountedBattlepassPrice; // 0x60(0x04)
	int32_t BattlepassLevelAtPurchase; // 0x64(0x04)
	int32_t BattlepassLevelAfterPurchase; // 0x68(0x04)
	int32_t AccountLevelAtPurchase; // 0x6c(0x04)
	struct FString Country; // 0x70(0x10)
	int32_t Season; // 0x80(0x04)
	int32_t SeasonDay; // 0x84(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_ItemExit
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventStore_ItemExit : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ItemId; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_ItemPreview
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventStore_ItemPreview : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	struct FString ItemId; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_Exit
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventStore_Exit : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventStore_Preview
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventStore_Preview : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString GameAppid; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ScourgeDashUse
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_ScourgeDashUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameAppid; // 0x10(0x10)
	struct FString Uin; // 0x20(0x10)
	struct FString BattleID; // 0x30(0x10)
	int32_t TotalDistanceScourgeDashed; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ScourgeDashStartLocation; // 0x48(0x10)
	struct FString ScourgeDashEndLocation; // 0x58(0x10)
	int32_t DidDamageTarget; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_KatanaReflectUse
// Size: 0x48 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_KatanaReflectUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t TotalTimeInKatanaReflectState; // 0x40(0x04)
	int32_t TotalDamageNullified; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_MeleeWeaponUse
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_MeleeWeaponUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
	int32_t DurationMeleeWeaponHeldFor; // 0x50(0x04)
	int32_t NumberOfTimesMeleeWeaponDrawn; // 0x54(0x04)
	int32_t NumberOfAttacksWithMeleeWeapon; // 0x58(0x04)
	int32_t NumberOfHitsWithMeleeWeapon; // 0x5c(0x04)
	int32_t TotalDamageDoneWithMeleeWeapon; // 0x60(0x04)
	int32_t TotalNumberOfDownsWithMeleeWeapon; // 0x64(0x04)
	int32_t TotalNumberOfKillsWithMeleeWeapon; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_RangedWeaponUse
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_RangedWeaponUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
	int32_t NumberOfRangedHits; // 0x50(0x04)
	int32_t NumberOfRangedShots; // 0x54(0x04)
	int32_t DamageDealtWithWeapon; // 0x58(0x04)
	int32_t EnemiesDownedWithWeapon; // 0x5c(0x04)
	int32_t NumberOfTimesOutOfAmmoWithWeapon; // 0x60(0x04)
	int32_t NumberHeadshotsWithWeapon; // 0x64(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerPings
// Size: 0x60 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerPings : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t PingType; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString PingTarget; // 0x48(0x10)
	int32_t AgreementsReceived; // 0x58(0x04)
	int32_t CauseOfPingRemoval; // 0x5c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRedGasStats
// Size: 0x48 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerRedGasStats : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t TotalTimeInRedGas; // 0x40(0x04)
	int32_t TotalTimeInRedGasWithStimulant; // 0x44(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndPlayerMasquerad
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_EndPlayerMasquerad : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t TotalTimeBloodHunted; // 0x40(0x04)
	int32_t TotalBloodHuntsByFeeding; // 0x44(0x04)
	int32_t TotalBloodHuntsByKilling; // 0x48(0x04)
	int32_t TotalNumberAreaMarkerConsequences; // 0x4c(0x04)
	int32_t TotalNumberMapMarkerConsequences; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerTraversal
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerTraversal : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t TotalMoveDistance; // 0x40(0x04)
	int32_t WalkingDistance; // 0x44(0x04)
	int32_t DisciplineTravelDistance; // 0x48(0x04)
	int32_t CrouchingTime; // 0x4c(0x04)
	int32_t ClimbingTime; // 0x50(0x04)
	int32_t TimeInside; // 0x54(0x04)
	int32_t WallHangTime; // 0x58(0x04)
	int32_t WallGrindTime; // 0x5c(0x04)
	int32_t SlideTime; // 0x60(0x04)
	int32_t AirTime; // 0x64(0x04)
	int32_t NotMovingTime; // 0x68(0x04)
	int32_t TotalJumps; // 0x6c(0x04)
	int32_t TotalWallJumps; // 0x70(0x04)
	int32_t TotalSlideJumps; // 0x74(0x04)
	int32_t TotalLedgeGrabs; // 0x78(0x04)
	int32_t TotalLowVaults; // 0x7c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerMetaChange
// Size: 0x50 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerMetaChange : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t SeasonExperienceGained; // 0x40(0x04)
	int32_t SeasonLevelBeforeChange; // 0x44(0x04)
	int32_t SeasonLevelAfterChange; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndPlayerResults
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_EndPlayerResults : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t PlayerQuitBeforeEnd; // 0x40(0x04)
	int32_t KillCount; // 0x44(0x04)
	int32_t AssistCount; // 0x48(0x04)
	int32_t TotalSurvivalTime; // 0x4c(0x04)
	int32_t NumberOfAlliedRevives; // 0x50(0x04)
	int32_t TotalAmountOfHealing; // 0x54(0x04)
	int32_t TotalNumberOfHealingEvents; // 0x58(0x04)
	int32_t TotalFeedingAbortsByDamage; // 0x5c(0x04)
	int32_t TotalFeedingAbortsByPlayer; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRankChanges
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerRankChanges : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t PlayerResult; // 0x40(0x04)
	int32_t TeamRank; // 0x44(0x04)
	int32_t ChangedKillRatingValue; // 0x48(0x04)
	int32_t KillRatingValueAfterChanged; // 0x4c(0x04)
	int32_t ChangedWinRatingValue; // 0x50(0x04)
	int32_t WinRatingValueAfterChanged; // 0x54(0x04)
	struct FString PreviousRankedBracket; // 0x58(0x10)
	struct FString NewRankedBracket; // 0x68(0x10)
	int32_t TotalPoint; // 0x78(0x04)
	int32_t RatingLevel; // 0x7c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndGameEvent
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_EndGameEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	struct FString WinningPlayerID; // 0x30(0x10)
	int32_t SeasonId; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString ClanID; // 0x48(0x10)
	struct FString ArchetypeId; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_DamageEvents
// Size: 0xa0 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_DamageEvents : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	struct FString UinSource; // 0x20(0x10)
	struct FString UinTarget; // 0x30(0x10)
	struct FString GameAppid; // 0x40(0x10)
	struct FString DamageCauseID; // 0x50(0x10)
	int32_t DamageDone; // 0x60(0x04)
	int32_t KilledTarget; // 0x64(0x04)
	int32_t KnockedDownTarget; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString TargetDamageLocation; // 0x70(0x10)
	struct FString SourceDamageLocation; // 0x80(0x10)
	int32_t TargetWasBloodHunted; // 0x90(0x04)
	int32_t DamageEventWasHeadshot; // 0x94(0x04)
	int8_t DamageTypeID; // 0x98(0x01)
	int8_t SourceType; // 0x99(0x01)
	int8_t TargetType; // 0x9a(0x01)
	char pad_9B[0x5]; // 0x9b(0x05)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemConsumption
// Size: 0x50 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_ItemConsumption : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_DisciplineUse
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_DisciplineUse : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString DisciplinesUseLocation; // 0x40(0x10)
	int8_t DisciplineID; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemDrop
// Size: 0x68 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_ItemDrop : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
	int32_t ItemDropQuantity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString DropLocation; // 0x58(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemPickups
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_ItemPickups : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	struct FString ItemId; // 0x40(0x10)
	int32_t ItemPickUpQuantity; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString PickUpLocation; // 0x58(0x10)
	int32_t ItemSourceID; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerStart
// Size: 0x98 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_PlayerStart : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Uin; // 0x10(0x10)
	struct FString BattleID; // 0x20(0x10)
	struct FString GameAppid; // 0x30(0x10)
	int32_t PlatID; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString LeaderID; // 0x48(0x10)
	struct FString ClientVersion; // 0x58(0x10)
	int32_t SquadNum; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString SquadMembers; // 0x70(0x10)
	struct FString SpawnLocation; // 0x80(0x10)
	int32_t MatchMakingID; // 0x90(0x04)
	int8_t ClanID; // 0x94(0x01)
	int8_t ArchetypeId; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_MatchData
// Size: 0xa0 (Inherited: 0x08)
struct FTigerTelemetryEventMatchSession_MatchData : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ClientVersion; // 0x28(0x10)
	struct FString BattleID; // 0x38(0x10)
	struct FString GameAppid; // 0x48(0x10)
	int32_t TeamSize; // 0x58(0x04)
	int32_t NumPlayers; // 0x5c(0x04)
	int32_t NumBots; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString ItemTypeAmounts; // 0x68(0x10)
	struct FString PlayerArchetypesAmounts; // 0x78(0x10)
	struct FString SafeZoneLocations; // 0x88(0x10)
	int32_t NumberofTeams; // 0x98(0x04)
	int8_t GameplayMode; // 0x9c(0x01)
	int8_t RankMode; // 0x9d(0x01)
	int8_t MapID; // 0x9e(0x01)
	char pad_9F[0x1]; // 0x9f(0x01)
};

// ScriptStruct Tiger.TigerTelemetryEventServerDelay
// Size: 0x90 (Inherited: 0x08)
struct FTigerTelemetryEventServerDelay : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ClientVersion; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString BattleID; // 0x48(0x10)
	int32_t PlatID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString GameAppid; // 0x60(0x10)
	int32_t NetworkType; // 0x70(0x04)
	int32_t UploadSeq; // 0x74(0x04)
	int32_t AvgDelay; // 0x78(0x04)
	int32_t MaxDelay; // 0x7c(0x04)
	int32_t MinDelay; // 0x80(0x04)
	int32_t OutPacketLossPercent; // 0x84(0x04)
	int32_t InPacketLossPercent; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventServerLog
// Size: 0x58 (Inherited: 0x08)
struct FTigerTelemetryEventServerLog : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Country; // 0x10(0x10)
	struct FString GameSvrId; // 0x20(0x10)
	int32_t AreaId; // 0x30(0x04)
	int32_t OnlineCountPC; // 0x34(0x04)
	int32_t OnlineCountPS; // 0x38(0x04)
	int32_t OnlineCountXbox; // 0x3c(0x04)
	int32_t UserCount; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString GameAppid; // 0x48(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_Cancelled
// Size: 0x38 (Inherited: 0x08)
struct FTigerTelemetryEventMatchMaking_Cancelled : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MatchMakingID; // 0x0c(0x04)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	int8_t CancelReason; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_Succeeded
// Size: 0x30 (Inherited: 0x08)
struct FTigerTelemetryEventMatchMaking_Succeeded : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t MatchMakingID; // 0x0c(0x04)
	struct FString Uin; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_BattleInfo
// Size: 0x80 (Inherited: 0x08)
struct FTigerTelemetryEventMatchMaking_BattleInfo : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	int32_t PlatID; // 0x24(0x04)
	struct FString LeaderID; // 0x28(0x10)
	struct FString Uin; // 0x38(0x10)
	struct FString ClientVersion; // 0x48(0x10)
	int32_t TeamSize; // 0x58(0x04)
	int32_t NumPremadeMembers; // 0x5c(0x04)
	int32_t MatchMakingID; // 0x60(0x04)
	int32_t PlayerELO; // 0x64(0x04)
	struct FString GameAppid; // 0x68(0x10)
	int8_t ClanID; // 0x78(0x01)
	int8_t ArchetypeId; // 0x79(0x01)
	int8_t GameplayMode; // 0x7a(0x01)
	int8_t RankMode; // 0x7b(0x01)
	int8_t MapID; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerLogout
// Size: 0xb8 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerLogout : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	struct FString GameAppid; // 0x20(0x10)
	int32_t AreaId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString Uin; // 0x38(0x10)
	int32_t Level; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ClientIP; // 0x50(0x10)
	int32_t OnlineTime; // 0x60(0x04)
	int32_t PlayTime; // 0x64(0x04)
	int32_t LoginWay; // 0x68(0x04)
	int32_t PlatID; // 0x6c(0x04)
	int32_t SMFriendsNum; // 0x70(0x04)
	int32_t PlatformFriendsNum; // 0x74(0x04)
	struct FString ClientVersion; // 0x78(0x10)
	struct FString ClientLanguage; // 0x88(0x10)
	struct FString Country; // 0x98(0x10)
	struct FString OperatingSys; // 0xa8(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerLogin
// Size: 0x110 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerLogin : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameAppid; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Uin; // 0x28(0x10)
	int32_t Level; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString ClientIP; // 0x40(0x10)
	int32_t LoginWay; // 0x50(0x04)
	int32_t PlatID; // 0x54(0x04)
	int32_t SMFriendsNum; // 0x58(0x04)
	int32_t PlatformFriendsNum; // 0x5c(0x04)
	struct FString ClientVersion; // 0x60(0x10)
	int16_t ScreenWidth; // 0x70(0x02)
	int16_t ScreenHeight; // 0x72(0x02)
	char pad_74[0x4]; // 0x74(0x04)
	struct FString CpuHardware; // 0x78(0x10)
	struct FString ClientIPV6; // 0x88(0x10)
	int32_t DeviceType; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString OperatingSys; // 0xa0(0x10)
	struct FString DeviceModel; // 0xb0(0x10)
	int32_t SysRAM; // 0xc0(0x04)
	int32_t VRAM; // 0xc4(0x04)
	struct FString VideoCard; // 0xc8(0x10)
	struct FString Microphone; // 0xd8(0x10)
	int32_t AvlHardDiskSpace; // 0xe8(0x04)
	int32_t AllHardDiskSpace; // 0xec(0x04)
	struct FString ClientLanguage; // 0xf0(0x10)
	struct FString Country; // 0x100(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerRegister
// Size: 0x70 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerRegister : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameAppid; // 0x10(0x10)
	int32_t AreaId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Uin; // 0x28(0x10)
	struct FString ClientIP; // 0x38(0x10)
	int32_t RegWay; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ClientVersion; // 0x50(0x10)
	struct FString Country; // 0x60(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventGameServerState
// Size: 0x48 (Inherited: 0x08)
struct FTigerTelemetryEventGameServerState : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString GameSvrId; // 0x10(0x10)
	int64_t AreaId; // 0x20(0x08)
	struct FString ServerIP; // 0x28(0x10)
	struct FString GameAppid; // 0x38(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDamageProcessEvent
// Size: 0x150 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerDamageProcessEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int32_t Index; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString attacker_player_position; // 0xb8(0x10)
	int64_t attacker_weapon_id; // 0xc8(0x08)
	uint32_t attacker_weapon_type; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FString attacker_player_direction; // 0xd8(0x10)
	uint32_t attacker_blood_left; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString victim_Uin; // 0xf0(0x10)
	uint16_t victim_account_type_; // 0x100(0x02)
	char pad_102[0x6]; // 0x102(0x06)
	struct FString victim_player_position; // 0x108(0x10)
	struct FString visible_body_part; // 0x118(0x10)
	uint32_t victim_blood_left; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	int64_t hit_part; // 0x130(0x08)
	int64_t DamageCauseID; // 0x138(0x08)
	int32_t DamageTypeID; // 0x140(0x04)
	int32_t DamageDone; // 0x144(0x04)
	char death_type; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerChangeWeaponEvent
// Size: 0xc0 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerChangeWeaponEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int64_t ori_weapon; // 0xb0(0x08)
	int64_t dst_weapon; // 0xb8(0x08)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerRebornEvent
// Size: 0xb8 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerRebornEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	char rebirth_type; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerReportCrimeEvent
// Size: 0xb0 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerReportCrimeEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x6]; // 0x72(0x06)
	struct FString reported_Uin; // 0x78(0x10)
	uint16_t reported_account_type_; // 0x88(0x02)
	char pad_8A[0x6]; // 0x8a(0x06)
	struct FString report_type; // 0x90(0x10)
	struct FString report_reason; // 0xa0(0x10)
};

// ScriptStruct Tiger.TigerTelemetryEventAceBulletShotEvent
// Size: 0x118 (Inherited: 0x08)
struct FTigerTelemetryEventAceBulletShotEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int64_t shot_id; // 0xb0(0x08)
	int64_t weapon_id; // 0xb8(0x08)
	uint32_t weapon_type; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString player_position; // 0xc8(0x10)
	struct FString attacker_player_direction; // 0xd8(0x10)
	char bullets_cost; // 0xe8(0x01)
	char pad_E9[0x1]; // 0xe9(0x01)
	uint16_t bullets_left; // 0xea(0x02)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FString victim_player_position; // 0xf0(0x10)
	struct FString shot_dst_position; // 0x100(0x10)
	char hit_part; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDieEvent
// Size: 0x118 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerDieEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	struct FString victim_player_position; // 0xb0(0x10)
	int64_t victim_weapon_id; // 0xc0(0x08)
	uint32_t victim_weapon_type; // 0xc8(0x04)
	uint32_t victim_blood_left; // 0xcc(0x04)
	struct FString attacker_Uin; // 0xd0(0x10)
	uint16_t attacker_account_type_; // 0xe0(0x02)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct FString attacker_player_position; // 0xe8(0x10)
	int64_t attacker_weapon_id; // 0xf8(0x08)
	uint32_t attacker_weapon_type; // 0x100(0x04)
	uint32_t attacker_blood_left; // 0x104(0x04)
	char hit_part; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	int64_t die_reason; // 0x110(0x08)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerGameSummaryEvent2
// Size: 0xc8 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerGameSummaryEvent2 : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int32_t Duration; // 0xb0(0x04)
	uint16_t rank; // 0xb4(0x02)
	uint16_t NumberOfRangedShots; // 0xb6(0x02)
	uint16_t NumberOfRangedHits; // 0xb8(0x02)
	char pad_BA[0x2]; // 0xba(0x02)
	int32_t KillCount; // 0xbc(0x04)
	uint16_t death_num; // 0xc0(0x02)
	char pad_C2[0x2]; // 0xc2(0x02)
	int32_t AssistCount; // 0xc4(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerGameSummaryEvent
// Size: 0xd8 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerGameSummaryEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int8_t Result; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32_t Duration; // 0xb4(0x04)
	uint16_t rank; // 0xb8(0x02)
	char pad_BA[0x2]; // 0xba(0x02)
	int32_t KillCount; // 0xbc(0x04)
	uint16_t death_num; // 0xc0(0x02)
	char pad_C2[0x2]; // 0xc2(0x02)
	int32_t AssistCount; // 0xc4(0x04)
	uint32_t Score; // 0xc8(0x04)
	int32_t Bonus; // 0xcc(0x04)
	int32_t Experience; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDisconnectEvent
// Size: 0xa0 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerDisconnectEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	char disconnect_flag; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerConnectEvent
// Size: 0xd0 (Inherited: 0x08)
struct FTigerTelemetryEventAcePlayerConnectEvent : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString BattleID; // 0x10(0x10)
	int32_t MapID; // 0x20(0x04)
	int32_t GameplayMode; // 0x24(0x04)
	int32_t RankMode; // 0x28(0x04)
	uint32_t game_id_; // 0x2c(0x04)
	int32_t PlatID; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GameSvrId; // 0x38(0x10)
	int32_t AreaId; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	int64_t ZoneId; // 0x50(0x08)
	uint32_t channel_id; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString Uin; // 0x60(0x10)
	uint16_t account_type_; // 0x70(0x02)
	char pad_72[0x2]; // 0x72(0x02)
	int32_t NumPlayers; // 0x74(0x04)
	int64_t role_id_; // 0x78(0x08)
	char rolename_len; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FString rolename; // 0x88(0x10)
	int32_t Level; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString team_id; // 0xa0(0x10)
	int8_t Gender; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	int64_t Experience; // 0xb8(0x08)
	int64_t money; // 0xc0(0x08)
	char connect_flag; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerRevived
// Size: 0x38 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerRevived : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Location; // 0x10(0x10)
	struct FString PlayerId; // 0x20(0x10)
	int32_t was_helped; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Tiger.TigerTelemetryEventPlayerDied
// Size: 0x40 (Inherited: 0x08)
struct FTigerTelemetryEventPlayerDied : FSharkTelemetryEventBase {
	struct FSharkTelemetryDateTime dtEventTime; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString player_location; // 0x10(0x10)
	struct FString damage_causer; // 0x20(0x10)
	struct FString damage_reason; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerTelemetryIDExportArray
// Size: 0x01 (Inherited: 0x00)
struct FTigerTelemetryIDExportArray {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerTelemetryIDExportData
// Size: 0x01 (Inherited: 0x00)
struct FTigerTelemetryIDExportData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Tiger.TigerThrallMissionTableRow
// Size: 0x10 (Inherited: 0x08)
struct FTigerThrallMissionTableRow : FTableRowBase {
	struct UTigerThrallMission* Mission; // 0x08(0x08)
};

// ScriptStruct Tiger.TigerThrallMissionMapMarker
// Size: 0x18 (Inherited: 0x00)
struct FTigerThrallMissionMapMarker {
	struct FVector2D Position; // 0x00(0x08)
	struct UTexture2D* Icon; // 0x08(0x08)
	struct FVector2D Size; // 0x10(0x08)
};

// ScriptStruct Tiger.ThrallMissionRequirements
// Size: 0x18 (Inherited: 0x00)
struct FThrallMissionRequirements {
	int32_t MinRequiredThalls; // 0x00(0x04)
	int32_t MaxRequiredThralls; // 0x04(0x04)
	struct FTigerThrallStats TotalRequiredStats; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerThrallMissionReward
// Size: 0x18 (Inherited: 0x00)
struct FTigerThrallMissionReward {
	int32_t XpReward; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTigerThrallMissionRewardItem> Rewards; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerThrallMissionRewardItem
// Size: 0x30 (Inherited: 0x00)
struct FTigerThrallMissionRewardItem {
	SoftClassProperty ItemClassPath; // 0x00(0x28)
	int32_t Count; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Tiger.TigerThrallMissionObjective
// Size: 0x38 (Inherited: 0x00)
struct FTigerThrallMissionObjective {
	enum class ETigerMissionType MissionType; // 0x00(0x04)
	enum class ETigerMissionObjectiveType ObjectiveType; // 0x04(0x04)
	struct FName ObjectiveName; // 0x08(0x08)
	struct FString ObjectiveDescription; // 0x10(0x10)
	struct TArray<enum class ETigerThrallStatId> SuccessStatIds; // 0x20(0x10)
	int32_t PercentReductionIfDiscovered; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Tiger.TigerThrallAbilityTableRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerThrallAbilityTableRow : FTableRowBase {
	enum class ETigerThrallAbilityId AbilityId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture2D* AbilityIcon; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerThrallStatModifiersTableRow
// Size: 0x38 (Inherited: 0x08)
struct FTigerThrallStatModifiersTableRow : FTableRowBase {
	struct FText Name; // 0x08(0x18)
	int32_t StartingTurnsAffecting; // 0x20(0x04)
	int32_t InjuryLevel; // 0x24(0x04)
	struct FTigerThrallStats StatModifier; // 0x28(0x10)
};

// ScriptStruct Tiger.TigerBaseThrallTableRow
// Size: 0x18 (Inherited: 0x08)
struct FTigerBaseThrallTableRow : FTableRowBase {
	enum class ETigerThrallId ThrallId; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTigerBaseThrallData* BaseThrall; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerThrallUpgradeScreenInformation
// Size: 0x10 (Inherited: 0x00)
struct FTigerThrallUpgradeScreenInformation {
	struct TArray<int32_t> ThrallStatsArray; // 0x00(0x10)
};

// ScriptStruct Tiger.TigerThrallDetailsScreenInformation
// Size: 0x60 (Inherited: 0x00)
struct FTigerThrallDetailsScreenInformation {
	struct FText ThrallInjuries; // 0x00(0x18)
	struct FText ThrallDescription; // 0x18(0x18)
	struct FText ThrallHintText; // 0x30(0x18)
	struct UTexture2D* ThrallKeepsakePortrait; // 0x48(0x08)
	struct TArray<int32_t> ThrallStatsArray; // 0x50(0x10)
};

// ScriptStruct Tiger.TigerThrallCharacterCardInformation
// Size: 0x40 (Inherited: 0x00)
struct FTigerThrallCharacterCardInformation {
	struct FText ThrallName; // 0x00(0x18)
	struct UTexture2D* ThrallPortrait; // 0x18(0x08)
	int32_t ThrallExp; // 0x20(0x04)
	float ThrallExpNormalised; // 0x24(0x04)
	float ThrallHealthNormalised; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FTigerThrallAbility> ThrallAbilities; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerThrallAbility
// Size: 0x28 (Inherited: 0x00)
struct FTigerThrallAbility {
	struct FText AbilityName; // 0x00(0x18)
	struct UTexture2D* AbilityIcon; // 0x18(0x08)
	enum class ETigerThrallAbilityId AbilityId; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Tiger.TigerWallJumpBlendBundle
// Size: 0x10 (Inherited: 0x00)
struct FTigerWallJumpBlendBundle {
	float InputBlendScale; // 0x00(0x04)
	float NormalBlendScale; // 0x04(0x04)
	float VelocityDirectionBlendScale; // 0x08(0x04)
	float VelocityForceScale; // 0x0c(0x04)
};

// ScriptStruct Tiger.TigerNewNotificationSaveLoadStruct
// Size: 0x18 (Inherited: 0x00)
struct FTigerNewNotificationSaveLoadStruct {
	struct TArray<struct FTigerNewNotificationNodeEntry> SaveLoadEntries; // 0x00(0x10)
	int64_t LatestLoginDaysFromEpoch; // 0x10(0x08)
};

// ScriptStruct Tiger.TigerNewNotificationNodeEntry
// Size: 0x18 (Inherited: 0x00)
struct FTigerNewNotificationNodeEntry {
	char EnumMenuOption; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> Ids; // 0x08(0x10)
};

// ScriptStruct Tiger.TigerCustomizableAxisKeybindData
// Size: 0x38 (Inherited: 0x00)
struct FTigerCustomizableAxisKeybindData {
	struct FText DISPLAYNAME; // 0x00(0x18)
	struct FText OptionalReverseDisplayName; // 0x18(0x18)
	bool DebugOnly; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Tiger.TigerCustomizableKeybindData
// Size: 0x20 (Inherited: 0x00)
struct FTigerCustomizableKeybindData {
	struct FText DISPLAYNAME; // 0x00(0x18)
	bool DebugOnly; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Tiger.TigerInputPresetData
// Size: 0x18 (Inherited: 0x00)
struct FTigerInputPresetData {
	struct FString ConfigFileName; // 0x00(0x10)
	bool bUseAutoSprint; // 0x10(0x01)
	bool bHoldForHeightenedSenses; // 0x11(0x01)
	bool bHoldForInventory; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Tiger.TigerInputBindings
// Size: 0x40 (Inherited: 0x00)
struct FTigerInputBindings {
	struct TArray<struct FInputActionKeyMapping> KeyboardMouseMappings; // 0x00(0x10)
	struct TArray<struct FInputAxisKeyMapping> KeyboardMouseAxisMappings; // 0x10(0x10)
	struct TArray<struct FInputActionKeyMapping> GamepadMappings; // 0x20(0x10)
	struct TArray<struct FInputAxisKeyMapping> GamepadAxisMappings; // 0x30(0x10)
};

// ScriptStruct Tiger.TigerInputSettings
// Size: 0x3c (Inherited: 0x00)
struct FTigerInputSettings {
	struct FTigerControllerSettings KeyboardMouseSettings; // 0x00(0x1c)
	struct FTigerControllerSettings GamepadSettings; // 0x1c(0x1c)
	bool bUseAutoSprint; // 0x38(0x01)
	bool bHoldForHeightenedSenses; // 0x39(0x01)
	bool bHoldForInventory; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
};

// ScriptStruct Tiger.TigerControllerSettings
// Size: 0x1c (Inherited: 0x00)
struct FTigerControllerSettings {
	int32_t WeaponCyclePreset; // 0x00(0x04)
	struct FTigerSensitivitySetting SensitivitySettings; // 0x04(0x14)
	bool bInvertedYAxis; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Tiger.TigerSensitivitySetting
// Size: 0x14 (Inherited: 0x00)
struct FTigerSensitivitySetting {
	float MasterSensitivity; // 0x00(0x04)
	float HorizontalSensitivity; // 0x04(0x04)
	float VerticalSensitivity; // 0x08(0x04)
	float AimingSensitivity; // 0x0c(0x04)
	float ScopedSensitivity; // 0x10(0x04)
};

// ScriptStruct Tiger.TigerVendorStoreCategoryItem
// Size: 0x98 (Inherited: 0x00)
struct FTigerVendorStoreCategoryItem {
	struct FTigerMetaStoreEntry StoreEntry; // 0x00(0x50)
	SoftClassProperty ItemClassPath; // 0x50(0x28)
	struct UTigerInventoryItemBase* BaseItem; // 0x78(0x08)
	int32_t Cost; // 0x80(0x04)
	int32_t InventoryCount; // 0x84(0x04)
	struct FTigerItemId SoftCurrencyId; // 0x88(0x08)
	int32_t StorePriority; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Tiger.TigerVoEvent
// Size: 0x18 (Inherited: 0x00)
struct FTigerVoEvent {
	struct FName Category; // 0x00(0x08)
	struct AActor* EventActor; // 0x08(0x08)
	bool bPlayFacialAnimFromCategory; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Tiger.TigerVoCategoryData
// Size: 0x0c (Inherited: 0x00)
struct FTigerVoCategoryData {
	char Prio; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TriggerChance; // 0x04(0x04)
	float Cooldown; // 0x08(0x04)
};

// ScriptStruct Tiger.TigerWaveDataRow
// Size: 0x20 (Inherited: 0x08)
struct FTigerWaveDataRow : FTableRowBase {
	float WaitTime; // 0x08(0x04)
	float ClosingTime; // 0x0c(0x04)
	float DamageTickInterval; // 0x10(0x04)
	float DamagePerTick; // 0x14(0x04)
	float CoveragePercentage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Tiger.TigerHolyIncenseBorderLine
// Size: 0x1c (Inherited: 0x00)
struct FTigerHolyIncenseBorderLine {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct Tiger.TigerWeaponScalingCrosshairSlot
// Size: 0x90 (Inherited: 0x00)
struct FTigerWeaponScalingCrosshairSlot {
	struct FSlateBrush Brush; // 0x00(0x88)
	float RenderAngle; // 0x88(0x04)
	float AdditionalSize; // 0x8c(0x04)
};

// ScriptStruct Tiger.TigerWeaponCrosshairSlot
// Size: 0xb8 (Inherited: 0x00)
struct FTigerWeaponCrosshairSlot {
	struct FVector2D Direction; // 0x00(0x08)
	struct FVector2D Offset; // 0x08(0x08)
	struct FVector2D Alignment; // 0x10(0x08)
	struct FSlateBrush Brush; // 0x18(0x88)
	struct FLinearColor Color; // 0xa0(0x10)
	float RenderAngle; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct Tiger.TigerRangedWeaponData
// Size: 0xc0 (Inherited: 0x08)
struct FTigerRangedWeaponData : FTableRowBase {
	int32_t MaxAmmoInClips[0x4]; // 0x08(0x10)
	int32_t AmmoOnPickup; // 0x18(0x04)
	bool bCanHeadshot; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float BodyPartDamageModifiers[0x6]; // 0x20(0x18)
	float NPCBulletDamage; // 0x38(0x04)
	float OverrideReloadTime; // 0x3c(0x04)
	float ReloadSpeedMultiplier; // 0x40(0x04)
	float ActivationTime; // 0x44(0x04)
	bool bEnableFireModeSwitchByDefault; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FTigerFireSettings> FireSettings; // 0x50(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> BarrelMods; // 0x60(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> AmmoMods; // 0x70(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> ScopeMods; // 0x80(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> StockMods; // 0x90(0x10)
	struct TArray<struct UTigerRangedModItemAsset*> SpecialMods; // 0xa0(0x10)
	struct UTigerBuff* InAirMomentumDrainBuff; // 0xb0(0x08)
	float InAirMomentumDrainBuffSpeedMultiplier; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct Tiger.GatheredTigerCompositionCell
// Size: 0x28 (Inherited: 0x00)
struct FGatheredTigerCompositionCell {
	char pad_0[0x28]; // 0x00(0x28)
};

