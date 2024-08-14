#include <stdio.h>
#include <string.h>


int main (){
  int  time_min ;
 int time_hour ;
  float time ;
  float T ;
  printf(" enter the time of how long had been on minute :\n");
  scanf("%d", &time_min);

  printf(" enter the time of how long had been on hours :\n");
  scanf("%d", &time_hour);

  time = (time_hour * 60 + time_min) / 60 ;

  T = (float)((4 * time *time )/(time + 2) ) - 20 ;

   printf("%f" , T); 




    return 0 ;
}