#include <stdio.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    int counter = 0;
    int maxCounter = 0;
    int minCounter = 0;
    int flag = 0;
    int devider = 1;
    int min = 0;
    int max = 0;

    for (int i = a; i < b; ++i) {

        while (devider <= i) {
            if (a % devider == 0) {
                counter++;
            }
            devider++;
        }

        if (counter > maxCounter) {
            maxCounter = counter;
            max = i;
        }


    }

    printf("Min: %d\n", min);
    printf("Max: %d", max);


    return 0;
}