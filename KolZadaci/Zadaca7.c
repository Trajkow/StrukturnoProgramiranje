#include <stdio.h>

int main() {

    int m;
    scanf("%d", &m);
    if (m <= 2) {
        return 0;
    }

    for (int i = 0; i < 1; ++i) {
        printf("%%");
        for (int j = 0; j < m - 2; ++j) {
            printf("@");
        }
        printf("%%\n");
    }

    for (int i = 0; i < m - 2; ++i) {

        printf("%%");

        for (int j = 0; j < m - 2; ++j) {
            printf(".");
        }

        printf("%%\n");
    }

    for (int i = 0; i < 1; ++i) {
        printf("%%");
        for (int j = 0; j < m - 2; ++j) {
            printf("@");
        }
        printf("%%\n");
    }

    return 0;
}