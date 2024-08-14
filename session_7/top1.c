#include <stdio.h>


int fuction(int n){


if( n%2 == 0){

     printf(" this is a number even : %d", n);

}else{

     printf(" this is a number odd : %d", n);
}

}

int main(){

   int N ;
 printf(" enter an a number : \n");
 scanf("%d", &N);

    fuction(N);
 
    return 0;
}