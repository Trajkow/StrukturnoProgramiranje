#include <stdio.h>

int main() {

    int primaryTax, primaryLimit;
    scanf("%d%d", &primaryTax, &primaryLimit);
    int secondTax, secondLimit;
    scanf("%d%d", &secondTax, &secondLimit);
    int thirdTax;
    scanf("%d", &thirdTax);
    int income;
    scanf("%d", &income);

    float tax = 0;
    int thirdRange = income - secondLimit;
    int secondRange = (income - thirdRange) - primaryLimit;
    int firstRange = income - (thirdRange + secondRange);

    if (income > secondLimit) {
        tax = (thirdRange * ((float) thirdTax / 100.0));
        tax += (secondRange * ((float) secondTax / 100.0));
        tax += (firstRange * ((float) primaryTax / 100.0));
    } else if (income <= secondLimit) {
        if (income <= primaryLimit) {
            tax += (income * ((float) primaryTax / 100.0));
        } else {
            tax += ((income - firstRange) * ((float) secondTax / 100.0));
            tax += (firstRange * ((float) primaryTax / 100.0));
        }
    }

    printf("%.2f", tax);

    return 0;
}