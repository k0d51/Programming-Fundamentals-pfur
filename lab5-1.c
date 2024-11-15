#include <stdio.h>

int main() {
    int n;
    printf("Enter natural n: ");
    scanf("%d", &n);
    printf("\n");
    
    float ans = 0.0;
    for (int i = 1; i <= n; i++) {
        
        float c = i * 11;
        ans = ans + 1/c;
        printf("%f", ans);
        printf(" %f", 1/c);
        printf("\n");
    }
    
    return 0;
}
