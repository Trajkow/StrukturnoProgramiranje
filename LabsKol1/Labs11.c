#include <stdio.h>

int main() {

    int points = 0;
    int mark = 0;
    float sum = 0.0;

    for (int i = 0; i < 5; ++i) {
        scanf("%d", &points);
        mark = (points / 10) + 1;
        if (mark > 10){
            mark--;
        }else if(mark <5){
            mark++;
        }
        printf("%d ", mark);
        sum += (float) mark;
    }



    printf("\n%.2f", sum / 5.0);

    return 0;
}