#include <stdio.h>

int reverseNum(int num) {
    int reversed = 0;

    while (num) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int main() {

    int n;
    scanf("%d", &n);

    int num;
    int flag = 0;
    int sum = 0;
    int counter = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &num);
        int reverse = reverseNum(num);
        flag = 0;
        if (num > 99) {
            while (reverse) {
                int digit = reverse % 10;
                if(reverse / 10 == 0){
                    break;
                }
                int secDigit = (reverse / 10) % 10;

                if (digit > secDigit) {
                    break;
                }
                reverse /= 10;
            }
        } else {
            int digit = reverse % 10;
            int secDigit = (reverse / 10) % 10;

            if (digit > secDigit) {
                break;
            } else {
                flag = 1;
                counter++;
                sum+=num;
            }
        }

        if (reverse == 0) {
            flag = 1;
            counter++;
            sum += num;
        }
        if (flag) {
            printf("%d\n", num);
        }
    }
    printf("%d\n%d", sum, counter);

    return 0;
}