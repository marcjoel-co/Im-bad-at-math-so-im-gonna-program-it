// shows that you have to multiply across the fractions to get the result
#include <stdio.h>

#define
#define 

#define 
#define numerator1
// Function prototypes
void multiply_fractions(int num1, int denom1, int num2, int denom2);
void 

int main() {
    // Define the fractions (7/5 and 6/7 as an example)
    int numerator1 = 7, denominator1 = 6;
    int numerator2 = 6, denominator2 = 7;

    // Call the function to multiply and display the fractions
    multiply_fractions(numerator1, denominator1, numerator2, denominator2);

    return 0;
}

// Function to multiply fractions and display the result
void multiply_fractions(int num1, int denom1, int num2, int denom2) {
    // Calculate the resulting numerator and denominator
    int result_num = num1 * num2;
    int result_denom = denom1 * denom2;

    // Display the formatted output
    printf("   %d     ->   %d       %d\n", num1, num2, result_num);
    printf("  ---    x   ---   =  ---\n");
    printf("   %d     ->   %d       %d\n", denom1, denom2, result_denom);
}
