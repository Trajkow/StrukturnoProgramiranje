#include <stdio.h>

int main() {

    int n, k;
    scanf("%d%d", &n, &k);

    int arr[100];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[j] >= arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d-te najmali elementi se: ", k);
    for (int i = 0; i < k; ++i) {
        printf("%d ", arr[i]);
    }


    return 0;
}