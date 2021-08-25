// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ElementGameSaveGame.generated.h"


USTRUCT(BlueprintType)
struct FElementGameLevelSaveData
{
	GENERATED_USTRUCT_BODY()

		// score to beat to get gold.
		UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 goldScore;

	// score to beat to get silver.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 silverScore;

	// score to beat to get bronze.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 bronzeScore;

	// player's personal best score. Not necessarily a gold-medal score.
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 topScore;
};



UCLASS()
class ELEMENTGAME_API UElementGameSaveGame : public UGameInstance
{
	GENERATED_BODY()

public:

	/**
	*	@see UGameplayStatics::CreateSaveGameObject
	*	@see UGameplayStatics::SaveGameToSlot
	*	@see UGameplayStatics::DoesSaveGameExist
	*	@see UGameplayStatics::LoadGameFromSlot
	*	@see UGameplayStatics::DeleteGameInSlot
	*/
	UPROPERTY()
	TMap<FString, FElementGameLevelSaveData> m_mpElementGameSaveData;

	// custom global fields for saved games.

	// load the int32 value associated with the requested variable.
	bool LoadCustomInt(FString fieldName, int32& value) const;

	// Create a variable in the saved game and associate the provided integer value with it.
	void SaveCustomInt(FString fieldName, int32 value);

	// erase a variable from the saved game.
	void ClearCustomInt(FString fieldName);

protected:
	UPROPERTY()
	TMap<FString, int32> m_mpElementGameCustomIntData;

};
