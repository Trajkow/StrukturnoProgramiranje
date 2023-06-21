#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int maxSum = 0;
    int num = 0;

    for (int i = 0; i < n; ++i) {

        int sum = 0;

        for (int j = 1; j < i; ++j) {
            if(i % j == 0){
                sum += j;
            }
        }

        if(sum > maxSum){
            maxSum = sum;
            num = i;
        }
    }

    printf("%d", num);

    return 0;
}