#include <stdio.h>

void sort(int x, int y, int z) {

    if (x < z) {
        int temp = x;
        x = z;
        z = temp;
    }

    if (y < z) {
        int temp = y;
        y = z;
        z = temp;
    }

    if (x < y) {
        int temp = x;
        x = y;
        y = temp;
    }

    printf("%d %d %d", x, y, z);
}

int main() {

    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);

    sort(x, y, z);

    return 0;
}