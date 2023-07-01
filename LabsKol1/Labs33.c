#include <stdio.h>

int main()  {
    int h, m, s;
    scanf("%d %d %d", &h, &m, &s);
    if(h==0){
        h += 12;
    }
    if(h > 12){
        h -= 12;
        printf("%02d:%02d:%02dPM", h, m, s);

    }else if(h == 12 && m == 0 && s == 0){
        printf("%02d:%02d:%02dNOON", h, m, s);
    }else{
        printf("%02d:%02d:%02dAM", h, m, s);
    }

    return 0;
}