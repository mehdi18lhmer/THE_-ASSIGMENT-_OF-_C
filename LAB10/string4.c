#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int max_freq = 0, i;
    char max_char;

    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }
    for (i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = (char)i;
        }
    }

    printf("The character that has the highest number of occurrences is '%c' with %d occurrences\n", max_char, max_freq);
    return 0;
}
