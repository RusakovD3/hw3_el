#include <stdio.h>
#include <stdlib.h>

void clear_stdin() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main() {
    int number;
    printf("Enter a positive number: ");
    if (scanf("%d", &number) != 1) {
        perror("Input num error");
        exit(EXIT_FAILURE);
    }
    clear_stdin();
    char new_byte;
    printf("Enter a number to replace the third byte: ");
    if (scanf("%c", &new_byte) != 1) {
        perror("Input char error");
        exit(EXIT_FAILURE);
    }
    printf("\n");

    // Указатель на начало числа
    char* byte_ptr = (char*)&number;
    // Переходим к третьему байту (индекс 2, так как индексация начинается с 0)
    byte_ptr += 2;
    // Заменяем значение третьего байта
    *byte_ptr = new_byte;

    // Выводим результат
    printf("The original number after replacing the third byte: %d\n", number);

    exit(EXIT_SUCCESS);
}