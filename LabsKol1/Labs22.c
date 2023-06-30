#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    int counter = 0;
    int max = 0;
    int maxCounter = 0;

    for (int i = 1; i < num; ++i) {
        for (int j = 1; j < num; ++j) {
            if (i % j == 0) {
                counter++;
            }
        }
        if (counter >= maxCounter) {
            maxCounter = counter;
            max = i;
        }
        counter = 0;
    }

    printf("Baraniot broj e: %d", max);


    return 0;
}