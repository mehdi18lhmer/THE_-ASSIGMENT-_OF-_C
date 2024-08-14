#include <stdio.h>
#include <string.h>

int main (){

float a ;
float b ;
float total ;

  printf("enter the number a \n");
  scanf("%f", &a);
  printf("enter the number b \n");
  scanf("%f", &b);
 
 do{

printf("enter the number b \n");
  scanf("%f", &b);

 }while(b == 0);

      total = a/b ;
      printf(" total is %f", total);

    return 0;
}