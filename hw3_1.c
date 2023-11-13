#include <stdio.h>

void clear_stdin()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int number;
    printf("Enter a positive number: ");
    scanf("%d", &number);
    clear_stdin();
    char new_byte;
    printf("\nEnter a number to replace the third byte: ");
    scanf("%c", &new_byte);

    // Указатель на начало числа
    char *byte_ptr = (char *)&number;
    // Переходим к третьему байту (индекс 2, так как индексация начинается с 0)
    byte_ptr += 2;
    // Заменяем значение третьего байта
    *byte_ptr = new_byte;

    // Выводим результат
    printf("The original number after replacing the third byte: %d\n", number);

    return 0;
}