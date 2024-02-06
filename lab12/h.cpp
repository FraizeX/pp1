#include <iostream>
#include <string>

// Function to reverse a string using recursion
void reverseString(std::string& s, int start, int end) {
    if (start < end) {
        // Swap characters at start and end positions
        std::swap(s[start], s[end]);

        // Recursively reverse the substring
        reverseString(s, start + 1, end - 1);
    }
}

int main() {
    // Input
    std::string s;
    std::cin >> s;

    // Reverse the string using recursion
    reverseString(s, 0, s.length() - 1);

    // Output the reversed string
    std::cout << s << std::endl;

    return 0;
}