#include <cstdio>

#include <cstdio>
#include <string>
#include <iostream>

/**
 * @brief Function to get the ordinal suffix for a given number.
 *
 * @param number The number to get the ordinal suffix for.
 * @return std::string The ordinal suffix.
 */
std::string getOrdinalSuffix(int number) {
    if (number % 100 >= 11 && number % 100 <= 13) {
        return "th";
    }
    switch (number % 10) {
        case 1: return "st";
        case 2: return "nd";
        case 3: return "rd";
        default: return "th";
    }
}
/**
 * @brief Main function to calculate the nth term of an arithmetic sequence.
 *
 * This program prompts the user to input two consecutive numbers in an arithmetic sequence
 * and the position of the term they want to find. It then calculates and displays the value
 * of the term at the specified position.
 *
 * @return int Returns 0 upon successful execution.
 */
int main() {
    int startingValue, nextValue;
    int position, term;
    
    printf("Enter two number in sequence number: ");
    scanf("%d%d", &startingValue, &nextValue);

    int commonDifference = nextValue - startingValue;

    printf("Enter the position of the number you want to find: ");
    
    scanf("%d", &term);

    position = startingValue + (term - 1) * commonDifference;
    std::string suffix = getOrdinalSuffix(term);
    printf("The number at the %d%s position is %d\n", term, suffix.c_str(), position);
}