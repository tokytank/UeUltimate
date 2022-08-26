// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunBase.generated.h"

UCLASS()
class ULTIMATE_API AGunBase : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AGunBase();
	
public:
	//基础属性
	UPROPERTY(BlueprintReadWrite)//当前弹夹子弹数量
	int32 CurrentBulletsNum;
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly,Category="Bullets")//总共还剩多少子弹
	int32 TotalBulletsNum;
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly,Category="Bullets")//一个弹夹最多有多少子弹
	int32 OneBoxBullets;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* ReloadSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* NoBullets;
	
public:
	UFUNCTION(BlueprintCallable)
	void ReloadC();

};
