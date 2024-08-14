#include <stdio.h>

void maxvalue(int *a, int *b, int *c, int *max) {

    if (*a > *b) {
        if (*a > *c) {
             *max = *a;
        } else {
         *max = *c;
        }
    } else {
      if (*b > *c) {
            *max = *b;
      } else {
            *max = *c;
     }
}
}

         int main() {
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    maxvalue(&num1, &num2, &num3, &max);
    printf("The maximum number is: %d\n", max);

    return 0;
}
