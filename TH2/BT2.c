#include <stdio.h>

int main() {
    int x, y;

    printf("x = (2 + 3) * 6 = %d\n", (2 + 3) * 6);
    printf("x = (12 + 6) / 2 * 3 = %d\n", (12 + 6) / 2 * 3);
    printf("y = x = (2 + 3) / 4 = %d, X = %d\n", (x = (2 + 3) / 4), x);
    printf("y = 3 + 2 * (x = 7 / 2) = %d, x = %d\n", (y = 3 + 2 * (x = 7 / 2)), x);
    printf("x = (int) 3.8 + 3.3 = %d\n", (int) 3.8 + 3.3);
    printf("x = (2 + 3) * 10.5 = %d\n", (2 + 3) * 10.5);
    printf("x = 3 / 5 * 22.0 = %d\n", 3 / 5 * 22.0);
    printf("x = 22.0 * 3 / 5 = %d\n", 22.0 * 3 / 5);

    return 0;}
