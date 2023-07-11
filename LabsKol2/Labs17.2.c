#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m, n;
    scanf("%d%d", &m, &n);

    float matrix[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%f", &matrix[i][j]);
        }
    }

    float min = 9999;
    float max = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[j][i] < min) {
                min = matrix[j][i];
            }
            if (matrix[j][i] > max) {
                max = matrix[j][i];
            }
        }
        for (int j = 0; j < m; ++j) {
            matrix[j][i] = (matrix[j][i] - min) / (max - min);
        }
        min = 9999;
        max = 0;
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
//            printf("%.2f ", ceilf(matrix[i][j] * 100) / 100);
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}