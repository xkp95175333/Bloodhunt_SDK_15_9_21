// BlueprintGeneratedClass TBP_PingControllerComponent.TBP_PingControllerComponent_C
// Size: 0x210 (Inherited: 0x210)
struct UTBP_PingControllerComponent_C : UTigerPingControllerComponent {

	void AddHealthStatusToWheel(struct ATigerPlayerState* inTigerPlayerState, struct TArray<struct FTigerPingWorldNetData> OutPingWheelItems); // Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddHealthStatusToWheel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddMasqueradeStatusToWheel(struct UTigerPlayerMasqueradeComponent* InMasqueradeComponent, struct TArray<struct FTigerPingWorldNetData> OutPingWheelItems); // Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddMasqueradeStatusToWheel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddAmmoRequestToWheel(struct TArray<struct FTigerPingWorldNetData> OutPingWheelItems); // Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddAmmoRequestToWheel // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddPointsOfInterest(struct TArray<struct FTigerPingWorldNetData> OutWheelItemPings); // Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddPointsOfInterest // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetDefaultLocation(struct ATigerPlayerState* InPlayerState, struct TArray<struct FHitResult> InHitResults, struct TArray<struct FTigerPingWorldNetData> OutPingWheelItems, struct FVector OutLocation, bool bOutFoundLocation); // Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetDefaultLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetAddPingTypes(struct TArray<struct UTigerPingBase*> InPingTypes, struct FVector InLocation, struct TArray<struct FTigerPingWorldNetData> InOutResults); // Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetAddPingTypes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetPingWheelItems(struct ATigerPlayerState* InPlayerState, struct TArray<struct FHitResult> InHitResults, struct TArray<struct FTigerPingWorldNetData> OutPingWheelItems); // Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetPingWheelItems // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

