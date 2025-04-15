#include <stdio.h>

void swapPointers(int *a, int *b) {
    int *temp = *a;  
    *a = *b;  
    *b = temp;  
}
int main() {
    int a, b;
    printf("Nhap gia tri cua a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cua b: ");
    scanf("%d", &b);
    printf("Truoc khi hoan doi: a = %d, b = %d\n", a, b);
    swapPointers(&a, &b);  
    printf("Sau khi hoan doi: a = %d, b = %d\n", a, b);
    return 0;
}

