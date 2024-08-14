#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    int max_num = INT_MIN;

    printf("Enter a series of positive integers less than 100 (enter 0 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }
        if (num > 100) {
            continue;
        }
        sum += num;

        if (num > max_num) {
            max_num = num;
        }
    }
    printf("Sum of the numbers: %d\n", sum);
    printf("Maximum number: %d\n", max_num);
    return 0;
}
