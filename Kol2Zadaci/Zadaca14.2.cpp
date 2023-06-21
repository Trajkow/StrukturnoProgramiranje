#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int m = n * 2;

    int matrixA[n][m];
    int matrixAfirstHalf[n][n];
    int matrixAsecHalf[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrixAfirstHalf[i][j] = matrixA[i][j];
        }
        for (int j = n; j < m; ++j) {
            matrixAsecHalf[i][j-n] = matrixA[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrixAfirstHalf[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrixAsecHalf[i][j]);
        }
        printf("\n");
    }

    return 0;
}