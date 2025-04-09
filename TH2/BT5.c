#include <stdio.h>

int main() {
    int iResult, a = 10, b = 8, c = 6, d = 5, e = 2;

    iResult = a - b - c - d;  
    printf("Result 1: %d\n", iResult);

    iResult = a - b + c - d;  
    printf("Result 2: %d\n", iResult);

    iResult = a + b / c / d;  
    printf("Result 3: %d\n", iResult);

    iResult = a + b / c * d; 
    printf("Result 4: %d\n", iResult);

    iResult = a / b * c * d; 
    printf("Result 5: %d\n", iResult);

    iResult = a % b / c * d;  
    printf("Result 6: %d\n", iResult);

    iResult = a % b % c % d;  
    printf("Result 7: %d\n", iResult);

    iResult = a - (b - c) - d;  
    printf("Result 8: %d\n", iResult);

    iResult = (a - (b - c)) - d;  
    printf("Result 9: %d\n", iResult);

    iResult = a - ((b - c) - d);  
    printf("Result 10: %d\n", iResult);

    iResult = a % (b % c) * d * e; 
    printf("Result 11: %d\n", iResult);

    iResult = a + (b - c) * d - e; 
    printf("Result 12: %d\n", iResult);

    iResult = (a + b) * c + d * e;  
    printf("Result 13: %d\n", iResult);

    iResult = (a + b) * (c / d) % e;  
    printf("Result 14: %d\n", iResult);

    return 0;
}

