#include <stdio.h>

int main() {

    int num;
    int flag = 0;

    while (1) {

        if (scanf("%d", &num) != 1) {
            break;
        }

        if (num < 10) {
            continue;
        }

        int temp = num;
        while (num) {



            num /= 10;
        }



    }


    return 0;
}