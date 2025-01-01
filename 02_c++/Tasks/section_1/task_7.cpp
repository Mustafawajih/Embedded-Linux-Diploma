#include <iostream>
#include <iomanip>
#include <bitset>
#include <string>

int main() {
    int choice;
    std::cout << "Choose conversion type:\n";
    std::cout << "1. Decimal to Binary\n";
    std::cout << "2. Binary to Decimal\n";
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    if (choice == 1) {
        // Decimal to Binary
        int decimal;
        std::cout << "Enter a decimal number: ";
        std::cin >> decimal;

        // Using bitset to convert to binary
        std::bitset<32> binary(decimal);
        std::cout << "Binary representation: " << binary.to_string() << std::endl;
    } 
    else if (choice == 2) {
        // Binary to Decimal
        std::string binary;
        std::cout << "Enter a binary number: ";
        std::cin >> binary;

        // Convert binary to decimal
        int decimal = std::stoi(binary, nullptr, 2);
        std::cout << "Decimal representation: " << decimal << std::endl;
    } 
    else {
        std::cout << "Invalid choice!" << std::endl;
    }

    return 0;
}
