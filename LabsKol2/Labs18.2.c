#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("GRESKA");
        return 0;
    }

    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int loop = n - 1;
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] += matrix[loop][j];
        }
        loop--;
    }

    loop = n - 1;
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            matrix[i][j] += matrix[i][loop];
            loop--;
        }
        loop = n - 1;
    }

    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}