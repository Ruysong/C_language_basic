# Week 07 - 반복문

## 학습 주제

- for/while 반복과 입력 검증

## 문제 목록

### problem_01_print_filtered_odd_numbers - 특정 배수를 제외한 홀수 출력

- 파일: `problem_01_print_filtered_odd_numbers.c`
- 요구사항:
  - 시작값, 끝값, 제외할 배수를 입력받는다.
  - 범위 안의 홀수 중 특정 배수를 제외하고 출력한다.
  - 반복문과 조건문을 함께 사용한다.

### problem_02_fuel_efficiency_loop_practice - 주행 거리와 연비 계산

- 파일: `problem_02_fuel_efficiency_loop_practice.c`
- 요구사항:
  - 출발지점, 도착지점, 사용 연료량을 입력받는다.
  - 연료 1리터당 주행거리를 계산한다.
  - 입력값을 기반으로 계산 함수를 호출한다.

### problem_03_student_grades - 여러 학생의 평균과 학점 출력

- 파일: `problem_03_student_grades.c`
- 요구사항:
  - 학생 5명의 세 과목 점수를 입력받는다.
  - 각 학생의 평균을 계산한다.
  - 평균에 따라 학점을 출력한다.

### problem_04_positive_age_input - 양의 정수 나이 입력 검증

- 파일: `problem_04_positive_age_input.c`
- 요구사항:
  - 나이를 입력받는다.
  - 0 이하 값이 들어오면 다시 입력받는다.
  - 입력된 나이로 성년 여부를 판별한다.

### problem_05_read_number_in_korean - 숫자 자리 읽기

- 파일: `problem_05_read_number_in_korean.c`
- 요구사항:
  - 정수를 입력받는다.
  - 각 자리 숫자를 분리한다.
  - 분리한 숫자를 한글 표현으로 출력한다.

### problem_06_repeat_until_non_positive - 양수가 아닐 때까지 반복 입력

- 파일: `problem_06_repeat_until_non_positive.c`
- 요구사항:
  - 정수를 반복해서 입력받는다.
  - 0 이하 값이 입력되면 반복을 종료한다.
  - 입력된 양수 값들을 조건에 맞게 처리한다.

## 실행 방법

```bash
gcc problem_01_print_filtered_odd_numbers.c -o problem_01_print_filtered_odd_numbers
./problem_01_print_filtered_odd_numbers
```

