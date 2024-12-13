#include <stdio.h>
#include <limits.h>

int main() {
    int N;

    printf("Введите N: ");
    scanf("%d", &N);

    int A[N];

    printf("Введите %d элементов массива:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int min = INT_MAX;

    for (int i = 1; i <= N; i += 2) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    if (min == INT_MAX) {
        return 0;
    } else {
        printf("Минимальный элемент: %d\n", min);
    }
	
}

