// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharStat.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DARKSOUL_API UCharStat : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharStat();
	
	// VARIABLES
	UPROPERTY(EditAnywhere, Category = "DATABASE")
		int m_hp;

	// GETTER -----------------------------------
	UFUNCTION(BlueprintCallable)
		int GetHp();

	UFUNCTION(BlueprintCallable)
		bool GetIsAlive();

	UFUNCTION(BlueprintCallable)
		bool GetIsOnFire();

	UFUNCTION(BlueprintCallable)
		bool GetAlive();

	// SETTER -----------------------------------
	UFUNCTION(BlueprintCallable)
		void SetAlive(bool p_alive);

	UFUNCTION(BlueprintCallable)
		void SetOnFire(bool p_onFire);

	// OTHER ------------------------------------
	UFUNCTION(BlueprintCallable)
		void TakeDamage(int p_damage);

private:
	// VARIABLES 
	UPROPERTY()
		bool m_alive;
	UPROPERTY()
		bool m_onFire;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
