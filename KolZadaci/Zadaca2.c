#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int divider = 0;
    int reverse = 0;

    if (n < 9) {
        printf("Brojot ne e validen");
        return 0;
    }

    for (int i = n - 1; i; --i) {

        int temp = i;
        int temp1 = i;

        while (temp != 0) {
            int digit = temp % 10;
            reverse = reverse * 10;
            reverse = reverse + digit;
            temp /= 10;
        }

        while (temp1) {
            divider++;
            temp1 /= 10;
        }

//        printf("%d %d\n", divider, reverse);

        if (reverse % divider == 0) {
            printf("%d", i);
            return 0;
        }

        divider = 0;
        reverse = 0;
    }

    return 0;
}