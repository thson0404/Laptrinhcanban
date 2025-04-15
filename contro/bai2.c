#include <stdio.h>

int main() {
	int i;
    int arr[10];  
    int *ptr = arr;  

    printf("Nhap 10 so nguyen:\n");
    for (i = 0; i < 10; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]); 
    }


    printf("\nCac phan tu trong mang la:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));  
    }
    printf("\n");

    return 0;
}

