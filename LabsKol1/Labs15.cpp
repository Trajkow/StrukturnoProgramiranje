#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    float basePrice = 80;
    float basePrice2 = 0;
    int nextKm = 0;
    int nextKm1 = 0;

    if (num <= 5) {
        printf("%.0f denari", basePrice);
    } else if (num > 5 && num <= 8) {
        nextKm = num - 5;
        basePrice2 = (basePrice + (nextKm * 20)) * 1.2;
        printf("%.0f denari", basePrice2);
    } else if (num > 8) {
        
        nextKm = num - 8;
        nextKm1 = 8 - 5;
        basePrice2 = (basePrice + (nextKm1 * 20) + (nextKm * 25)) * 1.2;
        printf("%.0f denari", basePrice2);
    }

    return 0;
}