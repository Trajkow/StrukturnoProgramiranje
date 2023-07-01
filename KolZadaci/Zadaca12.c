#include <stdio.h>

int positionMaxDigit(int number) {
    int counter = 0;
    int max = 0;
    int position = -1;

    while (number) {
        int digit = number % 10;
        counter++;
        if(max < digit){
            position = counter;
            max = digit;
        }
        number /= 10;
    }
    return 5 - position;
}

int main() {

    int num;
    int sumA = 0, sumB = 0, sumC = 0, sumD = 0, sumE = 0;

    while (1) {
        if (scanf("%d", &num) != 1) {
            break;
        }
        if(positionMaxDigit(num) == 0){
            sumA++;
        }else if(positionMaxDigit(num) == 1){
            sumB++;
        }else if(positionMaxDigit(num) == 2){
            sumC++;
        }else if(positionMaxDigit(num) == 3){
            sumD++;
        }else if(positionMaxDigit(num) == 4){
            sumE++;
        }
    }

    printf("0: %d\n", sumE);
    printf("1: %d\n", sumD);
    printf("2: %d\n", sumC);
    printf("3: %d\n", sumB);
    printf("4: %d\n", sumA);

    return 0;
}