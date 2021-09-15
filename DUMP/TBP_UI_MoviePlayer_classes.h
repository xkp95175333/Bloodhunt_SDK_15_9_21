// WidgetBlueprintGeneratedClass TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C
// Size: 0x2f9 (Inherited: 0x280)
struct UTBP_UI_MoviePlayer_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* BlackBackground; // 0x288(0x08)
	struct UImage* MovieTexture; // 0x290(0x08)
	struct UMediaPlayer* AnimaticPlayer; // 0x298(0x08)
	struct UFileMediaSource* MovieFile; // 0x2a0(0x08)
	bool PlayImmediately; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FMulticastInlineDelegate OnClosed; // 0x2b0(0x10)
	struct ATBP_MovieSound_C* SoundActor; // 0x2c0(0x08)
	struct UMediaPlaylist* Playlist; // 0x2c8(0x08)
	bool bCanSkipMovies; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct TArray<struct FKey> CancelKeys; // 0x2d8(0x10)
	struct TArray<struct FKey> WaitingForRelease; // 0x2e8(0x10)
	bool WasMouseCursorShown; // 0x2f8(0x01)

	void UpdateCurrentDownKeys(); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.UpdateCurrentDownKeys // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void IsLastVideo(bool bIsLastVideo); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.IsLastVideo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void SetCinematicState(bool InCinematic); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.SetCinematicState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CancelPlayback(); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.CancelPlayback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartPlaying(bool PlaySucceeded); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.StartPlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FinishedPlaying(); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedPlaying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void EndReached(); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.EndReached // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FinishedLoading(struct FString OpenedUrl); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMenuBack(); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnMenuBack // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_MoviePlayer(int32_t EntryPoint); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.ExecuteUbergraph_TBP_UI_MoviePlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnClosed__DelegateSignature(); // Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

