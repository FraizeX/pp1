#include <iostream>
#include <algorithm>
#include <vector>

// Function to calculate n^n
long long powN(int n) {
    long long result = 1;
    for (int i = 0; i < n; ++i) {
        result *= n;
    }
    return result;
}

int main() {
    int N;
    std::cin >> N;

    // Create a vector to store the sequence
    std::vector<long long> sequence(N + 1);

    // Generate the sequence using the powN function
    std::generate(sequence.begin(), sequence.end(), powN);

    // Output the sequence
    for (int i = 0; i <= N; ++i) {
        std::cout << sequence[i] << " ";
    }

    return 0;
}