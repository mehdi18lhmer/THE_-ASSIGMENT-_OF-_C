#include <stdio.h>
#include "header.h"


float average_grade ;


  void menu(){

   printf(" welocom to AUI this will calculate the grade \n");
   printf(" of alls your subjects \n");
   printf(" please you should enter the following score \n ");

  }


   void sub(float *S1, float *S2, float *S3, float *S4, float *S5){


   for(int i = 0 ; i < )
  printf("enter the score of the subject : \n");
  scanf("%f", S1);
  printf("enter the score of the subject : \n");
  scanf("%f", S2);
  printf("enter the score of the subject : \n");
  scanf("%f", S3);
  printf("enter the score of the subject : \n");
  scanf("%f", S4);
  printf("enter the score of the subject : \n");
  scanf("%f", S5);

   }

float subject(float S1, float S2, float S3, float S4, float S5 ){
 
 average_grade = (S1 +S2 + S3 + S4 + S5 ) / 5 ;

 return average_grade ;
  }


 void grade( float aver){
 
  if( aver >= 90){
    printf(" A \n");
    printf(" you are pass \n");
  }else if( aver >= 80){
    printf(" B \n");
    printf(" you are pass \n");
  }else if(aver>= 70 ){
    printf(" C \n");
    printf(" you are the pass \n");
  }else if( aver>= 60){
    printf(" D \n");
    printf(" you are fail \n");
  }else if( aver>= 50 ){
    printf(" F \n");
    printf(" you are fail \n");
  }

    }
