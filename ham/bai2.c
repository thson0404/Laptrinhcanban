#include <stdio.h>

int factorial(int n) {
    if (n == 0) 
        return 1;
    else
        return n * factorial(n - 1);  
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Giai thua khong ton tai cho n < 0\n");
    } else {
        printf("%d! = %d\n", n, factorial(n));  
    }

    return 0;
}

