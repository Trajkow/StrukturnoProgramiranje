#include <stdio.h>

int main() {

    int m, n;
    scanf("%d%d", &m, &n);

    int xIgrac, yIgrac, xTopka, yTopka;
    scanf("%d%d%d%d", &xIgrac, &yIgrac, &xTopka, &yTopka);

    int xGoal, yGoal, xGoal2, yGoal2;
    scanf("%d%d%d%d", &xGoal, &yGoal, &xGoal2, &yGoal2);

    int xChange, yChange;
    scanf("%d%d", &xChange, &yChange);

    char matrix[100][100];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == xIgrac && j == yIgrac) {
                matrix[i][j] = 'i';
            } else if (i == xTopka && j == yTopka) {
                matrix[i][j] = 'o';
            } else if (i == xGoal && j == yGoal) {
                matrix[i][j] = ']';
            } else if (i == xGoal2 && j == yGoal2) {
                matrix[i][j] = ']';
            } else {
                matrix[i][j] = '-';
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    if (xTopka + xChange == xGoal && yTopka + yChange == yGoal) {
        printf("GOAL!");
    } else if (xTopka + xChange == xGoal2 && yTopka + yChange == yGoal2) {
        printf("GOAL!");
    } else if (xTopka + xChange > m || yTopka + yChange > n) {
        printf("OUT!");
    }else if(xTopka + xChange <= m || yTopka + yChange <= n){
        printf("Novata pozicija na topkata e (%d, %d)\n", xTopka + xChange, yTopka+yChange);
        matrix[xTopka][yTopka] = '-';
        matrix[xTopka+xChange][yTopka+yChange] = 'o';
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                printf("%c ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}