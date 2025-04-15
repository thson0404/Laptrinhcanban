#include <stdio.h>

void nhapMaTran(int a[][10], int row, int col) {
    printf("Nhap ma tran (%d x %d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void inMaTran(int a[][10], int row, int col) {
    printf("Ma tran:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}

void tinhTongMaTran(int a[][10], int b[][10], int c[][10], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void tinhTichMaTran(int a[][10], int b[][10], int c[][10], int rowA, int colA, int colB) {
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            c[i][j] = 0;  // Kh?i t?o m?i ph?n t? t�ch l� 0
            for (int k = 0; k < colA; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int m, n, p, q;
    
    // Nh?p k�ch thu?c ma tr?n A v� B
    printf("Nhap so hang va so cot cua ma tran A (m x n): ");
    scanf("%d%d", &m, &n);
    printf("Nhap so hang va so cot cua ma tran B (p x q): ");
    scanf("%d%d", &p, &q);

    // Ki?m tra t�nh h?p l? c?a ph�p c?ng v� ph�p nh�n ma tr?n
    if (m != p) {
        printf("Khong the tinh tong ma tran: So hang cua A phai = so hang cua B.\n");
        return 1;
    }
    if (n != q) {
        printf("Khong the tinh tong ma tran: So cot cua A phai = so cot cua B.\n");
        return 1;
    }
    if (n != p) {
        printf("Khong the tinh tich ma tran: So cot cua A phai = so hang cua B.\n");
        return 1;
    }

    int A[10][10], B[10][10], C[10][10];

    // Nh?p c�c ma tr?n A v� B
    nhapMaTran(A, m, n);
    nhapMaTran(B, p, q);

    // T�nh t?ng ma tr?n A v� B
    tinhTongMaTran(A, B, C, m, n);
    printf("\nT?ng c?a ma tr?n A v� B l�:\n");
    inMaTran(C, m, n);

    // T�nh t�ch ma tr?n A v� B
    tinhTichMaTran(A, B, C, m, n, q);
    printf("\nT�ch c?a ma tr?n A v� B l�:\n");
    inMaTran(C, m, q);

    return 0;
}

