#include <iostream>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    
    int arr[r][c];

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }


    int sum = 0;

    cout << "coordinates of min elements: " << endl;

    for (int j = 0; j < c; j++) {
        int col = arr[0][j];
        int minelindex = 0;

        for(int i = 0; i < r; i++) {
            if (arr[i][j] < col) {
                col = arr[i][j];
                minelindex = i;
            }
        }

        cout << minelindex + 1 << ";" << j + 1 << endl;
        sum += col;
    }
    cout << "" << endl;
    cout << "Their sum:" << endl << sum;

    return 0;
}
