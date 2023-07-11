#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    int matrix[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0, counter = 0, loop = 0;
    loop = n - 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < loop; ++j) {
            sum += matrix[i][j];
            counter++;
        }
        float average = (float) sum / (float) counter;
        for (int j = loop+1; j < n; ++j) {
            if (average > matrix[i][j]) {
                matrix[i][j] = -1;
            }
        }
        loop--;
        sum = 0;
        counter = 0;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}