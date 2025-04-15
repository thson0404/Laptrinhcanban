#include <stdio.h>

int main() {
    int arr[10];  
    int *ptr = arr;  
    int max, min;
    int i;

    printf("Nhap 10 so nguyen:\n");
    for (i = 0; i < 10; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]); 
    }


    max = min = *ptr;


    for (i = 1; i < 10; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);  
        }
        if (*(ptr + i) < min) {
            min = *(ptr + i);  
        }
    }

    printf("\nPhan tu lon nhat: %d\n", max);
    printf("Phan tu nho nhat: %d\n", min);

    return 0;
}

