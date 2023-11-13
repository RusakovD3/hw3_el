#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ptr = arr;  
    printf("Massiv: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", *ptr);
        ++ptr;  // Переход к следующему элементу с использованием арифметики указателей
    }
    printf("\n");
    
    return 0;
}
