#include <stdio.h>
#include "header.h"

  int main (){

    float S1, S2, S3 ,S4 ,S5 ;

    menu();

    sub(&S1, &S2, &S3 ,&S4 ,&S5);

   float x =  subject( S1, S2, S3 ,S4 ,S5 );

    printf(" the average grade is : %f", x );

    grade(x);
    
    return 0; 
  }