#include <stdio.h>

void print(int arr[], int num) {

    printf("%d ", arr[num]);

}

int main() {

    int n, k;
    scanf("%d%d", &n, &k);

    int arr[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    int counter = 0;
    for (int i = 0; i < n; ++i) {
        print(arr, i);
        if (arr[i] == k){
            counter++;
        }
    }

    printf("\nBrojot %d vo nizata se naogja %d pati.", k, counter);

    return 0;
}