// WidgetBlueprintGeneratedClass TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C
// Size: 0x2a8 (Inherited: 0x260)
struct UTBP_UI_ChallengeGrid_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeRight; // 0x268(0x08)
	struct UWidgetAnimation* FadeLeft; // 0x270(0x08)
	struct UUniformGridPanel* Grid; // 0x278(0x08)
	struct UTigerClientRewardTrackChallenges* ChallengeTrack; // 0x280(0x08)
	bool HasExpired; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct FMulticastInlineDelegate AnimationFinished; // 0x290(0x10)
	struct FVector2D ChallengeWidgetSize; // 0x2a0(0x08)

	void SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_2(); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_1(); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeGrid_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetChallengeWidgetSize(float Width, float Height); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.SetChallengeWidgetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateChallengeProgress(); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.UpdateChallengeProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FillGrid(); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.FillGrid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void CallAnimationFinished(); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.CallAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ChallengeGrid(int32_t EntryPoint); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.ExecuteUbergraph_TBP_UI_ChallengeGrid // (Final|UbergraphFunction) // @ game+0x16c0340
	void AnimationFinished__DelegateSignature(); // Function TBP_UI_ChallengeGrid.TBP_UI_ChallengeGrid_C.AnimationFinished__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

