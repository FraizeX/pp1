#include <iostream>
#include <map>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> teams;

    for (int i = 0; i < n; ++i) {
        string first, second;
        int score1, score2;

        cin >> first >> score1 >> second >> score2;

        // Combine names to create a key
        string teamKey = first + " and " + second;

        // Check if the team is already in the map
        map<string, int>::iterator it = teams.find(teamKey);
        if (it != teams.end()) {
            // Update the score for the existing team
            it->second += (score1 + score2);
        } else {
            // Insert a new team with its score
            teams.insert(pair<string, int>(teamKey, score1 + score2));
        }
    }

    // Print the unique teams
    for (map<string, int>::iterator it = teams.begin(); it != teams.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}