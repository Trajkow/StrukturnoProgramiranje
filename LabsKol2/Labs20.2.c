#include <stdio.h>

void print(int n) {

    if(n == 0){
        return;
    }

    for (int i = 0; i < n; ++i) {
        printf("*");
    }
    printf("\n");

    print(n - 1);
}

int main() {

    int n;
    scanf("%d", &n);

    print(n);

    return 0;
}