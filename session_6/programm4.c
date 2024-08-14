#include <stdio.h>


int main(){

     int N ;
     int M ;
     int result;
     char operator;

        printf("enter the number N \n");
        scanf("%d", &N);

         printf("enter the number M \n");
        scanf("%d", &M);   

        printf("which of operator(+,-,*,/)");
        scanf("%c", &operator);

        switch (operator){
           case '-' : 
            result = N - M ;
            printf("%d" , &result );
            break ;

           case '+' : 
           result = N + M ;
           printf("%d", &result);
           break ;

           case '/' : 
              if( N = 0 || M == 0){
              result = N / M ;
            printf("%d" , &result );  
              }
            break ;

           case '*' :
            result = N * M ;
              printf("%d" , &result );
            break ;

            default : 
            printf("error , invalid operator "); 
         
        }        
                       
           
    return 0;
}