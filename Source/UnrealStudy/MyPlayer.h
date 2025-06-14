// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"   
#include "MyPlayer.generated.h"
UCLASS()
class UNREALSTUDY_API AMyPlayer : public APawn
{
	GENERATED_BODY()

	// 구분	AActor	APawn
	// 상속 관계	AActor가 기반 클래스	| APawn은 AActor를 상속
	// 대표 목적	모든 월드 오브젝트의 기본	| 플레이어나 AI가 조종할 수 있는 캐릭터용
	// 입력 처리	❌ 직접 조종 안 됨	|  ✅ PlayerController로 조종 가능
	// 카메라 · 이동 기능	❌ 없음 | ✅ Controller, MovementComponent, Possess 지원
	// 예시	문, 트리, 폭탄, 투사체 등	| 캐릭터, AI 몬스터, 플레이어 유닛 등
	// Possess 가능	❌	✅

public:	
	// 생성자
	AMyPlayer();

protected:
	// 게임 시작 시 또는 액터가 스폰될 때 실행되는 함수
	virtual void BeginPlay() override;

public:	
	// 매 프레임마다 실행됨 (CanEverTick = true 상태일 때만)
	virtual void Tick(float deltaTime) override;

	//// 이동 함수
	//void MoveForward(float Value);
	//void MoveRight(float Value);

private:
	UPROPERTY(EditAnywhere)
	float _moveSpeed = 300.0f;
};