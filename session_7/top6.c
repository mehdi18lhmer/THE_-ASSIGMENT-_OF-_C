#include <stdio.h>

int Highest_Average(int n, int m, int grades[100][100]) {
    int max_index = 0;
    float max_average = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
       sum += grades[i][j];
       }
       float average = (float)sum / m;
 if (average > max_average) {
        max_average = average;
           max_index = i;
     }
return max_idex;

    }


int main() {
    int n;  
    int m;
    printf("Enter the number of classes");
    scanf("%d", &n);
    printf("Enter the number of students in each class");
    scanf("%d", &m);

           int grades[100][100];
    for (int i = 0; i < n; i++) {
        printf("Enter grades for class %d :\n", i + 1);
        for (int j = 0; j < m; j++) {
            scanf("%d", &grades[i][j]);
        }
    }
        int highest_index = Highest_average(n, m, grades);
    printf("The class with the highest average grade is class %d\n", highest_index + 1);

    return 0;
}
