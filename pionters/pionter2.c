#include <stdio.h>
#include <string.h>


void swap(int *a , int *b){

int tmp ;
 
 tmp = *a ;
 *a = *b ;
   *b = tmp ;

}
vs
int main (){

int a = 50 , b = 100 ;
 
swap( &a , &b);

printf("a = %d , b = %d", a , b);

    return 0;
}