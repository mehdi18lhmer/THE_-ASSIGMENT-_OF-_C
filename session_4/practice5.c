#include <stdio.h>


int main(){
float x1;
float y1 ;
float x2;
float y2;
float distance;

  printf("enter the coordinates 1  of point a \n");
  scanf("%f", &x1);
  printf("enter the coordinates 2  of point a \n");
  scanf("%f", &y1);

   printf("enter the coordinates 1  of point b \n");
  scanf("%f", &x2);
  printf("enter the coordinates 2  of point b \n");
  scanf("%f", &y2);

    distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)) ;

         printf("%.2f" , &distance);

    return 0 ;
}