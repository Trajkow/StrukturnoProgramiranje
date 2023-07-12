#include <stdio.h>

void scale(int arr[], int num) {

    int max = 0;
    for (int i = 0; i < num; ++i) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    float multiply = 100.0 / (float) max;

    for (int i = 0; i < num; ++i) {
        printf("%.2f ", (float) arr[i] * multiply);
    }


}

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    scale(arr, n);


    return 0;
}