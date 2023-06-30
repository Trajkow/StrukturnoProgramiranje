#include <stdio.h>

void premesti(int arr[], int n) {

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= 0){
            printf("%d ", arr[i]);
        }
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0){
            printf("%d ", arr[i]);
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

    premesti(arr, n);

    return 0;
}