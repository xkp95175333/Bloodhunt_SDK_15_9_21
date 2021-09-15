// WidgetBlueprintGeneratedClass TBP_GroupUIWidget.TBP_GroupUIWidget_C
// Size: 0x2b0 (Inherited: 0x280)
struct UTBP_GroupUIWidget_C : UTigerGroupUIWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UVerticalBox* GroupMembersBox; // 0x288(0x08)
	struct UCanvasPanel* ScreenPanel; // 0x290(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x298(0x08)
	struct TArray<struct UTigerInWorldWidget*> GroupMemberWidgets; // 0x2a0(0x10)

	void ClearOutOfSightWidgets(); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearOutOfSightWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UTBP_GroupMemberStatusWidget_C* CreateMemberWidget(struct APlayerController* OwningPlayer, bool bIsReadyForMatchmaking); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.CreateMemberWidget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddGroupMemberStatusWidget(struct APlayerController* InOwningPlayer, struct ATigerPlayerState* InGroupMemberState, bool bInIsReadyForMatchmaking); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberStatusWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddOutOfSightWidget(struct APlayerController* InOwningPlayer, struct ATigerPlayerState* InGroupMember); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddOutOfSightWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ClearGroupMembers(); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearGroupMembers // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void AddGroupMemberToCanvas(struct ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberToCanvas // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGroupMemberReadyStatusChanged(struct ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.OnGroupMemberReadyStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_GroupUIWidget(int32_t EntryPoint); // Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ExecuteUbergraph_TBP_GroupUIWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

