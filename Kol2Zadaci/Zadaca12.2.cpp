#include <stdio.h>

int brojPozitivni(int arr[], int n) {

    if (n >= 0) {
        if (arr[n] > 0) {
            return brojPozitivni(arr, n - 1) + 1;
        } else {
            return brojPozitivni(arr, n - 1);
        }
    }
    return 0;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    printf("%d", brojPozitivni(arr, n-1));

    return 0;
}