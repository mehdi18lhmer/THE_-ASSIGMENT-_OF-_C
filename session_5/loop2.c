#include <stdio.h>
#include <string.h>

int main (){

float a;
float b;
float c;
float total ;

printf("enter the a \n");
scanf("%f", &a);

 do{

printf("enter the b \n");
scanf("%f", &b);
printf("enter the c \n");
scanf("%f", &c);

 }while( b == 0 || c == 0);

 total = a / (b * c) ;

   printf(" the total is %.2f \n", total);

    return 0;
}