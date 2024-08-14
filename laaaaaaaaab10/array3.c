#include <stdio.h>

int main() {
    int grades[20], i, sum = 0, min, max;
    float average;

    printf("Enter the grades of 20 students:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = sum / 20.0;
    min = grades[0];
    max = grades[0];

    for (i = 1; i < 20; i++) {
        if (grades[i] < min) {
            min = grades[i];
        }
        if (grades[i] > max) {
            max = grades[i];
        }
    }

    printf("Average grade: %.2f\n", average);
    printf("Lowest grade: %d\n", min);
    printf("Highest grade: %d\n", max);

    return 0;
}
