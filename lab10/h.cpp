#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);

    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    // Sort the sequence to get the smallest permutation
    sort(sequence.begin(), sequence.end());

    // Print the initial permutation
    for (int i = 0; i < n; ++i) {
        cout << sequence[i] << " ";
    }
    cout << endl;

    // Generate and print all possible next permutations
    while (next_permutation(sequence.begin(), sequence.end())) {
        for (int i = 0; i < n; ++i) {
            cout << sequence[i] << " ";
        }
        cout << endl;
    }

    return 0;
}