// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_NewNotification.TBP_UI_ElysiumHUD_NewNotification_C
// Size: 0x2cc (Inherited: 0x260)
struct UTBP_UI_ElysiumHUD_NewNotification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* PulseAnimation; // 0x268(0x08)
	struct UOverlay* NewNotificationContainer; // 0x270(0x08)
	struct UImage* Pulse1; // 0x278(0x08)
	struct UImage* Pulse2; // 0x280(0x08)
	struct UImage* Stationary; // 0x288(0x08)
	struct UImage* Stationary_2; // 0x290(0x08)
	struct UTBP_UI_InputPromptCombined_C* TBP_UI_InputPromptCombined; // 0x298(0x08)
	struct UTBP_UI_NewNotification_C* TBP_UI_NewNotification; // 0x2a0(0x08)
	enum class ETigerNewNotificationMenuOptions NewNotificationMenuType; // 0x2a8(0x01)
	bool bIsSetUp; // 0x2a9(0x01)
	char pad_2AA[0x2]; // 0x2aa(0x02)
	struct FLinearColor DefualtColor; // 0x2ac(0x10)
	struct FLinearColor DefaultColorYellow; // 0x2bc(0x10)

	void Initialize(); // Function TBP_UI_ElysiumHUD_NewNotification.TBP_UI_ElysiumHUD_NewNotification_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ElysiumHUD_NewNotification.TBP_UI_ElysiumHUD_NewNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_ElysiumHUD_NewNotification.TBP_UI_ElysiumHUD_NewNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void CheckShouldBeActive(); // Function TBP_UI_ElysiumHUD_NewNotification.TBP_UI_ElysiumHUD_NewNotification_C.CheckShouldBeActive // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BindNewsUpdateEvent(); // Function TBP_UI_ElysiumHUD_NewNotification.TBP_UI_ElysiumHUD_NewNotification_C.BindNewsUpdateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumHUD_NewNotification(int32_t EntryPoint); // Function TBP_UI_ElysiumHUD_NewNotification.TBP_UI_ElysiumHUD_NewNotification_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_NewNotification // (Final|UbergraphFunction) // @ game+0x16c0340
};

