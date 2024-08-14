#include <stdio.h>
#include <string.h>

int main (){

float angle1 ;
float angle2 ;
float angle3 ;

printf("enter the angle 1 : \n");
scanf("%f", &angle1);


printf("enter the angle 2 : \n");
scanf("%f", &angle2);

   angle3 =  180 - (angle1 + angle2) ;

      printf( "this is the angle 3 %.2f ", angle3); 
 

}