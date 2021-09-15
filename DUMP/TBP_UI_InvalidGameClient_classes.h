// WidgetBlueprintGeneratedClass TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C
// Size: 0x2c8 (Inherited: 0x290)
struct UTBP_UI_InvalidGameClient_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UButton* DeveloperButton; // 0x298(0x08)
	struct UTBP_UI_ConfirmMenu_C* TBP_UI_ConfirmMenu; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnExited; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnIgnored_Dispatch; // 0x2b8(0x10)

	void Construct(); // Function TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnAcceptedTheirFate(); // Function TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C.OnAcceptedTheirFate // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnIsAPersonWhomBelievesThatRulesAreFlawedAsASocialConstruct(); // Function TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C.OnIsAPersonWhomBelievesThatRulesAreFlawedAsASocialConstruct // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InvalidGameClient(int32_t EntryPoint); // Function TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C.ExecuteUbergraph_TBP_UI_InvalidGameClient // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnIgnored_Dispatch__DelegateSignature(); // Function TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C.OnIgnored_Dispatch__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnExited__DelegateSignature(); // Function TBP_UI_InvalidGameClient.TBP_UI_InvalidGameClient_C.OnExited__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

