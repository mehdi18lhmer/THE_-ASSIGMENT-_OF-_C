#include <stdio.h>
#include <string.h>


int  function (int n , int m);
int main (void){

int x ;
int z;
   printf("enter the number 1 \n");
   scanf("%d" , &x);
   printf(" enter the number 2 \n ");
   scanf("%d" , &z);

   int sum = function( x , z);// fuction call

   int add = sum + 10 ;
   printf(" the add is %d \n", add);

   printf(" %d\n ", sum);

}


int  function (int n , int m){

   int result ;
   result = n + m ;
   return result ;
 
}
