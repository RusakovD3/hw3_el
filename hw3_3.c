#include <stdio.h>
#include <stdlib.h>

#define ARR_SAIZE 10

int main() {
    int arr[ARR_SAIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* ptr = arr;
    printf("Massiv: ");
    for (int i = 0; i < ARR_SAIZE; ++i) {
        printf("%d ", *ptr);
        ++ptr;
    }
    printf("\n");

    exit(EXIT_SUCCESS);
}
