#include <stdio.h>

int main() {

    int n, points;
    int numPassed = 0, numFailed = 0;
    float passedSum = 0, failedSum = 0;

    scanf("%d", &n);

    int pointsPassed[n], pointsFailed[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &points);

        if (points < 50) {
            pointsFailed[numFailed] = points;
            numFailed++;
            failedSum += (float) points;
        } else {
            pointsPassed[numPassed] = points;
            numPassed++;
            passedSum += (float) points;
        }


    }

    printf("Sredna vrednost na padnati %.2f\n", failedSum / (float) numFailed);
    for (int i = 0; i < numFailed; ++i) {
        printf("%d ", pointsFailed[i]);
    }
    printf("\nSredna vrednost na polozeni %.2f\n", passedSum / (float) numPassed);
    for (int i = 0; i < numPassed; ++i) {
        printf("%d ", pointsPassed[i]);
    }

    return 0;

}