#include <stdio.h>

void main() {
    int n; 
    int arr[100], reversedArr[100]; 
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        reversedArr[i] = arr[n - i - 1]; 
    }

    printf("\nOriginal Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", reversedArr[i]);
    }
}

