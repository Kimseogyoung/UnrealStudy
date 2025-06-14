# 🎮 Unity vs Unreal 용어 비교 (초심자용)

Unreal Engine의 용어와 구조를 Unity 기준으로 쉽게 이해할 수 있도록 정리했습니다.

---

## ✅ 핵심 개념 비교

| Unity 용어 | Unreal 용어 | 설명 |
|------------|-------------|------|
| **Scene** | **Level** | 맵/월드를 구성하는 단위. 게임 씬, 스테이지 역할 |
| GameObject | Actor | 씬/레벨에 존재하는 모든 오브젝트 |
| MonoBehaviour Script | Actor Component / UObject | 기능 단위 스크립트 |
| Prefab | Blueprint | 재사용 가능한 객체 템플릿 (스크립트+비주얼 포함) |
| Rigidbody | MovementComponent / Physics | 물리 기반 움직임 |
| Input.GetKey | BindAxis / Input Mapping / EKeys | 키보드 입력 처리 |
| Scene View | Viewport | 에디터에서 3D 공간 편집하는 화면 |
| Hierarchy | World Outliner | 현재 레벨에 있는 모든 액터 목록 |
| Project 창 | Content Browser | 프로젝트 리소스/에셋 관리 창 |

---

## 🔄 용어 대응 예시

| Unity 기준 표현 | Unreal 대응 표현 |
|------------------|------------------|
| 씬 새로 만들자 | → New Level 만들자 |
| 프리팹 만들자 | → Blueprint Actor 만들자 |
| Rigidbody로 이동 | → CharacterMovementComponent 사용 |
| Scene에 배치함 | → Level에 액터 배치함 |
| GameObject에 스크립트 붙이기 | → Actor에 컴포넌트 추가 또는 상속 클래스 작성 |

---

## 🎯 실전 매핑 요약

| Unreal | Unity | 기억법 |
|--------|-------|--------|
| `Level` | `Scene` | 게임 맵 하나 |
| `Actor` | `GameObject` | 오브젝트 단위 |
| `Blueprint` | `Prefab + Script` | 재사용 가능한 오브젝트 (UI/로직 포함) |
| `Component` | `MonoBehaviour` | 기능 확장 요소 (예: 카메라, 입력 등) |

---

## 💡 초심자를 위한 팁

- Unreal은 **C++ + Blueprint 병행** 가능
- `Actor`는 위치 정보 있는 모든 물체, `Pawn`은 **조작 가능한 Actor**
- `Level`은 씬의 개념이며, 여러 레벨을 로드해서 하나의 월드처럼 사용 가능 (서브 레벨 구조)

---
