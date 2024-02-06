#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int minTotalGrades = 99999999;
    int subjectToDrop = 1;
    int currentSubject = 1;
    int totalGrades = 0;

    int a[n][m];
    for (int i = 0; i < n; i++) {
        int totalGrades = 0;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            totalGrades += a[i][j];
        }

        if (totalGrades < minTotalGrades) {
            minTotalGrades = totalGrades;
            subjectToDrop = currentSubject;

        }
        currentSubject++;
    }

    cout << subjectToDrop << endl;

    return 0;
}