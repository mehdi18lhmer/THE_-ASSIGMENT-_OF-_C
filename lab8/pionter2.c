#include <stdio.h>



void updateValue(int *a, int b) { 
*a = b;}

int main() {
int x = 4;
updateValue(&x, 10);
printf("%d\n", x);

}



  
