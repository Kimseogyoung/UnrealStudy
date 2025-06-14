// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

// 생성자
AMyPlayer::AMyPlayer()
{
 	// 이 액터가 매 프레임마다 Tick() 함수를 호출하도록 설정
	this->PrimaryActorTick.bCanEverTick= true;

	// -> 설명 리마인드
	// -> 는 포인터(pointer)가 가리키는 객체의 멤버에 접근할 때 쓰는 연산자

}

// 게임 시작 시 또는 액터가 스폰될 때 실행되는 함수
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// 매 프레임마다 실행됨 (CanEverTick = true 상태일 때만)
void AMyPlayer::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (PC)
	{
		FVector Direction = FVector::ZeroVector;

		if (PC->IsInputKeyDown(EKeys::W))
		{
			Direction += GetActorForwardVector();
		}
		if (PC->IsInputKeyDown(EKeys::S))
		{
			Direction -= GetActorForwardVector();
		}
		if (PC->IsInputKeyDown(EKeys::D))
		{
			Direction += GetActorRightVector();
		}
		if (PC->IsInputKeyDown(EKeys::A))
		{
			Direction -= GetActorRightVector();
		}

		if (!Direction.IsZero())
		{
			AddActorWorldOffset(Direction.GetSafeNormal() * 300 * deltaTime);
		}
	}
}

