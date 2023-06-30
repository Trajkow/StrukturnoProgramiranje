#include <stdio.h>
#include <string.h>

void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    // Vasiot kod pocnuva od ovde

    FILE *file = fopen("livce.txt", "r");
    char string[100];

    fgets(string, 100, file);

    









    return 0;
}
