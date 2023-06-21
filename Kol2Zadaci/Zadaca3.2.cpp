#include <stdio.h>

int sum_pos(int arr[100], int ind, int n) {

    int sum = 0;

    for (int i = ind; i < n; ++i) {
        sum += arr[i];
    }

    return sum;
}

int main() {

    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int ind;
    scanf("%d", &ind);

    printf("%d", sum_pos(arr, ind, n));


    return 0;

}