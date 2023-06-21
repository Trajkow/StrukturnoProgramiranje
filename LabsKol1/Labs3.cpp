#include <stdio.h>

int main() {

    int code;
    int price;
    int balance;

    scanf("%d", &code);
    scanf("%d", &price);
    scanf("%d", &balance);

    float tax = ((code % 100) / 100.0) + 1;
    float newBal = (float)balance - ((float)price * tax);

    if (newBal >= 0){
        printf("%.2f\n1", (float)price * tax);
    }else{
        printf("%.2f\n0", (float )price * tax);
    }

    return 0;
}