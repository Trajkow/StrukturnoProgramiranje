#include <stdio.h>

int main() {

    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    if (a == b && a == c){
        printf("123");
        return 0;
    }

    if (a < b && a < c) {
        printf("1");
    } else if (b < a && b < c) {
        printf("2");
    } else if (c < a && c < b) {
        printf("3");
    }
    if (a == b) {
        printf("12");
    }
    if (b == c) {
        printf("23");
    }
    if (a == c) {
        printf("13");
    }
    if (a == b ==c){
        printf("123");
    }

    return 0;
}