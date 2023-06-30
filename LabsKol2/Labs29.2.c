#include <stdio.h>

int devisibleByK(int number, int k) {

    if (number % k == 0) {
        return 1;
    } else {
        return 0;
    }

}

int nextDivisibleByK(int number, int k) {

    number++;
    if (devisibleByK(number, k)) {
        return number;
    } else {
        return nextDivisibleByK(number, k);
    }

}


int main() {

    int num, numTo, k;
    scanf("%d%d%d", &num, &numTo, &k);

    for (int i = num; i <= numTo; ++i) {
        printf("%d -> %d\n", i, nextDivisibleByK(i, k));

    }


    return 0;
}