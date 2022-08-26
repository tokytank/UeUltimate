// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	bIsDead=false;
	MaxHealth=100.f;
	CurrHealth=MaxHealth;
	
}

void AEnemy::Damage_Implementation(float DamageVal)
{
	if(CurrHealth-DamageVal>0.f)
	{
		CurrHealth-=DamageVal;
	}
	else
	{
		CurrHealth=0;
		bIsDead=true;
		
	}
	
}








