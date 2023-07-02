#include <stdio.h>

int different(char letter) {

    if (letter == ' ') {
        return 0;
    }
    if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u') {
        return 1;
    }
    return 0;
}

int main() {

    char current, next;

    while ((current = getchar()) != '.' && (next = getchar()) != '.') {
        if(different(current) && different(next)){
            printf("%c", next);
            printf("%c", current);
        } else{
            printf("%c", current);
            printf("%c", next);
        }
    }

    printf(".");
    return 0;
}

