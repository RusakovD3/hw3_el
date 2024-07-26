#include <stdio.h>
#include <stdlib.h>

int main() {
    float x = 5.0;
    printf("x = %f, ", x);

    float y = 6.0;
    printf("y = %f\n", y);

    // TODO: отредактируйте эту строку, и только правую часть уравнения
    float* xp = &y;
    float* yp = &y;

    printf("Result: %.2f\n", *xp + *yp);
    exit(EXIT_SUCCESS);
}