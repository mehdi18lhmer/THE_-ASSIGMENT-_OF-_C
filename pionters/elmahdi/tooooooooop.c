#include <stdio.h>


 
float sub(int multi_sub){

    float cons = 00.00 ;
    float score ;

 for( int i = 0 ; i < multi_sub ; i++){
    printf(" enter the score of the subjeect :  \n");
    scanf("%f", &score);
        cons += score ;

 }
       return cons ;
}
  float aver(float cons , int  multi_sub){
     float average ;
      if( multi_sub == 0){
        return 0.0 ;
      }
    average = cons / multi_sub ;
    return average ;

  }

   void grade ( float average){
    
    if( average >= 90){
        printf(" A \n");
    }  else if( average >= 80 ){
        printf("  B \n");
    } else if (average >= 70 ){
        printf(" C \n");
    } else if(average >= 60){
        printf("  D \n ");
    } else{
        printf(" F \n ");
    }

   }

  int main(){

  float  multi_sub  ;

   printf(" how many subject: \n");
   scanf("%f", &multi_sub);

   float cons = sub(multi_sub) ;

   float average =  aver(cons , multi_sub);
    printf(" the average is : %d \n", average);
     
    grade( average); 


return 0 ;
  }