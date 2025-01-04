//Program to convert decimal to binary
// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int binary = 0;  // To store the binary result
//     int placeValue = 1;  // Place value for binary digits (1, 10, 100, ...)

//     while (n > 0) {
//         int rem = n % 2;  // Get the remainder (binary digit)
//         binary += rem * placeValue;  // Add the digit to the correct place
//         n = n / 2;  // Update n to n/2
//         placeValue *= 10;  // Update the place value for the next digit
//     }

//     cout << "Binary: " << binary << endl;
//     return 0;
// }

//Program to convert binary to decimal
#include <iostream>
using namespace std;

int main() {
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    int decimalNumber = 0;       // To store the final decimal result
    int powerOfTwo = 1;          // Represents the place value (1, 2, 4, 8, ...)

    // Loop to process each digit of the binary number
    while (binaryNumber != 0) {
        int currentDigit = binaryNumber % 10;  // Extract the rightmost digit
        decimalNumber += currentDigit * powerOfTwo;  // Add the weighted value of the digit
        binaryNumber /= 10;                // Remove the last digit from the binary number
        powerOfTwo *= 2;                   // Update the place value (next power of 2)
    }

    cout << "The decimal equivalent is: " << decimalNumber << endl;
    return 0;
}
