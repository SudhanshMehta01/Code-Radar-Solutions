#include <stdio.h>

int main() {
    double num;

    // Input a number from user
    
    scanf("%ld", &num);

    // Check if the LSB (Least Significant Bit) is set or not
    if (num & 1)
        printf("Set\n");  // LSB is 1
    else
        printf("Not Set\n");  // LSB is 0

    return 0;
}
