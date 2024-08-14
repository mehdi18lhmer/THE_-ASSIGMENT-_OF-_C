#include <stdio.h>
#include <string.h>

int main() {
    int a;
    int even = 0;
    int odd = 0;

    do {
        printf("Enter a number (negative number to stop): \n");
        scanf("%d", &a);

       
            if (a % 2 == 0) {
                even++;
            } else {
                odd++;
            }
        

    } while (a >= 0);

    printf("Total even numbers: %d\n", even);
    printf("Total odd numbers: %d\n", odd);

    return 0;
}