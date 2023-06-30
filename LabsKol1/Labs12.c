#include <stdio.h>

int main() {

    int points;
    float sum = 0;
    int mark = 0;

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &points);
        sum += points;
    }

    if (sum >= 50) {
        if ((int) sum % 10) {
            mark = (sum / 10) + 1;
        } else {
            mark = sum / 10;
        }
        printf("Ocenka: %d, poeni: %.0f", mark, sum);
        if (sum < 100) {
            if (((sum + 1) / 10) > mark) {
                printf("\nIma uslov za povisoka ocenka");
            } else {
                printf("\nNema uslov za povisoka ocenka");
            }
        }
    } else {
        printf("Predmetot ne e polozen");
    }


    return 0;
}