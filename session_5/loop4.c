#include <stdio.h>
#include <string.h>

int main (){

    int grade ;
    int grade1 ;
    int grade3 ;
    int grade2 ;
    int count = 0;
    int average ;

for (int i = 0; i < 20 ; i++){

      printf(" enter the grade \n");
      scanf("%d", &grade );


       
         if( grade >= 80 ){
 
               grade1++ ;
         }else if( grade <80 && grade >= 70){

            grade2++ ; 
         }else if (grade < 70 ){

            grade3++;
         }
    count = count + i ;
      
}
 average =  count / 20 ; 


     printf(" the average is : %d", average);


    return 0 ;
}