# Week 14 - 구조체

## 학습 주제

- 구조체 선언과 구조체 변수, 구조체 배열, 구조체 포인터

## 문제 목록

### problem_01_line_length - 선분의 길이 구하기

- 파일: `problem_01_line_length.c`
- 요구사항:
  - 2차원 점을 표현하는 `pointT` 구조체를 선언한다.
  - 시작점과 끝점을 갖는 `lineT` 구조체를 선언한다.
  - 한 선분의 좌표를 입력받는다.
  - 두 점 사이의 거리를 계산해 선분의 길이를 출력한다.

### problem_02_car_management - 차량 정보 관리

- 파일: `problem_02_car_management.c`
- 요구사항:
  - 모델명, 제조 연도, 총 주행거리를 저장하는 `Car` 구조체를 선언한다.
  - 차량 정보를 입력하고 출력하는 단위 함수를 작성한다.
  - 차량의 주행거리를 증가시키고, 제조 연도가 2년을 넘었는지 확인한다.
  - 최대 5대의 차량 정보를 구조체 배열로 관리한다.

## 실행 방법

```bash
gcc problem_01_line_length.c -o problem_01_line_length -lm
./problem_01_line_length
```
