// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include"IDamageable.h"
#include "Enemy.generated.h"

UCLASS()
class ULTIMATE_API AEnemy : public ACharacter,public  IIDamageable
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();
	UFUNCTION(BlueprintCallable)
	virtual void Damage_Implementation(float DamageVal) override;


	UPROPERTY(BlueprintReadOnly)
	bool bIsDead;
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly)
	float  MaxHealth;
	UPROPERTY(BlueprintReadWrite)
	float CurrHealth;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* AttackAnim;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* DeathAnim;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	USoundBase*WalkSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	USoundBase*AttackSound;
	
};
