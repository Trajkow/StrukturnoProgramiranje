#include <stdio.h>

int main() {

    int matrix[10][10];

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int arr[10];
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int max = 0;
    int min = 99999;
    float average;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] == 1) {
            for (int j = 0; j < 10; ++j) {
                for (int k = i; k <= i; ++k) {
                    sum += matrix[j][k];
                }
            }
            printf("%d ", sum);
            sum = 0;
        } else if (arr[i] == 2) {
            for (int j = 0; j < 10; ++j) {
                for (int k = i; k <= i; ++k) {
                    sum += matrix[j][k];
                }
            }
            average = sum / 10.0;
            printf("%.2f ", average);
            sum = 0;
        } else if (arr[i] == 3) {
            for (int j = 0; j < 10; ++j) {
                for (int k = i; k <= i; ++k) {
                    if (max < matrix[j][k]) {
                        max = matrix[j][k];
                    }
                }
            }
            printf("%d ", max);
            max = 0;
        } else if (arr[i] == 4) {
            for (int j = 0; j < 10; ++j) {
                for (int k = i; k <= i; ++k) {
                    if (min > matrix[j][k]) {
                        min = matrix[j][k];
                    }
                }
            }
            printf("%d ", min);
            min = 99999;
        }
    }


    return 0;
}