#include <stdio.h>

int main() {

    char hex;
    int sum = 0;

    while ((hex = getchar()) != '.') {

        if (hex == 'A' || hex == 'a') {
            sum += 10;
        } else if (hex == 'B' || hex == 'b') {
            sum += 11;
        } else if (hex == 'C' || hex == 'c') {
            sum += 12;
        } else if (hex == 'D' || hex == 'd') {
            sum += 13;
        } else if (hex == 'E' || hex == 'e') {
            sum += 14;
        } else if (hex == 'F' || hex == 'f') {
            sum += 15;
        }

        if (hex >= '0' && hex <= '9'){
            sum += hex - '0';
        }

    }

    if (sum == 16){
        printf("Poln pogodok");
    }else if(sum % 16 == 0){
        printf("Pogodok");
    }else{
        printf("%d", sum);
    }


    return 0;
}