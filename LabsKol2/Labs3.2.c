#include <stdio.h>

int main() {

    int num;
    int counter = 0;
    int arr[100];

    while (1) {
        if (scanf("%d", &num) != 1) {
            break;
        }
        arr[counter] = num;
        counter++;
    }

    for (int i = 0; i < counter; ++i) {
        for (int j = i+1; j < counter; ++j) {
            if(arr[i] == arr[j]){
                arr[j] += (j-i);
            }
        }
        printf("%d ", arr[i]);
    }


    return 0;
}