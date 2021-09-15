// Class CinematicCamera.CameraRig_Crane
// Size: 0x258 (Inherited: 0x228)
struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x228(0x04)
	float CraneYaw; // 0x22c(0x04)
	float CraneArmLength; // 0x230(0x04)
	bool bLockMountPitch; // 0x234(0x01)
	bool bLockMountYaw; // 0x235(0x01)
	char pad_236[0x2]; // 0x236(0x02)
	struct USceneComponent* TransformComponent; // 0x238(0x08)
	struct USceneComponent* CraneYawControl; // 0x240(0x08)
	struct USceneComponent* CranePitchControl; // 0x248(0x08)
	struct USceneComponent* CraneCameraMount; // 0x250(0x08)
};

// Class CinematicCamera.CameraRig_Rail
// Size: 0x248 (Inherited: 0x228)
struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x228(0x04)
	bool bLockOrientationToRail; // 0x22c(0x01)
	char pad_22D[0x3]; // 0x22d(0x03)
	struct USceneComponent* TransformComponent; // 0x230(0x08)
	struct USplineComponent* RailSplineComponent; // 0x238(0x08)
	struct USceneComponent* RailCameraMount; // 0x240(0x08)

	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x279f5e0
};

// Class CinematicCamera.CineCameraActor
// Size: 0x810 (Inherited: 0x7b0)
struct ACineCameraActor : ACameraActor {
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7b0(0x50)
	char pad_800[0x10]; // 0x800(0x10)

	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x279f210
};

// Class CinematicCamera.CineCameraComponent
// Size: 0x8c0 (Inherited: 0x7c0)
struct UCineCameraComponent : UCameraComponent {
	struct FCameraFilmbackSettings FilmbackSettings; // 0x7c0(0x0c)
	struct FCameraFilmbackSettings Filmback; // 0x7cc(0x0c)
	struct FCameraLensSettings LensSettings; // 0x7d8(0x18)
	struct FCameraFocusSettings FocusSettings; // 0x7f0(0x58)
	float CurrentFocalLength; // 0x848(0x04)
	float CurrentAperture; // 0x84c(0x04)
	float CurrentFocusDistance; // 0x850(0x04)
	char pad_854[0xc]; // 0x854(0x0c)
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets; // 0x860(0x10)
	struct TArray<struct FNamedLensPreset> LensPresets; // 0x870(0x10)
	struct FString DefaultFilmbackPresetName; // 0x880(0x10)
	struct FString DefaultFilmbackPreset; // 0x890(0x10)
	struct FString DefaultLensPresetName; // 0x8a0(0x10)
	float DefaultLensFocalLength; // 0x8b0(0x04)
	float DefaultLensFStop; // 0x8b4(0x04)
	char pad_8B8[0x8]; // 0x8b8(0x08)

	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x279f750
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName // (Final|Native|Public|BlueprintCallable) // @ game+0x279f6b0
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength // (Final|Native|Public|BlueprintCallable) // @ game+0x279f630
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x279f600
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x279f500
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x279f480
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x279f450
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x279f370
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x279f2f0
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x279f230
};

