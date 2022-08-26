// Fill out your copyright notice in the Description page of Project Settings.


#include "GunBase.h"

// Sets default values
AGunBase::AGunBase()
{
 
	PrimaryActorTick.bCanEverTick = false;

}

void AGunBase::ReloadC()
{
	if(TotalBulletsNum+CurrentBulletsNum>=OneBoxBullets)
	{
		TotalBulletsNum=TotalBulletsNum+CurrentBulletsNum-OneBoxBullets;
		CurrentBulletsNum=OneBoxBullets;
		
	}
	else
	{
		CurrentBulletsNum+=TotalBulletsNum;
		TotalBulletsNum=0;
	}
}





