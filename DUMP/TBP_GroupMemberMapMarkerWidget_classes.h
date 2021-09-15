// WidgetBlueprintGeneratedClass TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C
// Size: 0x2c8 (Inherited: 0x2b8)
struct UTBP_GroupMemberMapMarkerWidget_C : UTBP_UI_MapMarker_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UImage* PlayerImage; // 0x2c0(0x08)

	void GetPlayerIndex(char PlayerIndex); // Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.GetPlayerIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnUpdated(); // Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.OnUpdated // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget(int32_t EntryPoint); // Function TBP_GroupMemberMapMarkerWidget.TBP_GroupMemberMapMarkerWidget_C.ExecuteUbergraph_TBP_GroupMemberMapMarkerWidget // (Final|UbergraphFunction) // @ game+0x16c0340
};

