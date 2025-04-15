#include <stdio.h>

int main() {
    int m, n;

    printf("Nhap so hang (m): ");
    scanf("%d", &m);
    printf("Nhap so cot (n): ");
    scanf("%d", &n);

    int i, j, A[m][n], B[m][n], Sum[m][n];

    printf("Nhap ma tran A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Nhap ma tran B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Ma tran tong (A + B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
