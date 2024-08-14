#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf(" please enter thefirst string: ");
    gets(str1);
    printf(" please enter the second string: ");
    gets(str2);

    if (strstr(str1, str2) != NULL) {
        printf("The second string is a substring of the first string.\n");
    } else {
        printf("The second string is not a substring of the first string.\n");
    }

    return 0;
}
