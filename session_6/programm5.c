#include <stdio.h>
#include <string.h>

 int main (){

int x1;
int y1;
int x2;
int y2;
  
     printf("enter the x1 of A \n");
     scanf("%d", &x1);
     printf("enter the y1 of A \n");
     scanf("%d", &y1);
      printf("enter the x2 of B \n");
     scanf("%d", &x2 );
     printf("enter the y2 of B \n");
     scanf("%d", &y2 );
       
         if( x1 = x2){

              printf("The line (AB) is horizontal\n");

         }else if( y1 = y2 ){

              printf("The line (AB) is vertical\n");

         }else{

              printf("The line (AB) is oblique\n");
         }


         return 0;
 
 }
