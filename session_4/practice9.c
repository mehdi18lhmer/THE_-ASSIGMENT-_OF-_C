#include <stdio.h>


int main (){

  int x;
  int y;
  int tmp ;

    printf("enter the number  1 \n:");
    scanf("%d", &x);
    printf("enter the number  2 \n:");
    scanf("%d", &y);

    tmp = x ;
    x = y ;
     y = tmp ;

     printf("the number 1 : %d \n", x);
     printf("the number 2 : %d \n" , y);


    return 0;

}