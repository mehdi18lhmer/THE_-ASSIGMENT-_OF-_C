#include <stdio.h>

int main() {
    int arr[50], i, num, count = 0;

    printf("Enter 50 integers:\n");
    for (i = 0; i < 50; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to find its occurrences: ");
    scanf("%d", &num);

    for (i = 0; i < 50; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("The number %d occurs %d times in the array.\n", num, count);

    return 0;
}
