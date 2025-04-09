#include <stdio.h>

int main() {
    float M1, M2, M3, avg;  
    char grade;  

    printf("Nhap diem mon M1: ");
    scanf("%f", &M1);
    
    printf("Nhap diem mon M2: ");
    scanf("%f", &M2);

    printf("Nhap diem mon M3: ");
    scanf("%f", &M3);

    avg = (M1 + M2 + M3) / 3;

    if (avg >= 90) {
        grade = 'E+';  
    } else if (avg >= 80) {
        grade = 'E';   
    } else if (avg >= 70) {
        grade = 'A+';  
    } else if (avg >= 60) {
        grade = 'A';   
    } else if (avg >= 50) {
        grade = 'B+';  
    } else {
        grade = 'F'; 
    }

  
    printf("\nAverage score: %.2f\n", avg);
    printf("Student grade: %c\n", grade);

    return 0;  
}

