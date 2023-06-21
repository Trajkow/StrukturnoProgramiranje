#include <stdio.h>
#include <stdlib.h>

int main() {

    char signs;
    int sum = 0;
    int num = 0;

    while ((signs = getchar()) != '!') {

        if(signs >= '0' && signs <= '9'){
            num = num * 10 + (signs - '0');
        }else{
            sum = sum + num;
            num = 0;
        }

    }

    printf("%d", sum + num);

    return 0;
}

//ako34D neka12em bashka41mewr20!
