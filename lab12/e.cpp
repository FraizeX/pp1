#include <iostream>
#include <string>

char getHexDigit(int num) {
    if (num >= 0 && num <= 9) {
        return char('0' + num);
    } else {
        return char('A' + (num - 10));
    }
}

std::string decimalToHex(int decimal) {
    std::string hex;
    
    while (decimal > 0) {
        int remainder = decimal % 16;
        hex = getHexDigit(remainder) + hex;
        decimal /= 16;
    }

    return hex.empty() ? "0" : hex;
}

int main() {
    int N;
    std::cin >> N;

    std::string hex = decimalToHex(N);

    std::cout << hex << std::endl;

    return 0;
}