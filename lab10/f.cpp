#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    double totalPoints = 0;
    int totalCredits = 0;

    for (int i = 0; i < n; ++i) {
        int att1, att2, final, credits;
        cin >> att1 >> att2 >> final >> credits;

        // Constants representing the weights for each component
        const double attWeight = 0.3;
        const double finalWeight = 0.4;

        // Calculate the total points for the subject
        double subjectPoints = (att1 + att2) * attWeight + final * finalWeight;

        // Accumulate total points and total credits
        totalPoints += subjectPoints * credits;
        totalCredits += credits;
    }

    // Calculate GPA
    double gpa = totalPoints / totalCredits;

    // Print the GPA
    cout << fixed << gpa << endl;

    return 0;
}