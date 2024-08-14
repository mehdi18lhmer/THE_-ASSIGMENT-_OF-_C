#include <stdio.h>
#include <string.h>

int main (){

 int A, B;
   float result = 1;
  
   
    printf("Enter the base A: \n");
    scanf("%d", &A);
    printf("Enter the exponent B: \n");
    scanf("%d", &B);

    for (int i = 0; i < B; i++) {

        result *= A;
    }

    printf("%d to the power of %d is: %f\n", A, B, result);
    return 0;
}