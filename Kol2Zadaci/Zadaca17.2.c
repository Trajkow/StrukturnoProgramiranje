#include <stdio.h>

int main(){

    int m,n;
    scanf("%d%d", &m, &n);

    int matrix[100][100];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }







    return 0;
}