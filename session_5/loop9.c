#include <stdio.h>
#include <string.h>

int main (){

 int A ;
 int B ;
 int result ;

  printf(" enter the num1 : \n");
  scanf("%d", &A);
  printf(" enter the num1 : \n");
  scanf("%d", &B);
  
   for(int i = 1; i <= B ; i++){


    result = result + A ;

   }

  printf(" the multiplication is : %d ", result);
  
    return 0;
}