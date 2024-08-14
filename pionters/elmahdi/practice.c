#include <stdio.h>

int main (){
  
   int array[] = { 1,4,7,8,5,2,0};

       for( int i =0 ; i < 7 ; i++){

             if( array[i] == -1 ){

                printf(" found \n");
                  return 0 ;
             }

       }
 
  printf(" not found \n");
  return 1 ;
    return  0;
}