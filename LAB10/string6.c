#include <stdio.h>
#include <string.h>

#define STUDENT_COUNT 20

int main() {
    char names[STUDENT_COUNT][100];
    double grades[STUDENT_COUNT];
    int i, j;
    char temp_name[100];
    double temp_grade;

    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("Enter name of student %d: ", i + 1);
        gets(names[i]);
        printf("Enter grade of student %d: ", i + 1);
        scanf("%lf", &grades[i]);
        getchar(); 
    }
    for (i = 0; i < STUDENT_COUNT - 1; i++) {
        for (j = i + 1; j < STUDENT_COUNT; j++) {
            if (grades[i] > grades[j]) {
                grades[i] = grades[j];
                grades[j] = temp_grade;

                // Swap names
                strcpy(temp_name, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp_name);
            }
        }
    }

    printf("Name\t\tGrade\n");
    for (i = 0; i < STUDENT_COUNT; i++) {
        printf("%s\t\t%.2lf\n", names[i], grades[i]);
    }

    return 0;
}
