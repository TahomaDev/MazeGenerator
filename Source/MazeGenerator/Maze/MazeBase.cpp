// Copyright by Aristov Alexey. All Rights Reserved.


#include "MazeBase.h"

// Sets default values
AMazeBase::AMazeBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMazeBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMazeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

