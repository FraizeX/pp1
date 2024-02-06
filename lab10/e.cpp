#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<string, int> totalStudents;
    vector<pair<string, int> > dailyStudents; // Note the space between <string, int>

    for (int i = 0; i < N; ++i) {
        int M;
        cin >> M;

        for (int j = 0; j < M; ++j) {
            string place;
            int students;
            cin >> place >> students;

            totalStudents[place] += students;
        }
    }

    for (map<string, int>::iterator it = totalStudents.begin(); it != totalStudents.end(); ++it) {
        dailyStudents.push_back(make_pair(it->first, it->second));
    }

    sort(dailyStudents.begin(), dailyStudents.end());

    for (size_t i = 0; i < dailyStudents.size(); ++i) {
        double percentage = (static_cast<double>(dailyStudents[i].second) / totalStudents.size()) * 100;
        cout << dailyStudents[i].first << " " << fixed << setprecision(5) << percentage << endl;
    }

    return 0;
}