#include <stdio.h>


int main (){
char ch  ;
 
printf("enter a charactere \n ");
scanf("%c", &ch);

    switch ( ch ) {
        
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break ;
            default : 
            printf("this is an consonant . \n", ch);

    }


    return 0 ;
}