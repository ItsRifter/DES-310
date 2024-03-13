// Fill out your copyright notice in the Description page of Project Settings.


#include "Test.h"

// Sets default values
ATest::ATest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create a static mesh component
	UStaticMeshComponent* cubeMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));

	// Load the Cube mesh
	UStaticMesh* cubeMesh = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'")).Object;

	// Set the component's mesh
	cubeMeshComponent->SetStaticMesh(cubeMesh);

	// Set as root component
	RootComponent = cubeMeshComponent;

}

// Called when the game starts or when spawned
void ATest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

