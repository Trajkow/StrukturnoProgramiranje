#include <stdio.h>

int main() {

    int km;

    int p, m, c;
    float k;

    int d, z, r;
    float v;

    scanf("%d", &km);
    scanf("%d%d%f%d", &p, &m, &k, &c);
    scanf("%d%d%f%d", &d, &z, &v, &r);

    float firstLine = (float) p * m + (p - 1) * c + (float) km / k;
    float secondLine = (float) d * z + (d - 1) * r + (float) km / v;

    printf("%d ", (int)firstLine);
    printf("%d\n", (int)secondLine);

    if (firstLine < secondLine) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}