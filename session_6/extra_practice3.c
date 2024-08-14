#include <stdio.h>

int main() {

    int sum1 = 0;
    int sum2 = 0;
    int N1 = 0;
    int N2 = 0;

    // firstly we do the sum by the while loop
    while (N1 < 20) {
        printf("Enter a number less than 20: ");
        scanf("%d", &N1);

        if (N1 >= 20) {
            printf("Error: Please enter a number less than 20\n");
            break;
        }

        sum1 = sum1 + N1; // Add N1 to sum1

        printf("The sum = %d\n", sum1);
    }

    // secondly we do the sum with do-while loop
    do {
        printf("Enter a number less than 20: ");
        scanf("%d", &N2);

        if (N2 >= 20) {
            printf("Error: Please enter a number less than 20\n");
            break;
        }

        sum2 = sum2 + N2; // Add N2 to sum2

        printf("The sum is = %d\n", sum2);

    } while (N2 < 20);

    return 0;
}