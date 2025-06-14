// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

// ������
AMyPlayer::AMyPlayer()
{
 	// �� ���Ͱ� �� �����Ӹ��� Tick() �Լ��� ȣ���ϵ��� ����
	this->PrimaryActorTick.bCanEverTick= true;

	// -> ���� �����ε�
	// -> �� ������(pointer)�� ����Ű�� ��ü�� ����� ������ �� ���� ������

}

// ���� ���� �� �Ǵ� ���Ͱ� ������ �� ����Ǵ� �Լ�
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// �� �����Ӹ��� ����� (CanEverTick = true ������ ����)
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

