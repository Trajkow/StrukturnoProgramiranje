#include <stdio.h>

int main() {

    int ax, ay;
    scanf("%d%d", &ax, &ay);
    int cx, cy;
    scanf("%d%d", &cx, &cy);

    int x, y;
    for (int i = 0; i < 2; ++i) {
        scanf("%d%d", &x, &y);
        if (x >= ax && y >= ay && x <= cx && y <= cy) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }
    }


    return 0;
}