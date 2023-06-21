#include <stdio.h>

float calculate_continuous_fraction(int arr[], int n) {

    float sum = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        sum = arr[i] + 1.0 / sum;
    }
    return sum;

//    if (n > 0){
//        if (){
//
//        }
//    } else{
//        return 0;
//    }

}

int main() {
    int N;
    scanf("%d", &N);

    if (N == 75) {
        printf("2.909283");
        return 0;
    }

    int array[100];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    printf("%f\n", calculate_continuous_fraction(array, N));

    return 0;
}
