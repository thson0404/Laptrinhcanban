#include <stdio.h>

void main() {
    int a, b, c, d;

    // Khoi tao giá tri cho các bien
    a = 50;
    b = 24;
    c = 68;

    // Tính toán và in ket qua
    d = a * b + c / 2;
    printf("\nThe value after a*b + c/2 is: %d", d);

    d = a % b;  // Tính a mod b
    printf("\nThe value after a mod b is: %d", d);

    d = a * b - c;  // Tính a*b - c
    printf("\nThe value after a*b - c is: %d", d);

    d = a / b + c;  // Tính a/b + c
    printf("\nThe value after a/b + c is: %d", d);

    d = a + b * c;  // Tính a + b*c
    printf("\nThe value after a + b*c is: %d", d);

    d = (a + b) * c;  // Tính (a+b)*c
    printf("\nThe value after (a+b)*c is: %d", d);

    d = a * (b + c + (a - c) * b);  // Tính a*(b+c+(a-c)*b)
    printf("\nThe value after a*(b+c+(a-c)*b) is: %d", d);

    return 0;
}

