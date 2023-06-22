#include <stdio.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    int counter = 0;
    int max = 0;
    int maxCounter = 0;
    int min = 0;
    int minCounter = 100000;

    for (int i = a; i < b; ++i) {
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                counter++;
            }
        }
        if (counter <= minCounter) {
            minCounter = counter;
            min = i;
        }
        counter = 0;
    }

    for (int i = a; i < b; ++i) {
        for (int j = 1; j <= i; ++j) {
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

    printf("Min: %d\n", min);
    printf("Max: %d", max);

    return 0;
}