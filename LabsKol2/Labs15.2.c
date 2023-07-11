#include <stdio.h>

int main() {

    int n, m;
    scanf("%d%d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int flag = 0, loop = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < loop; ++j) {
            if(matrix[i][j] == matrix[j][i] ){
                flag = 1;
            }else{
                flag = 0;
                break;
            }
        }
        loop++;
    }
    
    if(flag){
        printf("1\n");
    } else{
        printf("-1\n");
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}