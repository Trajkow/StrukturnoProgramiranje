#include <stdio.h>

int main(){

    int n;
    int counter = 0;

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &n);
        if (n == 0){
            counter++;
        }
    }

    if (counter >= 3){
        printf("1");
    }else{
        printf("0");
    }

    return 0;
}