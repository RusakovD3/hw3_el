#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

char* findSubstring(const char* str, const char* substr) {
    int strLen = strlen(str);
    int substrLen = strlen(substr);

    for (int i = 0; i <= strLen - substrLen; ++i) {
        int j;
        for (j = 0; j < substrLen; ++j) {
            if (str[i + j] != substr[j])
                break;
        }
        if (j == substrLen)
            return (char*)&str[i]; // Найдено совпадение, возвращаем указатель на начало подстроки
    }
    return NULL;
}

int main() {
    char str[MAX_LENGTH];
    char substr[MAX_LENGTH];

    printf("Enter str: ");
    fgets(str, MAX_LENGTH, stdin);
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    printf("Enter sunstr: ");
    fgets(substr, MAX_LENGTH, stdin);
    if (substr[strlen(substr) - 1] == '\n')
        substr[strlen(substr) - 1] = '\0';

    char* result = findSubstring(str, substr);
    if (result != NULL){
        int ind = result-str;
        printf("Substring found. The beginning of the substring is : (%d) %p\n", ind, result);
    } else
        printf("Substring not found.\n");

    return 0;
}
