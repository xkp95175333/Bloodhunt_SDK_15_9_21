// WidgetBlueprintGeneratedClass TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C
// Size: 0x300 (Inherited: 0x280)
struct UTBP_UI_PlayerActionIndicator_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* ChanneledHeal; // 0x288(0x08)
	struct UWidgetAnimation* Healed; // 0x290(0x08)
	struct UWidgetAnimation* Feeding; // 0x298(0x08)
	struct UWidgetAnimation* Attacking; // 0x2a0(0x08)
	struct UImage* ActionIndicatorImage; // 0x2a8(0x08)
	struct ATigerPlayer* Group Member; // 0x2b0(0x08)
	struct TArray<bool> CurrentStatuses; // 0x2b8(0x10)
	enum class TBE_StatusBackground ActiveStatus; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TArray<enum class TBE_StatusBackground> StatusPriority; // 0x2d0(0x10)
	struct UTexture2D* Attacking Tex; // 0x2e0(0x08)
	struct UTexture2D* Healed Tex; // 0x2e8(0x08)
	struct UTexture2D* ChanneledHeal Tex; // 0x2f0(0x08)
	struct UTexture2D* Feeding Tex; // 0x2f8(0x08)

	void SwitchPersistentState(enum class TBE_StatusBackground InState); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SwitchPersistentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TriggerOneShotState(struct UTexture2D* InTexture, struct UWidgetAnimation* InAnimation); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.TriggerOneShotState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateActiveStatus(); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.UpdateActiveStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBuffChanged(struct UTigerBuff* InBuff, int32_t InId, float InDuration); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnBuffChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnStoppedFeeding(bool InWasAttacked, struct ATigerCharacter* InNPCFedOn); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStoppedFeeding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnStartedFeeding(float InTravelTime); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStartedFeeding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerAction(enum class ETigerCharacterAction InPlayerAction); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnPlayerAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHealthChanged(struct ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnHealthChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPawn(struct APawn* InPawn); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SetPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_PlayerActionIndicator(int32_t EntryPoint); // Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.ExecuteUbergraph_TBP_UI_PlayerActionIndicator // (Final|UbergraphFunction) // @ game+0x16c0340
};

