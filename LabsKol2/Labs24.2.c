#include <stdio.h>

int sumFunction(int num, int sum) {

    if (num == 0) {
        return sum;
    }

    int digit = num % 10;
    sum += digit;

    return sumFunction(num / 10, sum);
}

int rising(int num, int flag) {

    if (num == 0) {
        return flag;
    }

    int digit = num % 10;
    int secDigit = (num / 10) % 10;
    if (digit > secDigit) {
        flag = 1;
    } else {
        flag = 0;
        return flag;
    }

    return rising(num / 10, flag);

}

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (rising(arr[i], 0)) {
            printf("%d (suma: %d)\n", arr[i], sumFunction(arr[i], 0));
        }
    }

    return 0;
}