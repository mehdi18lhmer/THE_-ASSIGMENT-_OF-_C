#include<stdio.h>


//int number ; 
//printf("hello  enter this your number");
//scnaf("%i", &number);
/*
int number ;
  printf("enter the number betywen 1 to 3: ");
   scanf("%i", &number);  // int numnber = get_int("18555");

  
   switch(number){
    
  case 1  :
  printf("sunday");
   break;

    case 2 :
     printf("monday");
 break;

   case 3 : 
    printf("thursday");
    break ;

      default : 
       printf("this is erreur okay \n try it again ");
   }*/

 int main (){

      char operator ;
      ptintf("choose an operator( + , * , / ): ");
     scnaf("%s", &operator );

     double num1 , num2 ;
       printf("enter num1 :  ");
       scanf("%lf" , &num1);

      printf("enter num2 :  ");
      scanf("%lf" , &num2);

  double result ;

     switch(operator){
case '*' :
   result = num1 * num2 ;
break;

case '/' :
 result = num1 / num2 ;
 break ; 

 case '+' :
  result = num1 + num2 ;
   break ;

       scanf("%lf", &result);

default :
        printf("error ");
       
     }



 return 0 ;
 }
