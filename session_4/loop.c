 #include <stdio.h>

 int main(void) {
     int x, y; 
     int temp ;

     scanf("%d", &x);
      scanf("%d", &y);
      
        temp = x ;
        x = y ;
        y = temp ;

 

      printf("%d\n", x); 
      printf("%d\n", y); 
      return(0);
       }