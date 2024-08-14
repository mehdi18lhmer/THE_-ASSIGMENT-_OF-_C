#include <stdio.h>


int main(){

double total_pay ;
int count_emp;
int number_emp ;
double hours ;
double rate ;
double pay ;


printf("enter the the number of employees : ");
scanf("%d", &number_emp);

  count_emp = 1 ;

  while(count_emp <= number_emp){
   
     printf("the rate of the employees in each hour \n");
     scanf("%lf", &rate);

    printf("enter the how many hours do they work \n");
    scanf("%lf", &hours);

    pay = rate  * hours ;

    printf("the total pay of all the hours is %.3lf \n", pay);

    total_pay = pay + total_pay ;

    count_emp += 1 ;
  }
   
     printf("the total pay of the employees %lf \n" , total_pay);
     

return 0 ;

}