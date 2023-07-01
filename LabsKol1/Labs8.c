#include <stdio.h>

int main() {

    int balance; // X denari
    int price; // Y cena
    int c1, c1Discount;
    int c2, c2Discount;
    scanf("%d%d", &balance, &price);
    scanf("%d%d", &c1, &c1Discount);
    scanf("%d%d", &c2, &c2Discount);

    float sum = 0;
    int counter = 0;

    if (balance < price) {
        printf("0 0.00");
        return 0;
    }

    for (int i = 0; i < c1; ++i) {
        if (sum < balance) {
            sum += price;
            counter++;
        }
        if (sum > balance) {
            sum -= price;
            counter--;
        }
    }
    for (int i = c1; i < c2; ++i) {
        if (sum < balance) {
            sum += price - c1Discount;
            counter++;
        }
        if (sum > balance) {
            sum -= price - c1Discount;
            counter--;
            printf("%d %.2f", counter, sum);
            return 0;
        }
    }
    if(sum < balance) {
        for (int i = 0; i < 100; ++i) {
            if (sum < balance) {
                sum += price - (c2Discount + c1Discount);
                counter++;
            }
        }
        if (sum > balance) {
            sum -= price - (c2Discount + c1Discount);
            counter--;
        }
    }

    printf("%d %.2f", counter, sum);

    return 0;
}