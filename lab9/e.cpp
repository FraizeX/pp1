#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> phone_count;
    vector<string> phone_numbers;

    // Read input and count occurrences
    for (int i = 0; i < n; ++i) {
        string phone;
        cin >> phone;
        phone_count[phone]++;
        phone_numbers.push_back(phone);
    }

    // Count numbers occurring exactly three times
    int result = 0;
    for (int i = 0; i < phone_numbers.size(); ++i) {
        if (phone_count[phone_numbers[i]] == 3) {
            result++;
            phone_count[phone_numbers[i]] = 0; // To avoid counting the same number multiple times
        }
    }

    cout << result << endl;

    return 0;
}