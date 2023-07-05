#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int counterEven = 0;
    int counterOdd = 0;
    for (int i = 0; i < n; ++i) {
        if(i % 2 == 0 && arr[i] % 2 == 0){
            counterEven++;
        }else if (i % 2 != 0 == arr[i] % 2 != 0){
            counterOdd++;
        }
    }

    if(counterEven >= ((float)n / 100.0) * (50.0/100.0) * 100 && counterOdd <= ((float)n / 100.0) * (30.0/100.0) * 100){
        printf("1");
    }else{
        printf("0");
    }


    return 0;
}