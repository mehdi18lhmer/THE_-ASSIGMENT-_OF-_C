#include <stdio.h>
void mul(int a, int b, int *c);


int main(void){

int x = 5, y = 2, z;
mul(x, y, &z);

printf(“ %d %d %d \n ”, x, y, z) ;
mul(y, x, &z);
printf(“ %d %d %d \n ”, x, y, z) ;
mul(z, y, &x);
printf(“ %d %d %d \n ”, x, y, z) ;
return 0;
}

void mul(int a, int b, int *c){
    
*c = a*b;
}
