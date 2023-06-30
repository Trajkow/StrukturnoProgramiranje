#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int num;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &num);

        if(num % 5 != 0){
            if (num % 5 == 1){
                printf(".----\n");
            }else if (num % 5 == 2){
                printf("..---\n");
            }else if(num % 5 == 3){
                printf("...--\n");
            }else if(num % 5 == 4){
                printf("....-\n");
            }
        }else{
            printf("-----\n");
        }

    }


    return 0;
}