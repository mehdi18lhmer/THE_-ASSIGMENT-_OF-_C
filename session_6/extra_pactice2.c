#include<stdio.h>

int main(){

int N ; // input the number N 
int i ;
int result = 1; 

 /* input the validation using the do loop to reminder
 the user to enter a positive number different 0
*/
 do{
    printf("ENTER THE N: ");
    scanf("%d", &N);

    if(N <=  0){

 printf("ENTER THE N: ");
    scanf("%d", &N);

   }
 }while( N <= 0);

   
for(i = N ; i >= 1 ; i--){// i-- to go backwards

  result = result * i ;
  
}
   printf("the factorial of the number %d is %d", N , result); 

return 0 ;

}



