#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Problem 4: GetLine

Design:
- GetLine reads one full line from standard input.
- It grows a dynamically allocated buffer as needed while reading characters.
- The newline character is not stored in the returned string.
- The returned string is null-terminated and must be freed by the caller.
- If memory allocation fails or no input is available, GetLine returns NULL.
*/

char* GetLine(void);

int main(void)
{
    char* msg;

    printf("Enter a line: ");
    msg = GetLine();

    if (msg == NULL) {
        printf("Input failed.\n");
        return 1;
    }

    printf("Input string: %s\n", msg);

    free(msg);

    return 0;
}

char* GetLine(void)
{
    int ch;
    int length = 0;
    int capacity = 16;
    char* line = (char*)malloc(sizeof(char) * capacity);

    if (line == NULL) {
        return NULL;
    }

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (length + 1 >= capacity) {
            int newCapacity = capacity * 2;
            char* resized = (char*)realloc(line, sizeof(char) * newCapacity);

            if (resized == NULL) {
                free(line);
                return NULL;
            }

            line = resized;
            capacity = newCapacity;
        }

        line[length] = (char)ch;
        length++;
    }

    if (ch == EOF && length == 0) {
        free(line);
        return NULL;
    }

    line[length] = '\0';

    return line;
}
