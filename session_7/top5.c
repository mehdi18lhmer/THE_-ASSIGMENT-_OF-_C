#include <stdio.h>

int power(int b, int e) {
    int  result = 1;
    for (int i = 0; i < e; i++) {
        result *= b;
    }
    return result;
}

int main() {
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &e);

    printf("%d^%d = %d\n", b, e, power(b, e));

    return 0;
}
