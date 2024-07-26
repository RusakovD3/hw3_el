#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

char* findSubstring(const char* str, const char* substr) {
    int strLen = strlen(str);
    int substrLen = strlen(substr);
    int j;

    for (int i = 0; i <= strLen - substrLen; ++i) {
        for (j = 0; j < substrLen; ++j) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == substrLen) {
            return (char*)&str[i];
        }
    }
    return NULL;
}

int main() {
    char str[MAX_LENGTH];
    char substr[MAX_LENGTH];

    printf("Enter str: ");
    if (fgets(str, MAX_LENGTH, stdin) == NULL) {
        printf("fgets str");
        exit(EXIT_FAILURE);
    }
    if (substr[strlen(str) - 1] == '\n') substr[strlen(str) - 1] = '\0';

    printf("Enter sunstr: ");
    if (fgets(substr, MAX_LENGTH, stdin) == NULL) {
        printf("fgets substr");
        exit(EXIT_FAILURE);
    }
    if (substr[strlen(substr) - 1] == '\n') substr[strlen(substr) - 1] = '\0';

    char* result = findSubstring(str, substr);
    if (result != NULL) {
        int ind = result - str;
        printf("Substring found. The beginning of the substring is : (%d) %p\n",
               ind, result);
    } else {
        printf("Substring not found.\n");
    }
    exit(EXIT_SUCCESS);
}
