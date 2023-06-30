#include <stdio.h>

int main() {

    int x, n, num;
    scanf("%d%d", &x, &n);

    int flag = 1;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);

        int temp = num;
        while (temp) {
            if (x < 100) {
                int lastTwoDigits = temp % 100;

                if (lastTwoDigits == x) {
                    printf("%d\n", num);
                    flag = 0;
                    break;
                }

                temp /= 10;
            } else if (x > 999) {
                int lastFourDigits = temp % 10000;

                if (lastFourDigits == x) {
                    printf("%d\n", num);
                    flag = 0;
                }

                temp /= 10;
            }
        }
    }

    if (flag){
        printf("Nema");
    }

    return 0;
}