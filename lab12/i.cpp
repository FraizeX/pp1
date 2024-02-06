#include <iostream>
#include <cctype> // For isdigit function

int main() {
    // Input
    std::string s;
    std::cin >> s;

    // Calculate the sum of digit symbols
    int sum = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) {
            // Convert the digit character to an integer and add to the sum
            sum += s[i] - '0';
        }
    }

    // Output the sum
    std::cout << sum << std::endl;

    return 0;
}