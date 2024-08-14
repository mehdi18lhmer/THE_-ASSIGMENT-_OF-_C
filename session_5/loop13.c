#include <stdio.h>

int main() {
    int magic_number = 42; 
    int guess;
    while (1) {
        
        printf("Enter your guess: ");
        scanf("%d", &guess);
    
        if (guess > magic_number) {
            printf("Your guess is too high.\n");
        } else if (guess < magic_number) {
            printf("Your guess is too low.\n");
        } else {
            printf("Congratulations! You found the magic number.\n");
            break;
    }
    }
    return 0;
}
