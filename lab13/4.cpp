#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector< pair<string, string> > students(n);
    for (int i = 0; i < n; ++i){
        cin >> students[i].first >> students[i].second;
    }

    cin >> m;
    vector< pair<string, string> > requests(m);
    for (int i = 0; i < m; ++i) {
        cin >> requests[i].first >> requests[i].second;
    }

    for (int i = 0; i < m; ++i) {

        bool loginFound = false;
        bool correctPassword = false;

        // Search for the login
        for (int j = 0; j < n; ++j) {
            if (students[j].first == requests[i].first) {
                loginFound = true;
                if (students[j].second == requests[i].second) {
                    correctPassword = true;
                    break;
                }
            }
        }

        // Print the result based on the search
        if (!loginFound) {
            cout << "login error" << endl;
        } else if (!correctPassword) {
            cout << "password error" << endl;
        } else {
            cout << "correct password" << endl;
        }
    }

    return 0;
}