// Fill out your copyright notice in the Description page of Project Settings.


#include "PExplodingBarrell.h"
#include "PhysicsEngine/RadialForceComponent.h"

// Sets default values
APExplodingBarrell::APExplodingBarrell()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Barrell = CreateDefaultSubobject<UStaticMeshComponent>("Barrell");
	RootComponent = Barrell;

	Explosion = CreateDefaultSubobject<URadialForceComponent>("Explosion");
	Explosion->SetupAttachment(Barrell);
	Explosion->Radius = 500.0f;
	Explosion->ImpulseStrength = 2000.0f;
	Explosion->bImpulseVelChange = true;

}

// Called when the game starts or when spawned
void APExplodingBarrell::BeginPlay()
{
	Super::BeginPlay();
	//Barrell->OnComponentHit.AddDynamic(this, &APExplodingBarrell::BlowUp);
	
}

// Called every frame
void APExplodingBarrell::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

void APExplodingBarrell::BlowUp() {
	Explosion->FireImpulse();
}

