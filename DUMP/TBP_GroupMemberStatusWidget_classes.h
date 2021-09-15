// WidgetBlueprintGeneratedClass TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C
// Size: 0x2b0 (Inherited: 0x280)
struct UTBP_GroupMemberStatusWidget_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTBP_UI_SharedPlayerStatus_C* TBP_UI_SharedStatusPanel; // 0x288(0x08)
	struct UTexture2D* BloodLevelSymbol; // 0x290(0x08)
	bool bIsReadyForMatchmaking; // 0x298(0x01)
	char pad_299[0x7]; // 0x299(0x07)
	struct ATigerPlayerState* GroupMemberState; // 0x2a0(0x08)
	struct ATigerPlayer* GroupMember; // 0x2a8(0x08)

	void SetPlayerColor(char InPlayerIndex); // Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetPlayerColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPawnChanged(struct APawn* New Pawn); // Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.OnPawnChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateElysiumVisibility(); // Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateElysiumVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetMember(struct ATigerPlayerState* InGroupMemberState); // Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetMember // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateMatchmakingReadyStatus(bool InIsReadyForMatchmaking); // Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateMatchmakingReadyStatus // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_GroupMemberStatusWidget(int32_t EntryPoint); // Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.ExecuteUbergraph_TBP_GroupMemberStatusWidget // (Final|UbergraphFunction) // @ game+0x16c0340
};

