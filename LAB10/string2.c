#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100], temp[100];

    printf(" first string: ");
    gets(str1);
    printf("pleasz entet   second string: ");
    gets(str2);
    printf(" please enter third string: ");
    gets(str3);

    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }
    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }
    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    printf("Strings in alphabetical order:\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}
