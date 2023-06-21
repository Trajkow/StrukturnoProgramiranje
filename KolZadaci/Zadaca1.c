#include <stdio.h>

int main() {

    int m, n;
    scanf("%d%d", &m, &n);

    for (int i = m; i <= n; ++i) {

        int temp = i;
        int digit;

        while (temp) {
            digit = temp % 10;
            if(digit % 2 != 0){
                break;
            }
            temp /= 10;
        }

        if(temp == 0){
            printf("%d", i);
            return 0;
        }
    }

    printf("NE");

    return 0;
}