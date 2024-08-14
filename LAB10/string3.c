#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int count = 0, i;

    printf(" sentence: ");
    gets(sentence);

   
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == '  ' || sentence[i] == '\n' || sentence[i] == '\t') {
            count++;
        }
    }
    count++; 
    printf("The number of words in the sentence is: %d\n", count);

    return 0;
}
