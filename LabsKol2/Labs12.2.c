#include <stdio.h>

int main() {

    int m, n;
    scanf("%d%d", &m, &n);

    int matrix[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int matrix2[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int counter = 0;
    int mainCounter = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                if (matrix[k][i] == matrix2[k][j]) {
                    counter++;
                }
            }
            if (counter == m) {
                mainCounter++;
            }
            counter = 0;
        }
    }

    printf("%d", mainCounter);

    return 0;
}