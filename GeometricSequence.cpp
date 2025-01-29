/**
 * @file GeometricSequence.cpp
 * @brief This program calculates the nth term of a geometric sequence.
 *
 * The program prompts the user to enter the first and second terms of the sequence,
 * and the position of the term they want to find. It then calculates the common ratio
 * of the sequence and uses it to find the term at the specified position.
 *
 * The formula used to find the nth term of a geometric sequence is:
 * Tn = a * r^(n-1)
 * where:
 * - Tn is the nth term
 * - a is the first term
 * - r is the common ratio
 * - n is the term position
 *
 * The program outputs the term at the specified position using both printf and cout.
 *
 * @note The program assumes that the input values are valid and that the second term
 *       is a multiple of the first term.
 */
#include <iostream>
#include <cmath>

int main() {
    // Declare variables to store the first term, second term, common ratio, position, and term
    int firstTerm, secondTerm, ratio, position, termPosition;

    // Prompt the user to enter the first and second terms of the sequence
    std::cout << "Enter the first and second term of the sequence: ";
    std::cin >> firstTerm >> secondTerm;

    // Prompt the user to enter the position of the term they want to find
    std::cout << "Enter the term you want to find: ";
    std::cin >> termPosition;

    // Calculate the common ratio of the sequence
    ratio = secondTerm / firstTerm;

    // Calculate the term at the specified position using the formula Tn = a * r^(n-1)
    int answer = firstTerm * pow(ratio, termPosition - 1);

    // Output the term at the specified position using printf
    printf("The term at position %d is %d\n", termPosition, answer);

    // Output the term at the specified position using cout
    std::cout << "The term at position " << termPosition << " is " << answer << std::endl;

    return 0;
}
