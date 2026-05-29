#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 4번문제, // 메인함수에서 문자 하나를 입력받고, FindCharType 함수에 전달하여 문자 종류를 판별한다.
// FindCharType 함수에서는 switch문을 이용해 스페이스, 탭, 엔터를 먼저 구분하고,
// 그 외의 문자는 if문을 이용해 숫자 또는 알파벳인지 판별한다.
// 판별 결과에 따라 정수를 반환하고, 메인함수에서는 반환값에 맞는 문장으로 출력한다.

int FindCharType(char);
void PrintCharType(int);

int main() {
    char ch;
    int type;

    printf("문자 하나를 입력하시오: ");
    scanf("%c", &ch);

    type = FindCharType(ch);
    PrintCharType(type);

    return 0;
}

int FindCharType(char ch) {
    switch (ch) {
    case ' ':
        return 1;
    case '\t':
        return 2;
    case '\n':
        return 3;
    default:
        if ((ch >= '0' && ch <= '9') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z')) {
            return 4;
        }
        else {
            return 0;
        }
    }
}

void PrintCharType(int type) {
    switch (type) {
    case 1:
        printf("스페이스 키가 입력되었습니다.\n");
        break;
    case 2:
        printf("탭 키가 입력되었습니다.\n");
        break;
    case 3:
        printf("엔터 키가 입력되었습니다.\n");
        break;
    case 4:
        printf("숫자 키 또는 알파벳 키가 입력되었습니다.\n");
        break;
    default:
        printf("그 밖의 키가 입력되었습니다.\n");
        break;
    }
}
