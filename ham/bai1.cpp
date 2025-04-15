#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);

    double kq = pow(x, y);  
    printf("%d^%d = %.0f\n", x, y, kq);

    return 0;
	}
