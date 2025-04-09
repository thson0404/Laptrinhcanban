#include <stdio.h>
int main() {
    int cnt = 0, num;
    do {
        printf("\nEnter a Number: ");
        scanf("%d", &num);
        printf("Number is: %d\n", num);
        cnt++;
    } while (num != 0);

    printf("\nThe total numbers entered were: %d\n", cnt - 1);  

    return 0;
}

