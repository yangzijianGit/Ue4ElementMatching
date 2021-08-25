// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ElementGameSaveGame.h"

#include "ElementGameGameInstance.generated.h"

/**
 *
 */
UCLASS()
class ELEMENTGAME_API UElementGameGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UElementGameGameInstance();

	// called by the game at startup.
	void Init() override;

	// called by the game as it shuts down.
	void Shutdown() override;

	// This function is used to initialize or change our save game slot. Data is transferred when creating a new, non-default slot.
	void InitSaveGameSlot();

	// Load the current saved game, if it exists.
	bool FindSaveDataForLevel(UObject* worldContextObject, FElementGameLevelSaveData& outSaveData);

	// Save our game. All save game data is included.
	UFUNCTION(BlueprintCallable, Category = "Saved Game")
		void SaveGame();

	// Look up a custom int32 variable in our saved game. FieldName is not case-sensitive
	UFUNCTION(BlueprintCallable, Category = "Saved Game")
		void LoadCustomInt(FString fieldName, int32& value);

	// Store a custom int32 variable in our saved game. FieldName is not case-sensitive.
	UFUNCTION(BlueprintCallable, Category = "Saved Game")
		void SaveSustomInt(FString fieldName, int32 value);

	// Remove a custom int32 variable from our saved game. FieldName is not case-sensitive.
	UFUNCTION(BlueprintCallable, Category = "Saved Game")
		void ClearCustomInt(FString fieldName);

	// Create or update the saved data for a specific Match3 level.
	void UpdateSave(UObject* worldContextObject, FElementGameLevelSaveData& newData);

	// Event for refreshing the UI after save games are updated.
	UFUNCTION(BlueprintImplementableEvent)
		void UpdateUIAfterSave();

	// Combined save game data for all levels/modes.
	UPROPERTY()
		class UElementGameSaveGame* m_InstanceGameData;

	// Should be called by blueprints when the user's ID changes, such as by logging in or out via the game's blueprint menu system.
	UFUNCTION(BlueprintCallable, Category = "Online")
		void RegisterOnlineID(FString strNewLineID);

	// Called when the user logs in or out on a mobile device.
	UFUNCTION(BlueprintImplementableEvent, Category = "Online")
		void OnLoginChanged(bool bLoggingIn, int32 nUserID, int32 nUserIndex);

	// Called when the application has just entered the foreground.
	UFUNCTION(BlueprintImplementableEvent, Category = "Online")
		void OnEnteringForeground();

	// Called when the application is ablout to enter the background.
	UFUNCTION(BlueprintImplementableEvent, Category = "Online")
		void OnEnteringBackground();

	//Internal function to bind to viewport resizing delegate.
	void OnViewportResize_Internal(FViewport* pViewport, uint32 uID);

	// Blueprint event to use to respond to viewport resizing, since FViewport* is not a valid Blueprint pin type.
	UFUNCTION(BlueprintImplementableEvent, Category = "UI")
		void OnViewprotResize();

	// Internal function to bind to unexpected purchase delegate.
	void OnUnexpectedPurchase_Internal(const FUniqueNetId& tUserID);

	// Called when the application has received a purchase event outside of the purchase flow.
	UFUNCTION(BlueprintImplementableEvent, Category = "Online")
		void OnUnexpectedPurchase();

protected:
	FString GetSaveSlotName() const;
	FString m_strSaveGamePrefix;
	FString m_DefaultSaveGameSlot;

private:
	FDelegateHandle m_dhLoginChangedHandle;
	FDelegateHandle m_dhEnteringForegroundHandle;
	FDelegateHandle m_dhEnteringBackgroundHandle;
	FDelegateHandle m_dhViewportHandle;
	FDelegateHandle m_dhUnexpectedPurchaseHandle;
};
