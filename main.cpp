
#include <stdio.h>

int main() {

    int x = 2, y = 3, z = 4;

    int p = (z == y++) && (++x > --y) && (z > x + 1);

    if (p) {
        printf("tme");
        printf("%d %d %d", x, y, z);
    } else {
        printf("ne e ");
        printf("%d %d %d", x, y, z);
    }

    return 0;

}



