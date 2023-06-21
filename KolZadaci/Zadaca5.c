#include <stdio.h>

int main() {

    int n, m;
    scanf("%d%d", &n, &m);

    int smallerDigit = 0;
    int biggerDigit = 0;

    if (n <= 0 || m <= 0) {
        printf("Invalid input");
        return 0;
    }

    if (n > m) {

        while (m) {
            smallerDigit = m % 10;

            while (n){
                biggerDigit = (n % 100) / 10;

                if(smallerDigit != biggerDigit){
                    printf("NE");
                    return 0;
                }else{
                    printf("PAREN");
                    return 0;
                }

                n /= 100;
            }

            m /= 10;
        }
    }else if(n < m){
        while (n) {
            smallerDigit = n % 10;

            while (m){
                biggerDigit = (m % 100) / 10;

                if(smallerDigit != biggerDigit){
                    printf("NE");
                    return 0;
                }else{
                    printf("PAREN");
                    return 0;
                }

                m /= 100;
            }

            n /= 10;
        }
    }

//    printf("%d\n%d %d", biggerDigit, smallerDigit, m);

    return 0;
}