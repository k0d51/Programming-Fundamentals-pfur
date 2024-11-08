// lab3-1.c
#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    switch (i) {
        case 1:
            printf("Пики");
            break;
        case 2:
            printf("Трефы");
            break;
        case 3:
            printf("Бубны");
            break;
        case 4:
            printf("Червы");
            break;
        default :
            printf("Неправильный ввод!");
            break;
    }
    
    return 0;
