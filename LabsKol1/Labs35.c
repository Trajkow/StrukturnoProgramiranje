#include <stdio.h>

int main()  {
    int h, m, s;
    char forma;
    scanf("%d %d %d ", &h, &m, &s);
    scanf("%c", &forma);
    if(forma == 'A'){
        if(h == 12){
            h -= 12;
        }
        printf("%02d:%02d:%02d", h, m, s);
    }
    else if(forma == 'P'){
        if(h <= 11){
            h += 12;
        }
        printf("%02d:%02d:%02d", h, m, s);
    }

    return 0;
}