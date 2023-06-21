#include <stdio.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    int counter = 0;
    int flag = 1;
    int range = b - a;

    a++;
    b++;
    while (b != a) {

        if (a % 2 == 0) {
            if (a % 7 == 0) {
                printf("%d\n", a);
                counter++;
                flag = 0;
            }
        } else {
            if (a % 3 != 0) {
                printf("%d\n", a);
                counter++;
                flag = 0;
            }
        }

        a++;
    }

    if (flag){
        printf("0");
    }else{
        printf("%.2f%%", ((float)counter * 100) / (float)range);
    }

    return 0;
}