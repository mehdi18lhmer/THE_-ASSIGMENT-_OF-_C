#include <stdio.h>

void divide(int *a, int *b, int *quotient, int *remainder) {
    *quotient = *a / *b;
    *remainder = *a % *b;
}
int main() {
    int num1, num2, quotient, remainder;
    printf("Enter two numbers (dividend and divisor): ");
    scanf("%d %d", &num1, &num2);
    divide(&num1, &num2, &quotient, &remainder);
  printf("%d , %d" quotient, remainder);
    return 0;
}
