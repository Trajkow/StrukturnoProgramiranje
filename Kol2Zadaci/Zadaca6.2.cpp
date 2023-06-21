#include <stdio.h>

int main() {

    int m, n;
    scanf("%d%d", &m, &n);

    int matrix[m][n];

    int counter = 0;
    int sumCol = 0;
    int sumRow = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            if (matrix[i][j] == 1 && matrix[i][j + 1] == 1) {
                counter++;
            } else {
                if (counter >= 2) {
                    sumRow++;
                }
                counter = 0;
            }
        }
        if (counter >= 2) {
            sumRow++;
        }
        counter = 0;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == 1 && matrix[i + 1][j] == 1) {
                counter++;
            } else {
                if (counter >= 2) {
                    sumCol++;
                }
                counter = 0;
            }
        }
        if (counter >= 2) {
            sumCol++;
        }
        counter = 0;
    }


    printf("%d", sumRow + sumCol);

    return 0;
}