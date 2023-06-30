#include <stdio.h>

int main() {

    int flag = 0;
    int balance; // X denari
    int price; // Y cena
    int c1, c1Discount;
    int c2, c2Discount;
    scanf("%d%d", &balance, &price);
    scanf("%d%d", &c1, &c1Discount);
    scanf("%d%d", &c2, &c2Discount);

    int counter = 0;
    float sum = 0.0;

    float c1popust = (100.0 - (float) c1Discount) / 100.0;
    float c2popust = (100.0 - (float) c2Discount) / 100.0;

    while (c1) {
        if (sum < balance) {
            sum += price;
            counter++;
            flag = 1;
        }
        c1--;
    }
    while (c2) {
        if (sum <= balance) {
            sum += price * c1popust;
            counter++;
            flag = 2;
        }
        c2--;
    }
    while (sum <= balance) {
        sum += price * (c1popust + c2popust);
        counter++;
        flag = 3;
    }

    if (flag == 1) {
        printf("%d %.2f", --counter, sum - price);
    } else if (flag == 2) {
        printf("%d %.2f", --counter, sum - price * c1popust);
    } else if (flag == 3) {
        printf("%d %.2f", counter, sum - price * (c1popust + c2popust));
    }

    return 0;
}