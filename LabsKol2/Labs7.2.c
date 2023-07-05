#include <stdio.h>

int isPrime(int number) {

    if (number < 2) {
        return 0;
    }

    for (int i = 2; i <= number * number; ++i) {
        if (i == number) {
            continue;
        }
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (i + 1 >= n) {
            if (isPrime(arr[i])) {
                printf("brojot %d e prost\n", arr[i]);
            } else {
                printf("brojot %d NE e prost\n", arr[i]);
            }
        } else {
            if (isPrime((arr[i] * 10) + arr[i + 1])) {
                printf("brojot %d e prost\n", (arr[i] * 10) + arr[i + 1]);
            } else {
                printf("brojot %d NE e prost\n", (arr[i] * 10) + arr[i + 1]);
            }
            i++;
        }
    }


    return 0;
}