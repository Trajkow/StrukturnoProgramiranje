#include <stdio.h>

int main() {


    char current, next;

    if ((current = getchar()) != '.') {
        while ((next = getchar()) != '.') {
            if ((current != 'a' && current != 'e' && current != 'i' && current != 'o' && current != 'u')
            && (next != 'a' && next != 'e' && next != 'i' && next != 'o' && next != 'u')) {
                printf("%c", next);
            } else {
                printf("%c", current);
            }
            current = next;
        }
        printf("%c", current);
    }

    printf(".");


    return 0;
}

