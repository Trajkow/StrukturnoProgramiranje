#include <stdio.h>
#include <stdlib.h>

void shiftArray(int arr[], int n, int *counter) {

    int index = arr[0];
    int brojac = 0;
    int temp[100];

    for (int i = 0; i < 100; ++i) {
        temp[i] = 0;
    }

    if (abs(index) >= n) {
        *counter += 1;
        for (int i = 0; i < n; ++i) {
            printf("0 ");
        }
        printf("\n");
        return;
    }

    if (index > 0) {
        for (int i = 0; i < index; ++i) {
            temp[i] = 0;
        }
        for (int i = index; i < n; ++i) {
            temp[i] = arr[brojac];
            brojac++;
        }
    } else {
        brojac = abs(index);
        for (int i = abs(index); i < n; ++i) {
            temp[i] = 0;
        }
        for (int i = 0; i < n - abs(index); ++i) {
            temp[i] = arr[brojac];
            brojac++;
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", temp[i]);
    }
    printf("\n");
}

int main() {

    int m, n;
    scanf("%d", &m);

    int arr[100];
    int counter = 0;

    for (int i = 0; i < m; ++i) {
        scanf("%d", &n);
        for (int j = 0; j < n; ++j) {
            scanf("%d ", &arr[j]);
        }
        shiftArray(arr, n, &counter);
    }
    printf("%d", counter);


    return 0;
}