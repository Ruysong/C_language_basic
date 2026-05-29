# C Language Basic

시스템프로그래밍 수업에서 진행한 C 언어 기초 실습 코드를 주차별로 정리한 저장소입니다.

수업 자료 PDF 원문은 포함하지 않았고, 각 주차 README에는 문제 요구사항을 요약해 기록했습니다. 코드에 있던 이름과 학번 등 개인정보는 공개용 정리 과정에서 제거했습니다.

## 구성

- [week03_functions](week03_functions/): Week 03 - 데이터와 함수 (3 problems)
- [week04_input_output](week04_input_output/): Week 04 - 입출력문의 활용 (2 problems)
- [week05_operators](week05_operators/): Week 05 - 기본 연산자 (5 problems)
- [week06_conditionals](week06_conditionals/): Week 06 - 조건문 (5 problems)
- [week07_loops](week07_loops/): Week 07 - 반복문 (6 problems)
- [week09_arrays](week09_arrays/): Week 09 - 배열 기본 (4 problems)
- [week10_arrays_and_functions](week10_arrays_and_functions/): Week 10 - 배열과 함수 (6 problems)
- [week11_strings](week11_strings/): Week 11 - 문자열 (6 problems)
- [week12_pointers_basic](week12_pointers_basic/): Week 12 - 포인터 기본 (4 problems)
- [week13_pointers_advanced](week13_pointers_advanced/): Week 13 - 포인터 활용 (3 problems)

## 제외한 항목

- 1주차, 2주차: 공개용 정리 대상 코드가 없거나 기초 환경 확인 수준이라 제외
- 8주차: 시험 주차로 실습 코드 없음
- PDF 수업자료, Visual Studio 프로젝트 파일, 빌드 산출물

## 빌드 예시

각 문제 파일은 독립 실행 가능한 C 파일입니다.

```bash
gcc week10_arrays_and_functions/problem_01_average_array.c -o average_array
./average_array
```
