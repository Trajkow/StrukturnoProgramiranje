#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int hasSpecialChar(const char *array) {
    const char *specialChars = "!@#$%^&*?";
    int i = 0;

    while (array[i] != '\0') {
        if (strchr(specialChars, array[i]) != NULL) {
            return 1;
        }
        i++;
    }

    return 0;
}


int main() {

    int n;
    scanf("%d", &n);

    char arr[n][80];
    char firstHalf[80 / 2];
    char secHalf[80 / 2];

    for (int i = 0; i < n; ++i) {
        scanf("%s", arr[i]);
    }

    int flag = 0;
    int maxLenght = 0;
    int maxLenghtIndex = -1;
    int maxIndex = -1;
    for (int i = 0; i < n; ++i) {
        int tempLenght = strlen(arr[i]);
        if (tempLenght > maxLenght && hasSpecialChar(arr[i])) {
            maxLenght = tempLenght;
            maxLenghtIndex = i;
            maxIndex = i;
            int splitPoint = maxLenght / 2;
            if (maxLenght % 2 == 0) {
                strncpy(firstHalf, arr[i], splitPoint);
                strncpy(secHalf, arr[i] + splitPoint, maxLenght - splitPoint);
            } else {
                strncpy(firstHalf, arr[i], splitPoint);
                strncpy(secHalf, arr[i] + splitPoint + 1, maxLenght - splitPoint);
            }
            firstHalf[splitPoint] = '\0';
            secHalf[splitPoint] = '\0';
            reverseString(secHalf);
            if (strcmp(firstHalf, secHalf) == 0) {
//                printf("%s %s\n", firstHalf, secHalf);
                flag = 1;
            } else {
                maxLenghtIndex = -1;
                maxLenght = 0;
                memset(firstHalf, '\0', sizeof(firstHalf));
                memset(secHalf, '\0', sizeof(secHalf));
            }
        }
    }

    if (flag) {
        printf("%s\n", arr[maxIndex]);
    } else {
        printf("Nema!");
    }


    return 0;
}