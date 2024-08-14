#include <stdio.h>
#include <string.h>

int main(){
  float midterm;
  float final ;
  float total_grade ; 

  printf("enter the midterm grade : \n");
  scanf("%f", &midterm);


  printf("enter the final grade : \n ");
  scanf("%f" , &final);

  total_grade = (midterm * 30 + final * 70 )/ 100;

  printf(" total_grade is : %.2f", total_grade);

    return 0 ;
}