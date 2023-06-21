#include <stdio.h>


int main() {

    int price1, price2, price3;
    char type1, type2, type3;
    scanf("%d %c", &price1, &type1);
    scanf("%d %c", &price2, &type2);
    scanf("%d %c", &price3, &type3);

    float sum = 0.0;


    if (type1 == 'A' || type1 == 'a'){
        sum += (float)price1 * 0.18;
    }else if(type1 == 'B' || type1 == 'b'){
        sum += (float)price1 * 0.05;
    }else if(type1 == 'V' || type1 == 'v'){
        sum += price1 * 0;
    }

    if (type2 == 'A' || type2 == 'a'){
        sum += (float)price2 * 0.18;
    }else if(type2 == 'B' || type2 == 'b'){
        sum += (float)price2 * 0.05;
    }else if(type2 == 'V' || type2 == 'v'){
        sum += price2 * 0;
    }

    if (type3 == 'A' || type3 == 'a'){
        sum += (float)price3 * 0.18;
    }else if(type3 == 'B' || type3 == 'b'){
        sum += (float)price3 * 0.05;
    }else if(type3 == 'V' || type3 == 'v'){
        sum += price3 * 0;
    }

    printf("%.2f", sum);

    return 0;
}