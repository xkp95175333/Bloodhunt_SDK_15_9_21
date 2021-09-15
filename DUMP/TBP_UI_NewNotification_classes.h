// WidgetBlueprintGeneratedClass TBP_UI_NewNotification.TBP_UI_NewNotification_C
// Size: 0x2b2 (Inherited: 0x280)
struct UTBP_UI_NewNotification_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeOut; // 0x288(0x08)
	struct UWidgetAnimation* PulseAnimation; // 0x290(0x08)
	struct UImage* NewNotificationIcon; // 0x298(0x08)
	struct UImage* NewNotificationIconGlow; // 0x2a0(0x08)
	struct UOverlay* NotificationDotContainer; // 0x2a8(0x08)
	enum class ETigerNewNotificationMenuOptions NewNotificationMenuType; // 0x2b0(0x01)
	bool bIsSetUp; // 0x2b1(0x01)

	void SetVisible(bool InVisible); // Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.SetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Initialize(); // Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void CheckShouldBeActive(); // Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.CheckShouldBeActive // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BindNewsUpdateEvent(); // Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.BindNewsUpdateEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHide(float DelayTime); // Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.OnHide // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_NewNotification(int32_t EntryPoint); // Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.ExecuteUbergraph_TBP_UI_NewNotification // (Final|UbergraphFunction) // @ game+0x16c0340
};

