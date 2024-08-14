#include <stdio.h>
#include <string.h>
#define DISCOUNT 0.1
float   amount ;

float discount (float n ){

float discount ;
float   total_amount;
discount = DISCOUNT * n ;
total_amount = n - discount ;

return total_amount;

}
int main (void){
    float x ;
printf("enter the amount if your product : \n");
scanf("%f", &amount);

  discount (amount );// function call 

  x = discount (amount );
   printf(" the total amount is %.2f", x);
}
