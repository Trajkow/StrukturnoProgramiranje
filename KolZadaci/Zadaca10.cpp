#include <stdio.h>

int main() {

    int num;
    int flag = 0;

    while (1) {

        if (scanf("%d", &num) != 1) {
            break;
        }

        if (num < 10) {
            continue;
        }

        int temp = num;
        while (num) {
            int digit = num % 10;
            int secDigit = (num % 100) / 10;
            int thirdDigit = (num % 1000) / 100;

            if (thirdDigit) {
                if (digit < secDigit && secDigit > thirdDigit || digit > secDigit && secDigit < thirdDigit) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            }else{
                if (digit < secDigit || secDigit < digit){
                    flag = 1;
                }else{
                    flag = 0;
                    break;
                }
            }

            num /= 10;
        }

        if (flag) {
            printf("%d\n", temp);
        }

    }


    return 0;
}