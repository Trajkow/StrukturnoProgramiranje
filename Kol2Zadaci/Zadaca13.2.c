#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    int m, n;
    scanf("%d%d", &m, &n);

    int matrix[m][n];

    int sum = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            sum += matrix[i][j];
        }
        if (sum < x){
            for (int j = 0; j < n; ++j) {
                printf("-1 ");
            }
        }else if(sum == x){
            for (int j = 0; j < n; ++j) {
                printf("0 ");
            }
        }else if(sum > x){
            for (int j = 0; j < n; ++j) {
                printf("1 ");
            }
        }
        printf("\n");
        sum = 0;
    }

    return 0;
}

