#include <stdio.h>

int main() {

    int n, m, counter = 0;
    int arrn[100], arrm[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arrn[i]);
    }
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &arrm[i]);
    }

    int arr[100];
    for (int i = 0; i < n; ++i) {
        arr[i] = arrn[i];
    }
    for (int i = n; i < m + n; ++i) {
        arr[i] = arrm[counter];
        counter++;
    }

    for (int i = 0; i < m + n; ++i) {
        for (int j = 0; j < m + n; ++j) {
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < m + n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}