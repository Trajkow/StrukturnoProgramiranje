#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    float arr[100];
    float sum = 0.0;
    for (int i = 0; i < n; ++i) {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < n; ++i) {
        sum+= arr[i];
    }

    float average = sum / (float) n;
    float num = 10000;
    int index = -1;
    for (int i = 0; i < n; ++i) {
        if ((average - arr[i]) > 0){
            if ((average - arr[i]) < num ){
                num = average - arr[i];
                index = i;
            }
        }
    }

    printf("%.2f", arr[index]);


    return 0;
}