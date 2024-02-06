#include <iostream>
#include <vector>

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

    std::vector<long long> sequence;

    for (int i = 0; i <= N; ++i) {
        sequence.push_back(powN(i));
    }

    for (size_t i = 0; i < sequence.size(); ++i) {
        std::cout << sequence[i] << " ";
    }

    return 0;
}