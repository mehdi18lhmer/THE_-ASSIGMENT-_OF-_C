#include <stdio.h>

int main() {
    int ids[20];
    float gpas[20], sum = 0.0, max, min;
    int i, id_max, id_min;

    printf("Enter the IDs and GPAs of 20 students:\n");
    for (i = 0; i < 20; i++) {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &ids[i]);
        printf("Student %d GPA: ", i + 1);
        scanf("%f", &gpas[i]);
        sum += gpas[i];
    }

    max = gpas[0];
    min = gpas[0];
    id_max = ids[0];
    id_min = ids[0];

    for (i = 1; i < 20; i++) {
        if (gpas[i] > max) {
            max = gpas[i];
            id_max = ids[i];
        }
        if (gpas[i] < min) {
            min = gpas[i];
            id_min = ids[i];
        }
    }

    printf("ID of student with highest GPA: %d\n", id_max);
    printf("ID of student with lowest GPA: %d\n", id_min);
    printf("Class average GPA: %.2f\n", sum / 20.0);

    return 0;
}
