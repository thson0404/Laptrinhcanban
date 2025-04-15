#include <stdio.h>

int main() {
    int i, j, k, n, m, p;

    printf("Nhap so hang cua ma tran A (n): ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran A (m) = so hang cua ma tran B: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran B (p): ");
    scanf("%d", &p);

    int A[n][m], B[m][p], C[n][p];

    printf("Nhap ma tran A (%d x %d):\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Nhap ma tran B (%d x %d):\n", m, p);
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            C[i][j] = 0;
            for (k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Ma tran ket qua C = A x B (%d x %d):\n", n, p);
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;}
