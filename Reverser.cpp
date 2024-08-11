#include "Reverser.h"
#include <string>

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1; // Error: negative input
    }
    if (value < 10) {
        return value; // Base case: single-digit number
    }
    int lastDigit = value % 10;
    int remainingValue = value / 10;

    // Recursive case: append the last digit in front of the reversed remaining digits
    int numDigits = std::to_string(remainingValue).length();
    return lastDigit * pow(10, numDigits) + reverseDigit(remainingValue);
}

std::string Reverser::reverseString(const std::string& characters) {
    if (characters.empty()) {
        return ""; // Base case: empty string
    }
    if (characters.length() == 1) {
        return characters; // Base case: single-character string
    }

    // Recursive case: move the last character to the front and reverse the remaining string
    return characters.back() + reverseString(characters.substr(0, characters.length() - 1));
}
