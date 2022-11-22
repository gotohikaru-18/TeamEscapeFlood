// Fill out your copyright notice in the Description page of Project Settings.


#include "HP.h"

void UHP::SetHP(float numvalue)
{
	_hp = numvalue;
}

void UHP::ChangeHP(float numvalue)
{
	_hp += numvalue;
}
