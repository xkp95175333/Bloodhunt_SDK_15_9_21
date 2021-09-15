// BlueprintGeneratedClass TBP_Grimoire_Card.TBP_Grimoire_Card_C
// Size: 0x2f8 (Inherited: 0x248)
struct ATBP_Grimoire_Card_C : ATigerGrimoireCard {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct FVector FloatingCardAnimation_TranslationCurve_F0AD789C4045538D46B43F856C07A722; // 0x250(0x0c)
	enum class ETimelineDirection FloatingCardAnimation__Direction_F0AD789C4045538D46B43F856C07A722; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct UTimelineComponent* FloatingCardAnimation; // 0x260(0x08)
	struct UMaterialInstanceDynamic* CardMaterialInstance; // 0x268(0x08)
	struct UGrimoireCardMaterialPreset* CardMaterialPreset; // 0x270(0x08)
	float MaxDamage; // 0x278(0x04)
	float MaxExtraDamage; // 0x27c(0x04)
	float MaxDamageOnEdges; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UTigerGrimoireEntry* CurrentEntry; // 0x288(0x08)
	struct ULevelSequence* TransitionSequence; // 0x290(0x08)
	struct ULevelSequencePlayer* SequencePlayer; // 0x298(0x08)
	struct FVector MaxFloatHeight; // 0x2a0(0x0c)
	float MaxVertical; // 0x2ac(0x04)
	float MaxHorizontal; // 0x2b0(0x04)
	struct FVector LeftVec; // 0x2b4(0x0c)
	struct FMulticastInlineDelegate Begin Float Animation Dispatcher; // 0x2c0(0x10)
	struct FVector MaxRotation; // 0x2d0(0x0c)
	struct FVector MinRotation; // 0x2dc(0x0c)
	float TransitionPlayRate; // 0x2e8(0x04)
	float FloatingPlayRate; // 0x2ec(0x04)
	struct FRandomStream CardStream; // 0x2f0(0x08)

	void Randomise Damage Placement(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Randomise Damage Placement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnClose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Play Card Transition Animation(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Play Card Transition Animation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Is Back Using DNMR(bool InBool); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Back Using DNMR // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Is Front Using DNMR(bool InBool); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Front Using DNMR // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Change Card To New Card(struct UTigerGrimoireEntry* InEntry); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Card To New Card // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Change Quality Level(struct FDataTableRowHandle InRow); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Quality Level // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Change Border Colour(struct FDataTableRowHandle InRow); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Border Colour // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Send Card Mat Properties to Material(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Card Mat Properties to Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Send Backface Texture to Material(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Backface Texture to Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Send Frontface Texture to Material(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Frontface Texture to Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Overwrite Card Material Preset(struct UGrimoireCardMaterialPreset* InPreset); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Overwrite Card Material Preset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Frontface(struct UTexture* InTexture); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Frontface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Backface(struct UTexture* InTexture); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Backface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Create Material Instance(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Create Material Instance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Show(struct UTigerGrimoireEntry* InEntry, enum class ETigerGrimoireEntryMediaDisplayMode InLastEntryNode); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Show // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FloatingCardAnimation__FinishedFunc(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void FloatingCardAnimation__UpdateFunc(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void PlayFloatingAnimation(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.PlayFloatingAnimation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Grimoire_Card(int32_t EntryPoint); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ExecuteUbergraph_TBP_Grimoire_Card // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void Begin Float Animation Dispatcher__DelegateSignature(); // Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Begin Float Animation Dispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

