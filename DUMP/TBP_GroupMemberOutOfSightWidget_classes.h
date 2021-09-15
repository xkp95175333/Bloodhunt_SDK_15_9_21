// WidgetBlueprintGeneratedClass TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C
// Size: 0x308 (Inherited: 0x2c8)
struct UTBP_GroupMemberOutOfSightWidget_C : UTigerInWorldWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2d0(0x08)
	struct UBorder* BorderWidget; // 0x2d8(0x08)
	struct URichTextBlock* GroupMemberNameWidget; // 0x2e0(0x08)
	struct ATigerPlayerState* GroupMemberState; // 0x2e8(0x08)
	struct ATigerPlayer* TigerPlayer; // 0x2f0(0x08)
	struct FMulticastInlineDelegate OnLifeStatusChanged; // 0x2f8(0x10)

	void HandleLifeStatusChanged(enum class ETigerPlayerLifeStatus NewLifeStatus); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandleLifeStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandlePlayerChanged(struct ATigerPlayer* InTigerPlayer); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandlePlayerChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FLinearColor GetColorAndOpacity(); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.GetColorAndOpacity // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Initialize(struct ATigerPlayerState* Player State); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPawnChanged(struct APawn* NewPawn); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnPawnChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnScreenStateChanged(bool bInIsOnScreen); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnScreenStateChanged // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnNameChanged(); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget(int32_t EntryPoint); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnLifeStatusChanged__DelegateSignature(enum class ETigerPlayerLifeStatus InLifeStatus); // Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnLifeStatusChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

