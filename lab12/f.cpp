#include <iostream>
#include <string>

bool isTasty(const std::string& dishName) {
    int sumAscii = 0;

    for (char ch : dishName) {
        sumAscii += static_cast<int>(ch);
    }

    return sumAscii > 300;
}

int main() {
    std::string dishName;
    std::cin >> dishName;

    if (isTasty(dishName)) {
        std::cout << "It is tasty!" << std::endl;
    } else {
        std::cout << "Oh, no!" << std::endl;
    }

    return 0;
}