#include <stdio.h>

int main() {
    int n, val = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    int i, j, layer, a[n][n];

    for (layer = 0; layer < (n + 1) / 2; layer++) {
        for (i = layer; i < n - layer; i++)
            a[layer][i] = val++;
        for (i = layer + 1; i < n - layer; i++)
            a[i][n - layer - 1] = val++;
        for (i = n - layer - 2; i >= layer; i--)
            a[n - layer - 1][i] = val++;
        for (i = n - layer - 2; i > layer; i--)
            a[i][layer] = val++;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }

    return 0;
}
