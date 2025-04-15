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
            c[i][j] = 0;  // Kh?i t?o m?i ph?n t? tích là 0
            for (int k = 0; k < colA; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int m, n, p, q;
    
    // Nh?p kích thu?c ma tr?n A và B
    printf("Nhap so hang va so cot cua ma tran A (m x n): ");
    scanf("%d%d", &m, &n);
    printf("Nhap so hang va so cot cua ma tran B (p x q): ");
    scanf("%d%d", &p, &q);

    // Ki?m tra tính h?p l? c?a phép c?ng và phép nhân ma tr?n
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

    // Nh?p các ma tr?n A và B
    nhapMaTran(A, m, n);
    nhapMaTran(B, p, q);

    // Tính t?ng ma tr?n A và B
    tinhTongMaTran(A, B, C, m, n);
    printf("\nT?ng c?a ma tr?n A và B là:\n");
    inMaTran(C, m, n);

    // Tính tích ma tr?n A và B
    tinhTichMaTran(A, B, C, m, n, q);
    printf("\nTích c?a ma tr?n A và B là:\n");
    inMaTran(C, m, q);

    return 0;
}

