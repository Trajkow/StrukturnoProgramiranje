#include <stdio.h>

int main() {

    char current, next;

    if ((current = getchar()) != '.'){
        while ((next = getchar()) != '.'){
            if (current == next){
                char uppercase = current - 'a' + 'A';
                printf("%c", uppercase);
            }else{
                printf("%c", current);
            }
            current = next;
        }
        printf("%c", current);
    }

    printf(".");

    return 0;
}