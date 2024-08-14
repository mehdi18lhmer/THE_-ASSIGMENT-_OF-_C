#include <stdio.h>
#include <string.h>

int main () {
   char c ;

    printf(" enter somthing \n "),
    scanf("%c", &c);

    if( c == ' '){
        printf(" this is a whitespace \n");
    }else{
        printf("this is not a whitespace \n");
    }
    return 0 ;
}