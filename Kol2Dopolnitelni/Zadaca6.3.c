#include <stdio.h>

int par(int arr[], int n) {

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[j] >= arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int counter = 1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == arr[i + 1]) {
            counter++;
        }else{
            if (counter % 2 == 0){
                return arr[i];
            } else{
                counter = 1;
            }
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

    if (par(arr, n)){
        printf("Najmaliot element koj se pojavuva paren broj pati e %d", par(arr, n));
    }else{
        printf("Nitu eden element ne se pojavuva paren broj pati!");
    }

    return 0;
}