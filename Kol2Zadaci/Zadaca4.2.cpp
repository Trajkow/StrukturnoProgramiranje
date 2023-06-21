#include <stdio.h>

int main() {

    int n, m;
    scanf("%d%d", &n, &m);
    if (n < 1 || m >= 100) {
        printf("problem");
        return 0;
    }

    int matrix[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int nIndex, mIndex;
    scanf("%d%d", &nIndex, &mIndex);

    int first = 0, second = 0, third = 0, fourth = 0;

    for (int i = nIndex - 1; i >= 0; --i) {
        for (int j = mIndex; j < m; ++j) {
            first += matrix[i][j];
        }
    }

    for (int i = nIndex - 1; i >= 0; --i) {
        for (int j = mIndex - 1; j >= 0; --j) {
            second += matrix[i][j];
        }
    }

    for (int i = nIndex; i < n; ++i) {
        for (int j = mIndex - 1; j >= 0; --j) {
            third += matrix[i][j];
        }
    }

    for (int i = nIndex; i < n; ++i) {
        for (int j = mIndex; j < m; ++j) {
            fourth += matrix[i][j];
        }
    }

    printf("%d %d %d %d", first, second, third, fourth);

    return 0;
}