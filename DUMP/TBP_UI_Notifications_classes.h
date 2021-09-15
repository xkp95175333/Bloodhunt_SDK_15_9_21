// WidgetBlueprintGeneratedClass TBP_UI_Notifications.TBP_UI_Notifications_C
// Size: 0x410 (Inherited: 0x2b8)
struct UTBP_UI_Notifications_C : UTigerNotificationsUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UTBP_NotificationUIStacker_C* ChallengeNotificationStacker; // 0x2c0(0x08)
	struct UTBP_NotificationUIStacker_C* NotificationStacker; // 0x2c8(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x2d0(0x08)
	struct UTigerItemAsset* BloodAsset; // 0x2d8(0x08)
	struct UTigerItemAsset* DisciplineAsset; // 0x2e0(0x08)
	struct UTigerChallenge* CachedMatchChallenge; // 0x2e8(0x08)
	struct TArray<struct UTigerChallenge*> CachedDailyChallenges; // 0x2f0(0x10)
	struct TMap<struct UTigerPingBase*, float> LastPingNotificationTimes; // 0x300(0x50)
	struct TMap<enum class ETigerWeaponAmmoType, struct FName> AmmoTypeToAudioName; // 0x350(0x50)
	struct TMap<enum class ERangedWeaponModType, struct FName> ModTypeToAudioName; // 0x3a0(0x50)
	struct UAkAudioEvent* FriendAddedAudioEvent; // 0x3f0(0x08)
	struct UAkAudioEvent* FriendRemovedAudioEvent; // 0x3f8(0x08)
	struct UAkAudioEvent* FriendInviteReceivedAudioEvent; // 0x400(0x08)
	struct UAkAudioEvent* FriendInviteRejectedAudioEvent; // 0x408(0x08)

	void Create Challenge Completed Notification(struct UTigerChallenge* InCompletedChallenge, struct UTBP_UI_Challenge_Notification_Item_C* Challenge UI Notification); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.Create Challenge Completed Notification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddFriendNotification(struct UTexture2D* InIcon, struct FText InMessage, struct UAkAudioEvent* InAudioEvent); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddFriendNotification // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FormatPlayerNameColored(struct FText InNotificationText, struct ATigerPlayerState* InPlayerState, struct FText OutNotificationText); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatPlayerNameColored // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void AddEnemyBrokeMasqueradeNotification(struct ATigerPlayerState* EnemyPlayer); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddEnemyBrokeMasqueradeNotification // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayPingVOAudio(struct FTigerPingNotificationNetData InPingData, struct ATigerPlayerState* InPlayerState); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayPingVOAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayCancelPingAudio(struct AActor* Actor, struct UObject* Object); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCancelPingAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayCorrespondingPingAudio(bool bIsInIntrested, struct UObject* PingBase); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCorrespondingPingAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreatePingNotification(struct FText InNotificationText, struct UTexture2D* InTexture, float InIconScale, enum class ETigerUIColor InUIColor, struct ATigerPlayerState* InPlayerState, bool bIsItem); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.CreatePingNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetFormattedPingPingName(struct FText InNotificationText, enum class ETigerUIColor InTigerColor, struct FText OutNotificationText); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetFormattedPingPingName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void FormatColoredGroupMemberName(struct FText InNotificationText, struct ATigerPlayerState* InPlayerState, struct FText OutNotificationText); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatColoredGroupMemberName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetItemCountText(int32_t Count, struct FText Text); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetItemCountText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x16c0340
	void AddExperienceGainNotification(struct FText Reason, int32_t Amount, struct UTexture2D* Icon); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddExperienceGainNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddMosquitoNotification(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddMosquitoNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddItemNotification(struct FTigerItemNotification TigerItemNotification); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddItemNotification // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddDeathNotification(struct FText DeadPlayerName, struct FText InstigatorName, bool IsPlayerInSameGroup); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddDeathNotification // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerDeath(struct FText PlayerName, struct FText InstigatorName, bool bIsPlayerInSameGroup); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnDisciplineReceived(struct UTexture2D* Icon, struct FText Name); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnDisciplineReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ItemReceived(struct FTigerItemNotification ItemNotification); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.ItemReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnMosquitoActivated(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMosquitoActivated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnExperienceGained(struct UTigerExperienceEvent* ExperienceEvent, int32_t GainedExperience); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnExperienceGained // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMemberJoinedGroup(struct FString PlayerName); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberJoinedGroup // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMemberLeftGroup(struct FString PlayerName); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberLeftGroup // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInGameTalentUnlocked(struct UTexture2D* Icon, struct FText Name); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInGameTalentUnlocked // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void HandleOnPersistentPlayerInitialisedEvent(struct ATigerPlayerController* PlayerController); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.HandleOnPersistentPlayerInitialisedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHolyIncenseImminent(float Time); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnHolyIncenseImminent // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnBloodTrackPassiveUnlocked(struct UTigerBloodTrackPassiveConfig* Passive); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnBloodTrackPassiveUnlocked // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGroupPing(struct FTigerPingNotificationNetData PingData, struct ATigerPlayerState* InSendingPlayerState); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPing // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnGroupPingResponse(struct UTigerPingClientData* InPingData, struct ATigerPlayerState* InRespondingPlayer, bool bInIsInterested); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingResponse // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGroupPingCanceled(struct UTigerPingClientData* InPingData); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingCanceled // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerHealed(struct FString InPlayerName); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerHealed // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnOtherPlayerBrokeMasquerade(struct ATigerPlayerState* InPlayerState); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnOtherPlayerBrokeMasquerade // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnReceivedReward(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnReceivedReward // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFriendAdded(struct UTigerFriend* InNewFriend); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendAdded // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFriendInviteReceived(struct UTigerFriendInvite* InInvite); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteReceived // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFriendInviteRejected(struct UTigerFriendInvite* InInvite); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteRejected // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFriendRemoved(struct UTigerFriend* InLostFriend); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendRemoved // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGrimoireItemUnlocked(struct UTigerGrimoireEntry* InGrimoireEntry); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGrimoireItemUnlocked // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFriendInviteSent(); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteSent // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnChallengeCompleted(struct UTigerChallenge* InCompletedChallenge); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnChallengeCompleted // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnAcceptGroupInviteFailed(struct FTigerInviteId InInviteId); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnAcceptGroupInviteFailed // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnCollectibleFound(struct UTigerCollectibleData* InCollectible); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnCollectibleFound // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnQuestCompleted(struct UTigerQuest* InCompletedQuest); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestCompleted // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGroupInviteReceived(struct UTigerPartyInvite* InInvite); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupInviteReceived // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnQuestObjectiveCompleted(struct UTigerQuestObjective* InCompleteObjective); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveCompleted // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Notifications(int32_t EntryPoint); // Function TBP_UI_Notifications.TBP_UI_Notifications_C.ExecuteUbergraph_TBP_UI_Notifications // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

