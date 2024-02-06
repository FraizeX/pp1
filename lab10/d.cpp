#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(const vector<int>& a, const vector<int>& b) {
    int sumA = 0, sumB = 0;

    for (size_t i = 0; i < a.size(); ++i) {
        sumA += a[i];
        sumB += b[i];
    }

    if (sumA != sumB)
        return sumA < sumB;

    if (a.size() != b.size())
        return a.size() < b.size();

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return a[i] < b[i];
    }

    return false;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int> > arr(N, vector<int>());

    for (int i = 0; i < N; ++i) {
        int M;
        cin >> M;

        arr[i].resize(M);

        for (int j = 0; j < M; ++j)
            cin >> arr[i][j];
    }

    sort(arr.begin(), arr.end(), comparator);

    for (int i = 0; i < N; ++i) {
        for (size_t j = 0; j < arr[i].size(); ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}