#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int totalChips = 0;
    int maxChips = 0;

    for (int i = 0; i < n; ++i) {
        int chips;
        std::cin >> chips;

        totalChips += chips;

        if (chips > maxChips) {
            maxChips = chips;
        }
    }

    std::cout << totalChips << " " << maxChips << std::endl;

    return 0;
}