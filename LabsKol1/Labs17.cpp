#include <stdio.h>

int main() {

    int num = 0;
    int counter = 0;

    int x;
    int counterX = 0;
    scanf("%d", &x);
    while (x) {
        counterX++;
        x /= 10;
    }

    while (1) {

        if (scanf(" %d ", &num) != 1) {
            break;
        }

        int temp = num;
        while (temp) {
            counter++;
            temp /= 10;
        }
        if (counter == counterX) {
            printf("%d\n", num);
        }
        counter = 0;
    }

    return 0;
}