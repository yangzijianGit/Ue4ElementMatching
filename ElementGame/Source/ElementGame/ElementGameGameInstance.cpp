// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementGameGameInstance.h"


UElementGameGameInstance::UElementGameGameInstance() {
	m_DefaultSaveGameSlot = TEXT("ElementGame");
}

// called by the game at startup.
void UElementGameGameInstance::Init() {
	InitSaveGameSlot();

	m_dhLoginChangedHandle = FCoreDelegates::OnUserLoginChangedEvent.AddUObject(this, &)

}

// called by the game as it shuts down.
void UElementGameGameInstance::Shutdown() {}

// This function is used to initialize or change our save game slot. Data is transferred when creating a new, non-default slot.
void UElementGameGameInstance::InitSaveGameSlot() {}

// Load the current saved game, if it exists.
bool UElementGameGameInstance::FindSaveDataForLevel(UObject* worldContextObject, FElementGameLevelSaveData& outSaveData) {}

// Save our game. All save game data is included.
void UElementGameGameInstance::SaveGame() {}

// Look up a custom int32 variable in our saved game. FieldName is not case-sensitive
void UElementGameGameInstance::LoadCustomInt(FString fieldName, int32& value) {}

// Store a custom int32 variable in our saved game. FieldName is not case-sensitive.
void UElementGameGameInstance::SaveSustomInt(FString fieldName, int32 value) {}

// Remove a custom int32 variable from our saved game. FieldName is not case-sensitive.
void UElementGameGameInstance::ClearCustomInt(FString fieldName) {}

// Create or update the saved data for a specific Match3 level.
void UElementGameGameInstance::UpdateSave(UObject* worldContextObject, FElementGameLevelSaveData& newData) {}

// Event for refreshing the UI after save games are updated.
void UElementGameGameInstance::UpdateUIAfterSave() {}

// Combined save game data for all levels/modes.
class UElementGameSaveGame* m_InstanceGameData{}

	// Should be called by blueprints when the user's ID changes, such as by logging in or out via the game's blueprint menu system.
	void UElementGameGameInstance::RegisterOnlineID(FString strNewLineID) {}

// Called when the user logs in or out on a mobile device.
void UElementGameGameInstance::OnLoginChanged(bool bLoggingIn, int32 nUserID, int32 nUserIndex) {}

// Called when the application has just entered the foreground.
void UElementGameGameInstance::OnEnteringForeground() {}

// Called when the application is ablout to enter the background.
void UElementGameGameInstance::OnEnteringBackground() {}

//Internal function to bind to viewport resizing delegate.
void UElementGameGameInstance::OnViewportResize_Internal(FViewport* pViewport, uint32 uID) {}

// Blueprint event to use to respond to viewport resizing, since FViewport* is not a valid Blueprint pin type.
void UElementGameGameInstance::OnViewprotResize() {}

// Internal function to bind to unexpected purchase delegate.
void UElementGameGameInstance::OnUnexpectedPurchase_Internal(const FUniqueNetId& tUserID) {}

// Called when the application has received a purchase event outside of the purchase flow.
void UElementGameGameInstance::OnUnexpectedPurchase() {}

FString UElementGameGameInstance::GetSaveSlotName() const {}
