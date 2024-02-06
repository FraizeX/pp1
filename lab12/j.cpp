#include <iostream>
#include <vector>
#include <set>

int main() {
    // Input
    int n;
    std::cin >> n;

    std::vector<int> firstArray(n);
    std::set<int> uniqueNumbers;

    for (int i = 0; i < n; ++i) {
        std::cin >> firstArray[i];
        uniqueNumbers.insert(firstArray[i]);
    }

    int m;
    std::cin >> m;

    std::vector<int> secondArray(m);

    // Output "YES" or "NO" for each element in the second array
    for (int i = 0; i < m; ++i) {
        std::cin >> secondArray[i];

        bool found = false;
        // Check if the current element in the second array can be formed by sum of two distinct indices from the first array
        for (int j = 0; j < n; ++j) {
            int complement = secondArray[i] - firstArray[j];
            if (uniqueNumbers.count(complement) && complement != firstArray[j]) {
                found = true;
                break;
            }
        }

        // Output result
        if (found) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}