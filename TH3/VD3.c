#include <stdio.h>

int main() {
    int num1 = 77;
	int num2 = 90;

    if (num1 == num2) {
        printf("\nThe Numbers are equal");
    } else if (num1 < num2) {
        printf("\nThe Larger Number is: %d", num2);
    } else {
        printf("\nThe Larger Number is: %d", num1);
    }

    return 0;
}

