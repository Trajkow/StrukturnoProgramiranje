#include <stdio.h>

int main() {

    int num;
    int counter = 0;
    int l, r, v, i;
    int arr[100];

    while (1) {

        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        arr[counter] = num;
        counter++;

    }

    for (int j = 0; j < 3; ++j) {
        scanf("%d%d%d%d", &l, &r, &v, &i);

        if (i == 0) {
            for (int k = l; k <= r; ++k) {
                arr[k] += v;
            }
        } else {
            for (int k = l + 1; k < r; ++k) {
                arr[k] += v;
            }
        }

    }

    for (int j = 0; j < counter; ++j) {
        printf("%d ", arr[j]);
    }

    return 0;
}