// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int M = 3; // row
    int N = 3; // column
    int matrx[3][3] = {{4,5,6}, {2,2,3}, {11,52,1}};
    
    int maxs = 0;
    int max_row_index = 0;
    
    for (int i = 0; i < M; i++) {
        int row_sum = 0;
        for (int j = 0; j < N; j++) {
            row_sum += matrx[i][j];
        }
        if (row_sum > maxs) {
            maxs = row_sum;
            max_row_index = i;
        }
    }
        
    printf("Номер строки: %d\n", max_row_index + 1); 
    printf("сумма: %d\n", maxs);
    
    return 0;
}
