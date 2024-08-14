#include <stdio.h>

int main() {
    char string[100];
    int length = 0;

    printf("enter a string : ");

    gets(string);  

  
    while (string[length] != '\0') {
        length++;
    }

    printf("The length of the string is: %d\n", length);
    return 0;
}
