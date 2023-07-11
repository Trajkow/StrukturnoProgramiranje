#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int temp = n - 1;

    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int num = 0, sum = 0, flag = 0, counter = 0;
    for (int i = 0; i < n; ++i) {
        num = matrix[i][i];
        for (int j = i + 1; j < n; ++j) {
            sum += matrix[i][j];
        }
        if (counter == temp) {
            break;
        }
        if (sum == num) {
            flag = 1;
            counter++;
        } else {
            flag = 0;
            counter++;
        }
        sum = 0;
    }

    if (flag) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("-1");
    }

    return 0;
}