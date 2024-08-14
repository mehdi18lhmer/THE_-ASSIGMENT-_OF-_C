#include <stdio.h>
#include <string.h>
# define I 
  int main(){
    
 float delta ;
 float a ;
 float b ;
 float c ;
 float total1;
 float total2;
  
    printf(" enter the a \n");
    scanf("%f", &a);
    printf(" enter the b \n");
    scanf("%f", &b);
    printf(" enter the c \n");
    scanf("%f", &c);

     delta = b * b - 4*a*c ;

     if( delta > 0 ){

        total1 = (-b + sqrt(delta)) / (2 * a) ;
        total2 = (-b - sqrt(delta)) / (2 * a) ;

        printf(" the total 1 is %f", total);    
        printf(" the total 2 is %f", total);

     }else if( delta == 0){

        total1 = -b / (2 * a);
        printf("the total is :  %f" , total);

     }else{

        total = (-b + I*sqrt(delta)) / 2*a ;
        printf(" the solution is %f", total);
    
         total = (-b - I*sqrt(delta)) / 2*a ;
        printf(" the solution is %f", total);
    


     }

     
    

    
     
    
     
     



    return 0; 
  }