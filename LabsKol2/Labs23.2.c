#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    int min = 9999;
    for (int i = 0; i < n; ++i) {
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }

    printf("MAX -> %d\n", max);
    printf("MIN -> %d\n", min);
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]+(max - min));
    }

    return 0;
}