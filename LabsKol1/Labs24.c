#include <stdio.h>

int main() {

    int m, n;
    scanf("%d%d", &m, &n);
    long fact;

    for (int i = m + 1; i <= n; ++i) {

        fact = i;
        int temp = --i;
        while (temp > 0) {
            fact *= temp--;
        }
        printf("Faktoriel od %d e %ld.\n", ++i, fact);
    }

    return 0;
}