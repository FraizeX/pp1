#include <iostream>
#include <vector>
#include <map>

using namespace std;

int count_duplicate_numbers(int n, const vector<int>& arr) {
    map<int, int> num_counts;
    int duplicate_count = 0;

    for (int i = 0; i < n; ++i) {
        int num = arr[i];
        if (num_counts.find(num) != num_counts.end()) {
            num_counts[num]++;
            if (num_counts[num] == 2) {
                duplicate_count++;
            }
        } else {
            num_counts[num] = 1;
        }
    }

    return duplicate_count;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = count_duplicate_numbers(n, arr);
    cout << result << endl;

    return 0;
}