#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; ++i) {

        for (int j = i; j > 0; --j) {
            printf("%d", (i+1) - j);
        }
        printf("\n");

        for (int j = 0; j < i; ++j) {
            printf("%d", i - j);
        }
        printf("\n");
    }


    return 0;
}