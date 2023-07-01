#include <stdio.h>

int main() {

    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    int sum = 0;
    float average = 0.0;
    int counter = 0;

    for (int i = a; i < b; i += c) {

        if ((i * i) % d == 0) {
            sum += i;
        }
        int temp = i;
        while (temp) {
            int digit = temp % 10;
            if (digit == 1) {
                average += i;
                counter++;
                break;
            }
            temp /= 10;
        }
    }

    printf("zbir = %d\n", sum);
    printf("prosek = %.2f", average / counter);

    return 0;
}