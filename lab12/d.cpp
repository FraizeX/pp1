#include <iostream>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int n;
    std::cin >> n;

    int a[100]; // Assuming maximum array size is 100

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int result = a[0];

    for (int i = 1; i < n; ++i) {
        result = gcd(result, a[i]);
    }

    std::cout << result << std::endl;

    return 0;
}