#include <stdio.h>

void main() {
    int a, b, c, d;

    // Khoi tao gi� tri cho c�c bien
    a = 50;
    b = 24;
    c = 68;

    // T�nh to�n v� in ket qua
    d = a * b + c / 2;
    printf("\nThe value after a*b + c/2 is: %d", d);

    d = a % b;  // T�nh a mod b
    printf("\nThe value after a mod b is: %d", d);

    d = a * b - c;  // T�nh a*b - c
    printf("\nThe value after a*b - c is: %d", d);

    d = a / b + c;  // T�nh a/b + c
    printf("\nThe value after a/b + c is: %d", d);

    d = a + b * c;  // T�nh a + b*c
    printf("\nThe value after a + b*c is: %d", d);

    d = (a + b) * c;  // T�nh (a+b)*c
    printf("\nThe value after (a+b)*c is: %d", d);

    d = a * (b + c + (a - c) * b);  // T�nh a*(b+c+(a-c)*b)
    printf("\nThe value after a*(b+c+(a-c)*b) is: %d", d);

    return 0;
}

