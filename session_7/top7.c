#include<stdio.h>

void  function(int n  ){

  for ( int i = 0 ; i < n ; i++){

     for( int j = 0; j < i ; i++){

         printf(" %d \t", j);
     }
     printf("\n");
  }

}

int main(){

  int m ;

    printf( " get the number:  \n");
  scanf("%d", &m)
    function(m);

    return 0 ;
}