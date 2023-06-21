#include <stdio.h>
#include <math.h>

int main() {

    int m, n;
    scanf("%d%d", &m, &n);

    int matrix[100][100];
    int sum = 0;
    float average = 0;
    int round = 0;
    int distant = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            sum += matrix[i][j];
        }
        average = (float) sum / (float) m;
        round = ceil(average);
        for (int j = 0; j < m; ++j) {

            if (matrix[i][0] - round > matrix[i][m] - round) {
                distant = matrix[i][0];
                break;
            } else {
                distant = matrix[i][m];
                break;
            }
        }
        printf("%d ", distant);
    }


    return 0;
}