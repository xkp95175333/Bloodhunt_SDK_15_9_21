// WidgetBlueprintGeneratedClass TBP_UI_StatusIcon.TBP_UI_StatusIcon_C
// Size: 0x300 (Inherited: 0x280)
struct UTBP_UI_StatusIcon_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* Animation_Flash; // 0x288(0x08)
	struct UWidgetAnimation* Animation_BloodHunt; // 0x290(0x08)
	struct UImage* BloodHunt; // 0x298(0x08)
	struct UTBP_UI_Gradient_C* FlashImage; // 0x2a0(0x08)
	struct UOverlay* Overlay_1; // 0x2a8(0x08)
	struct UTBP_UI_Gradient_C* shadow; // 0x2b0(0x08)
	struct UImage* StatusIconImage; // 0x2b8(0x08)
	struct ATigerPlayer* Group Member; // 0x2c0(0x08)
	enum class TBE_StatusIcon ActiveStatus; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TArray<bool> CurrentStatuses; // 0x2d0(0x10)
	struct TArray<enum class TBE_StatusIcon> StatusPriority; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OnStatusIconChanged; // 0x2f0(0x10)

	void OnMasqueradeStateUpdated(bool InMasqueradeBroken, enum class ETigerAIPlayerAction InPlayerAction); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetStatusIcon(enum class TBE_StatusIcon InStatusIcon); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetStatusIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateActiveStatus(); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.UpdateActiveStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnReviveStateChanged(bool InReviveActive, bool InIsTarget); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnReviveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDiablerizeStateChanged(bool InDiablerizeActive, bool InIsTarget); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnDiablerizeStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnMasqueradeStateChanged(bool InMasqueradeBroken, enum class ETigerAIPlayerAction InPlayerAction); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPawn(struct APawn* InPawn); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_StatusIcon(int32_t EntryPoint); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.ExecuteUbergraph_TBP_UI_StatusIcon // (Final|UbergraphFunction) // @ game+0x16c0340
	void OnStatusIconChanged__DelegateSignature(enum class TBE_StatusIcon InNewStatusIcon); // Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnStatusIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

