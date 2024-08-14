#include <stdio.h>

int find_occurrences(int arr[], int n, int num) {
    int count = 0, i;
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[500], i, max_count = 0, num_with_max_occurrences;

    printf("Enter 500 integers:\n");
    for (i = 0; i < 500; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 500; i++) {
        int count = find_occurrences(arr, 500, arr[i]);
        if (count > max_count) {
            max_count = count;
            num_with_max_occurrences = arr[i];
        }
    }

    printf("The number with the highest occurrence is: %d\n", num_with_max_occurrences);

    return 0;
}
