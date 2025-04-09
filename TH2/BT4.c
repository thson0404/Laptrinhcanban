#include <stdio.h>

int main() {
    float centimeters, inches, feet;

    printf("Nhap vao so centimet: ");
    scanf("%f", &centimeters);
    inches = centimeters/2.54;
	printf("%.1f centimet tuong duong %.1f inches.\n", centimeters, inches);
    feet = inches/12;
    printf("%.1f centimet tuong duong %.1f feet.\n", centimeters, feet);
    return 0;
}

