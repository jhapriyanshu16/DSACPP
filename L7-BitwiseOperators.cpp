//Check if a number is power of two or not using bitwise operator
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // Check if n is greater than 0 and if the bitwise condition holds
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int n = 16;
    if (isPowerOfTwo(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}