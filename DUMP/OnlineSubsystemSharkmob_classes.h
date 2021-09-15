// Class OnlineSubsystemSharkmob.INTLLoginCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct UINTLLoginCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct UINTLLoginCallbackProxy* ConnectToINTLServiceWithToken(struct UObject* WorldContextObject, struct FString LoginToken); // Function OnlineSubsystemSharkmob.INTLLoginCallbackProxy.ConnectToINTLServiceWithToken // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3467970
};

