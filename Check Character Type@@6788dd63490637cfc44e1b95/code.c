#include <stdio.h>
#include <ctype.h>

int main() {
    char x;
    
    // Taking character input
    printf("Enter a character: ");
    scanf("%c", &x);

    // Check if the character is a vowel
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
        x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
        printf("Vowel\n");
    }
    // Check if the character is a digit
    else if (x >= '0' && x <= '9') {
        printf("Digit\n");
    }
    // Check if the character is a special character
    else if ((x >= 33 && x <= 47) || (x >= 58 && x <= 64) || 
             (x >= 91 && x <= 96) || (x >= 123 && x <= 126)) {
        printf("Special Character\n");
    }
    // Otherwise, it's a consonant
    else if (isalpha(x)) {
        printf("Consonant\n");
    } 
    else {
        printf("Invalid character\n");
    }
    
    return 0;
}
