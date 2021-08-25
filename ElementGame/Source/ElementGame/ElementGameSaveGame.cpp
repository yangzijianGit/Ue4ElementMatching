// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementGameSaveGame.h"
#include "Kismet/GameplayStatics.h"


bool UElementGameSaveGame::LoadCustomInt(FString fieldName, int32& value) const
{
	const int32* valuePointer = m_mpElementGameCustomIntData.Find(fieldName);
	if (valuePointer != nullptr)
	{
		value = *valuePointer;
		return true;
	}
	return false;
}


void UElementGameSaveGame::SaveCustomInt(FString fieldName, int32 value)
{
	m_mpElementGameCustomIntData.FindOrAdd(fieldName) = value;
}

void UElementGameSaveGame::ClearCustomInt(FString fieldName)
{
	m_mpElementGameCustomIntData.Remove(fieldName);
}




