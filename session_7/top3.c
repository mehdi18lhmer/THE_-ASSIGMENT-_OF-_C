#include <stdio.h>


int prime( int n ){

    if ( number <= 1) {
        return 0; 
    }
    for (int i = 2; i <= number/ 2; i++) {
        if (number % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

void function( int a ,int b){
 printf(" the primes numbers betwen %d and %d", n , m);

    for( int i = n , i <= m ; i++){
      if( prime(i)){

        printf("%d", i);
      }

    }
     printf(" %d");
}

int main (){

    int n ;
    int m ;
           printf(" the two number is n and m \n ");
           scanf("%d %d", &n , &m);

         function(n,m);

    return 0;
}