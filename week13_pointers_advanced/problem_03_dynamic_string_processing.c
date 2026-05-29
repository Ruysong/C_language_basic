#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3번. 설계:
main 함수에서 원본 문자열 src를 준비한다.
StringCopy 함수에 원본 문자열 src를 전달한다.
StringCopy 함수는 원본 문자열의 길이를 구한다.
문자열 길이보다 1개 더 큰 char 배열을 동적 할당한다.
동적 할당한 배열에 원본 문자열을 복사한다.
복사된 문자열의 시작 주소를 반환한다.
main 함수에서 복사된 문자열을 출력한다.
동적 할당한 메모리를 해제한다.
*/

char* StringCopy(char* src);

int main(void)
{
    char* src = "Hello";
    char* dst;

    dst = StringCopy(src);

    printf("원본 문자열: %s\n", src);
    printf("복사 문자열: %s\n", dst);

    free(dst);

    return 0;
}

char* StringCopy(char* src)
{
    char* dst;
    int len;

    len = strlen(src);

    dst = (char*)malloc(sizeof(char) * (len + 1));

    strcpy(dst, src);

    return dst;
}
