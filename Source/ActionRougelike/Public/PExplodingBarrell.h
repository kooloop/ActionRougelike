// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PExplodingBarrell.generated.h"

class URadialForceComponent;

UCLASS()
class ACTIONROUGELIKE_API APExplodingBarrell : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	APExplodingBarrell();

protected:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Barrell;

	UPROPERTY(VisibleAnywhere)
	URadialForceComponent* Explosion;

	UFUNCTION()
	void BlowUp();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
