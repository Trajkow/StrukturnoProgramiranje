#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int gr1[100], gr2[100], gr3[100];
    int counter1 = 0, counter2 = 0, counter3 = 0;

    int index;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &index);

        if (index % 10 == 0 || index % 10 == 1 || index % 10 == 2) {
            gr1[counter1] = index;
            counter1++;
        } else if (index % 10 == 3 || index % 10 == 4 || index % 10 == 5) {
            gr2[counter2] = index;
            counter2++;
        } else if (index % 10 == 6 || index % 10 == 7 || index % 10 == 8 || index % 10 == 9) {
            gr3[counter3] = index;
            counter3++;
        }
    }

    printf("Grupa 1\n");
    for (int i = 0; i < counter1; ++i) {
        printf("%d ", gr1[i]);
    }
    printf("\nGrupa 2\n");
    for (int i = 0; i < counter2; ++i) {
        printf("%d ", gr2[i]);
    }
    printf("\nGrupa 3\n");
    for (int i = 0; i < counter3; ++i) {
        printf("%d ", gr3[i]);
    }

    return 0;
}