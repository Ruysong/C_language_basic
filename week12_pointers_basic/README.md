# Week 12 - 포인터 기본

## 학습 주제

- 포인터를 이용한 값 전달과 배열 접근

## 문제 목록

### problem_01_split_time_with_pointers - 초 단위 시간을 시/분/초로 분할

- 파일: `problem_01_split_time_with_pointers.c`
- 요구사항:
  - 초 단위 시간을 입력받는다.
  - 포인터 매개변수로 시, 분, 초 값을 호출자에게 전달한다.
  - 여러 결과값을 반환하는 포인터 사용법을 연습한다.

### problem_02_sixtieth_birthday - 만 60세 생일 계산

- 파일: `problem_02_sixtieth_birthday.c`
- 요구사항:
  - 생년월일을 입력받는다.
  - 포인터를 사용해 연, 월, 일을 함수 밖으로 전달한다.
  - 만 60세가 되는 날짜를 출력한다.

### problem_03_sum_range_by_index - 인덱스 범위의 배열 합계

- 파일: `problem_03_sum_range_by_index.c`
- 요구사항:
  - 정수 배열과 시작/끝 인덱스를 사용한다.
  - 해당 인덱스 범위의 합을 구한다.
  - 배열과 포인터 표기법을 함께 연습한다.

### problem_04_sum_range_by_pointer - 포인터 주소 범위의 배열 합계

- 파일: `problem_04_sum_range_by_pointer.c`
- 요구사항:
  - 배열 요소의 시작 주소와 끝 주소를 전달한다.
  - 두 포인터 사이의 원소 합을 계산한다.
  - 포인터 증가 연산을 사용한다.

## 실행 방법

```bash
gcc problem_01_split_time_with_pointers.c -o problem_01_split_time_with_pointers
./problem_01_split_time_with_pointers
```

