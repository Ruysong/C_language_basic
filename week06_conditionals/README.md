# Week 06 - 조건문

## 학습 주제

- if, if-else, switch 조건 분기

## 문제 목록

### problem_01_absolute_difference - 두 실수의 차 구하기

- 파일: `problem_01_absolute_difference.c`
- 요구사항:
  - 두 실수를 입력받는다.
  - 더 큰 수에서 작은 수를 빼 차이를 구한다.
  - if 문으로 값의 크기를 비교한다.

### problem_02_income_tax - 과세표준에 따른 세금 계산

- 파일: `problem_02_income_tax.c`
- 요구사항:
  - 과세표준 금액을 입력받는다.
  - 구간별 세율과 누진공제액을 적용한다.
  - if-else if 문으로 세금 구간을 판별한다.

### problem_03_average_score_grade - 평균 점수와 학점 판별

- 파일: `problem_03_average_score_grade.c`
- 요구사항:
  - 세 과목 점수를 입력받는다.
  - 입력값이 0~100 범위인지 검사한다.
  - 평균 점수를 계산하고 학점을 판별한다.

### problem_04_character_type - 문자 종류 판별

- 파일: `problem_04_character_type.c`
- 요구사항:
  - 문자 하나를 입력받는다.
  - 공백, 탭, 엔터, 숫자, 알파벳 등을 구분한다.
  - switch 문과 if 문을 함께 사용한다.

### problem_05_read_three_digit_number - 세 자리 정수 읽기

- 파일: `problem_05_read_three_digit_number.c`
- 요구사항:
  - 0~999 사이의 양의 정수를 입력받는다.
  - 백의 자리, 십의 자리, 일의 자리로 분리한다.
  - 각 자리 숫자를 순서대로 출력한다.

## 실행 방법

```bash
gcc problem_01_absolute_difference.c -o problem_01_absolute_difference
./problem_01_absolute_difference
```

