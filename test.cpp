#include <iostream>
#include <string>
#include <cmath>

int binaryToDecimal(const std::string& binary) {
    int decimal = 0;
    int length = binary.length();

    // Iterate over the binary string
    for (int i = 0; i < length; ++i) {
        if (binary[length - i - 1] == '1') {
            decimal += std::pow(2, i);  // Add the value of the bit
        }
    }

    return decimal;
}

int main() {
    std::string binaryString;

    // Input binary string from the user
    std::cout << "Enter a binary number: ";
    std::cin >> binaryString;

    // Convert binary to decimal
    int decimalValue = binaryToDecimal(binaryString);

    // Output the decimal value
    std::cout << "Decimal value: " << decimalValue << std::endl;

    return 0;
}