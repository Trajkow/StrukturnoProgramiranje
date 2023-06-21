#include <stdio.h>

int main() {

    int z, a, b;
    scanf("%d", &z);

    int counter = 0;
    int numOfCouples = 0;

    do {
        scanf("%d%d", &a, &b);
        if (a + b == z) {
            counter++;
        }
        numOfCouples++;
    } while (a != 0 || b != 0);

    float procent = ((float) counter / ((float) numOfCouples - 1)) * 100;

    printf("Vnesovte %d parovi od broevi chij zbir e %d\n", counter, z);
    printf("Procentot na parovi so zbir %d e %.2f%%", z, procent);

    return 0;
}