// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "newnewnewnewHealthsystem.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STUNTMAN_API UnewnewnewnewHealthsystem : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UnewnewnewnewHealthsystem();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		float health = 100.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		float maxhealth = 100.0f;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
