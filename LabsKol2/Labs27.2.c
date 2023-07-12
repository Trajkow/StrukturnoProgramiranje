#include <stdio.h>

void transform(int *arr, int n) {

    int minIndex = -1, maxIndex = -1;
    int min = 9999, max = 0;
    for (int i = 0; i < n; ++i) {
        if (max < arr[i]) {
            max = arr[i];
            maxIndex = i;
        }
        if (min > arr[i]) {
            min = arr[i];
            minIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == arr[maxIndex] || arr[i] == arr[minIndex]) {
            printf("%d ", arr[i]);
        } else {
            printf("%d ", arr[i] += arr[minIndex] - arr[maxIndex]);
        }
    }

}

int main() {


    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    transform(arr, n);

    return 0;
}