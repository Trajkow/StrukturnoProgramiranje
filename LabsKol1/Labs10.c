#include <stdio.h>

int main() {

    int p1, c1;
    scanf("%d%d", &p1, &c1);
    int p2, c2;
    scanf("%d%d", &p2, &c2);
    int p3;
    scanf("%d", &p3);
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int sum = 0;

    if (a <= c1) {
        sum += a * p1;
    } else if (a > c1 && a <= c2) {
        sum += a * p2;
    } else if (a > c2) {
        sum += a * p3;
    }

    if (b <= c1) {
        sum += b * p1;
    } else if (b > c1 && b <= c2) {
        sum += b * p2;
    } else if (b > c2) {
        sum += b * p3;
    }

    if (c <= c1) {
        sum += c * p1;
    } else if (c > c1 && c <= c2) {
        sum += c * p2;
    } else if (c > c2) {
        sum += c * p3;
    }

    printf("%d", sum);

    return 0;
}