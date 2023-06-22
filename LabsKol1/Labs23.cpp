#include <stdio.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n);
    int sumMarko = 0;
    int sumMilan = 0;
    int winsMarko = 0;
    int winsMilan = 0;

    char card;

    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= 2; ++j) {
            scanf("%c", &card);
            if (strcmp(&card, "J") == 0) {
                sumMilan += 12;
            } else if (strcmp(&card, "Q") == 0) {
                sumMilan += 13;
            } else if (strcmp(&card, "K") == 0) {
                sumMilan += 14;
            } else if (strcmp(&card, "A") == 0) {
                sumMilan += 15;
            }
        }

        for (int j = 3; j <= 4; ++j) {
            scanf("%c", &card);
            if (strcmp(&card, "j") == 0) {
                sumMarko += 12;
            } else if (strcmp(&card, "Q") == 0) {
                sumMarko += 13;
            } else if (strcmp(&card, "K") == 0) {
                sumMarko += 14;
            } else if (strcmp(&card, "A") == 0) {
                sumMarko += 15;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (sumMilan == sumMarko) {
            printf("Neresheno\n");
        } else if (sumMilan > sumMarko) {
            printf("Milan\n");
            winsMilan++;
        } else {
            printf("Marko\n");
            winsMarko++;
        }
    }
    printf("%d %d", winsMilan, winsMarko);

    return 0;
}