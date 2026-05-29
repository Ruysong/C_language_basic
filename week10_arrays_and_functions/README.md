# Week 10 - 배열과 함수

## 학습 주제

- 배열을 함수 매개변수로 전달

## 문제 목록

### problem_01_average_array - 배열 평균 구하기

- 파일: `problem_01_average_array.c`
- 요구사항:
  - 종료 값을 입력받기 전까지 정수 배열에 값을 저장한다.
  - 배열 원소를 출력한다.
  - 입력된 원소들의 평균을 계산한다.

### problem_02_compare_arrays - 두 배열 비교하기

- 파일: `problem_02_compare_arrays.c`
- 요구사항:
  - 두 배열의 원소를 비교한다.
  - 지정된 크기만큼 모든 원소가 같으면 1을 반환한다.
  - 비교 결과를 출력한다.

### problem_03_find_index - 배열에서 인덱스 찾기

- 파일: `problem_03_find_index.c`
- 요구사항:
  - 배열에서 특정 key 값을 찾는다.
  - 처음 발견된 인덱스를 반환한다.
  - 값이 없으면 -1을 반환한다.

### problem_04_delete_array_element - 배열 요소 삭제

- 파일: `problem_04_delete_array_element.c`
- 요구사항:
  - 삭제할 인덱스를 입력받는다.
  - 해당 위치 뒤의 원소들을 한 칸씩 앞으로 이동한다.
  - 삭제 후 배열 크기와 내용을 출력한다.

### problem_05_score_histogram - 성적 분포표 작성

- 파일: `problem_05_score_histogram.c`
- 요구사항:
  - 점수를 반복 입력받고 -1에서 종료한다.
  - 점수 구간별 도수를 계산한다.
  - 0~100점 범위의 히스토그램을 출력한다.

### problem_06_array_sum_table - 2차원 배열 합계 계산

- 파일: `problem_06_array_sum_table.c`
- 요구사항:
  - 2행 5열 데이터를 입력받는다.
  - 행 또는 열의 합계를 계산한다.
  - 2차원 배열을 사용해 표 형태 데이터를 처리한다.

## 실행 방법

```bash
gcc problem_01_average_array.c -o problem_01_average_array
./problem_01_average_array
```

