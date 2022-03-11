// Fill out your copyright notice in the Description page of Project Settings.


#include "CharStat.h"

// Sets default values for this component's properties
UCharStat::UCharStat()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	m_hp = 10;
	// ...
}


// Called when the game starts
void UCharStat::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCharStat::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

int UCharStat::GetHp() {
	return m_hp;
}

void UCharStat::TakeDamage(int p_damage) {
	m_hp -= p_damage;
}
