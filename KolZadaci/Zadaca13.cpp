#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int group1[5], group2[5], gropup3[5];

    int index;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &index);

        int lastDigit = index % 10;

        if (lastDigit >= 0 && lastDigit <= 2) {
            group1[i] = index;
        } else if (lastDigit >= 3 && lastDigit <=5){
            group2[i] = index;
        }else if(lastDigit >= 6 && lastDigit <= 9){
            gropup3[i] = index;
        }
    }

    printf("")


    return 0;
}