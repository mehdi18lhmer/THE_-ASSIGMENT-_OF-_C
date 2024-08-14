#include <stdio.h>
#include <string.h>

void sortString(char* str) {
    int i, j;
    char temp;
    int len = strlen(str);
    for (i = 0; i < len - 1; i++) {
   for (j = i + 1; j < len; j++) {
    if (str[i] > str[j]) {
  temp = str[i];
       str[i] = str[j];
     str[j] = temp;
}  
 }
  }
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
     printf("The strings are not anagrams.\n");
     return 0;
    }

    sortString(str1);
        sortString(str2);

    if (strcmp(str1, str2) == 0) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
