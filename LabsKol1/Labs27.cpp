#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int num;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);
        if (num % 4 == 3){
            printf("prolet\n");
        }else if(num % 4 == 2){
            printf("zima\n");
        }else if(num % 4 == 1){
            printf("esen\n");
        }else if(num % 4 == 0){
            printf("leto\n");
        }
    }


    return 0;
}