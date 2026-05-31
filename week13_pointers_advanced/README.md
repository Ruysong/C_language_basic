# Week 13 - 포인터 활용

## 학습 주제

- 동적 메모리와 문자열 포인터

## 문제 목록

### problem_01_find_max_position - 최대값 요소의 주소 찾기

- 파일: `problem_01_find_max_position.c`
- 요구사항:
  - 임의 길이의 정수 배열을 함수에 전달한다.
  - 배열에서 최대값을 갖는 요소를 찾는다.
  - 최대값 요소의 주소를 이중 포인터 매개변수로 호출자에게 전달한다.
  - 호출자는 전달받은 주소를 통해 배열 안의 최대값을 변경할 수 있다.

### problem_02_dynamic_array_processing - 동적 배열 처리

- 파일: `problem_02_dynamic_array_processing.c`
- 요구사항:
  - 동적 할당한 배열에 값을 저장한다.
  - 포인터를 사용해 배열 데이터를 처리한다.
  - 처리 결과를 출력하고 메모리를 해제한다.

### problem_03_dynamic_string_processing - 동적 문자열 처리

- 파일: `problem_03_dynamic_string_processing.c`
- 요구사항:
  - 문자열 처리를 위해 필요한 메모리를 준비한다.
  - 문자열 함수와 포인터를 활용한다.
  - 처리 결과를 출력한다.

### problem_04_dynamic_line_input - 한 줄 문자열 동적 입력

- 파일: `problem_04_dynamic_line_input.c`
- 요구사항:
  - 표준 입력에서 한 줄의 문자열을 입력받는다.
  - 입력 길이에 맞게 동적으로 메모리를 확보한다.
  - 반환받은 문자열을 출력하고 사용한 메모리를 해제한다.

## 실행 방법

```bash
gcc problem_01_find_max_position.c -o problem_01_find_max_position
./problem_01_find_max_position
```

