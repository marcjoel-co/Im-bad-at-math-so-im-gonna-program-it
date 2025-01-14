/* this is not full prof i'm to lazy to implement the logic for fractions :(
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Function prototypes
bool is_naturalnumber(double n);  // Positive integers 1 2 3 4 5 6 7 8 9 ...
bool is_wholenumber(double n);    // Non-negative integers 0 1 2 3 4 5 6 7 8 9 ...
bool is_integer(double n);        // Integers -3 -2 -1 0 1 2 3 ...
bool is_rational(double n);       // rational numbers 1/2 3/4 5/6 ...
bool is_irrational(double n);     // irrational numbers pi e sqrt(2) ...
bool is_realnumber(double n);     // natural, whole, integer, rational, and irrational numbers
bool is_imaginary(double n);      // imaginary numbers 2i 3i 4i 5i ... 
void print_result(const char *type, bool result); // Helper function to print results with color

int main(int argc, char *argv[]) 
{ 

    // Check if exactly one argument is provided
    if (argc != 2) 
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Try to parse the argument as a number
    char *endptr; // 
    double number = strtod(argv[1], &endptr);

    // Check for invalid input
    if (*endptr != '\0') {
        printf("Invalid input. Please provide a valid number.\n");
        return 1;
    }

    // Print the results
    printf("\nResults:\n");
    print_result("Natural number", is_naturalnumber(number));
    print_result("Whole number", is_wholenumber(number));
    print_result("Integer", is_integer(number));
    print_result("Rational", is_rational(number));
    print_result("Irrational", is_irrational(number));
    print_result("Real number", is_realnumber(number));
    print_result("Imaginary", is_imaginary(number));

    return 0;
}

// Function implementations
bool is_naturalnumber(double n) {
    return n > 0 && n == (int)n; // Positive integers
}

bool is_wholenumber(double n) {
    return n >= 0 && n == (int)n; // Non-negative integers
}

bool is_integer(double n) {
    return n == (int)n; // Any number without a fractional part
}

bool is_rational(double n) {
    return !is_irrational(n); // Excludes irrational numbers
}

bool is_irrational(double n) {
    double frac_part = n - (int)n;
    return frac_part != 0; // Has a fractional part
}

bool is_realnumber(double n) {
    return true; // All valid inputs are real numbers
}

bool is_imaginary(double n) {
    return false; // Only imaginary numbers are considered as not real
}

// Helper function to print results with color
void print_result(const char *type, bool result) {
    if (result) {
        printf("%s = \033[0;32mTrue\033[0m\n", type); // Green for True
    } else {
        printf("%s = \033[0;31mFalse\033[0m\n", type); // Red for False
    }
}
