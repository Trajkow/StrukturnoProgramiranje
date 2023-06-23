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
        sumMarko = 0;
        sumMilan = 0;
        for (int j = 1; j <= 2; ++j) {
            card = getchar();
            if (card = '\n') {
                card = getchar();
            }
            if (card == 'J') {
                sumMilan += 12;
            } else if (card == 'Q') {
                sumMilan += 13;
            } else if (card == 'K') {
                sumMilan += 14;
            } else if (card == 'A') {
                sumMilan += 15;
            }
        }
        for (int j = 3; j <= 4; ++j) {
            card = getchar();
            if (card = '\n') {
                card = getchar();
            }
            if (card == 'J') {
                sumMarko += 12;
            } else if (card == 'Q') {
                sumMarko += 13;
            } else if (card == 'K') {
                sumMarko += 14;
            } else if (card == 'A') {
                sumMarko += 15;
            }
        }
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