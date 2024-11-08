// lab3-1.c
#include <stdio.h>

int main() {
    printf("Введите 2 двухзначных нечетных числа, кратных 13\n");
    int a;
    int b;
    scanf("%d%d", &a, &b);
    
    if (a % 13 == 0 && a % 2 != 0) {
        if (b % 13 == 0 && b % 2 != 0) {
            if ((a > 9 && a < 100)||(a < -9 && a > -100)) {
                if ((b > 9 && b < 100)||(b < -9 && b > -100)) {
                    printf("%d", a * b);
                }
                else { printf("Wrong number! 4"); }
            }
            else { printf("Wrong number! 3 "); }
        }
        else { printf("Wrong number! 2"); }
    }
    else { printf("Wrong number! 1"); }
    
    return 0;

}
