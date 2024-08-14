#include <stdio.h>
#include <string.h>

int main (){

int N;
int count = 1 ;

printf(" enter a number : \n ");
scanf("%d", &N);

  for(int i = N ; i >= 1 ; i--){

    count = count * i ;
   
  }
   printf(" the factorial is %d ", count);
    return 0;
}