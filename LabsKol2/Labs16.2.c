#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int loop = 1, temp;
    if (n % 2 == 0) {
        temp = 1;
    } else {
        temp = 0;
    }
    for (int i = (n / 2.0) + 1; i < n; ++i) {
        loop = i;
        for (int j = (n / 2.0) - temp; j < loop; ++j) {
            matrix[i][j] -= matrix[i][j] * 2;
        }
        temp++;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}