#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("Vnesenata niza e:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\nNovata niza e:\n");
    for (int i = 0; i < n; ++i) {
        arr[i] += arr[i - 1];
        printf("%d ", arr[i]);
    }


    return 0;
}