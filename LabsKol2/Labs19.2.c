#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int matrix[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] < 0) {
                matrix[i][j] = matrix[i][j + 1] + matrix[i][j - 1] + matrix[i + 1][j] + matrix[i - 1][j];
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}