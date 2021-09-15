// WidgetBlueprintGeneratedClass TBP_UI_DamageBase.TBP_UI_DamageBase_C
// Size: 0x291 (Inherited: 0x280)
struct UTBP_UI_DamageBase_C : UTigerWidget {
	struct FVector EnemyLocation; // 0x280(0x0c)
	float CanHandleAngle; // 0x28c(0x04)
	bool bIsVisible; // 0x290(0x01)

	void HasExtraHealth(struct ATigerPlayer* Player, bool HasExtraHealth); // Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.HasExtraHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetWidgetColor(struct ATBP_Player_C* Player, struct FLinearColor Color); // Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.GetWidgetColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void CanHandleDirection(struct FVector DamageLocation, bool IsHandled); // Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.CanHandleDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDamage(struct FVector DamageLocation, float DamageAmount, float NewHealthAmount, bool IsHandled); // Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.OnDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsAlive(bool IsAlive); // Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.IsAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
};

