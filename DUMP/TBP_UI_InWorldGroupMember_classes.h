// WidgetBlueprintGeneratedClass TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C
// Size: 0x339 (Inherited: 0x320)
struct UTBP_UI_InWorldGroupMember_C : UTBP_UI_InWorldIconBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* FadeOut; // 0x328(0x08)
	struct ATigerPlayerState* GroupPlayerState; // 0x330(0x08)
	bool bIsOnScreen; // 0x338(0x01)

	void Construct(); // Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerIndexChanged(char PlayerIndex); // Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnPlayerIndexChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLifeStatusChanged(enum class ETigerPlayerLifeStatus InLifeStatus); // Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnLifeStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HandleRemovedGroupMember(); // Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.HandleRemovedGroupMember // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_InWorldGroupMember(int32_t EntryPoint); // Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.ExecuteUbergraph_TBP_UI_InWorldGroupMember // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

