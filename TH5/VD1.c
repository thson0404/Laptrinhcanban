#include <stdio.h>

void main() {
    int n; 
    int num[100]; 
    int desnum[100], k; 
    int i, j, temp; 

    printf("\nEnter the total number of marks to be entered: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter the marks of student %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (k = 0; k < n; k++) {
        desnum[k] = num[k];
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (desnum[i] < desnum[j]) {
                temp = desnum[i];
                desnum[i] = desnum[j];
                desnum[j] = temp;
            }
        }
    }

    printf("\nThe sorted marks in descending order are:\n");
    for (i = 0; i < n; i++) {
        printf("Number at [%d] is %d\n", i, desnum[i]);
    }
}

