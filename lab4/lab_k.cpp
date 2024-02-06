#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;


    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        int sumraw = 0;
        for (int j = 0; j < m; j++) {
            int counter = 0;
            if(i >= counter){
                sumraw+=a[i][j];
                counter+=1;
            }
        }
        cout << "The sum of row number " << i+1 << " is" << " " <<  sumraw << endl;
    }

    for (int i = 0; i < m; i++) {
        int sumcol = 0;
        for (int j = 0; j < n; j++) {
            int counter1 = 0;
            if (i >= counter1){
                sumcol+=a[j][i];
                counter1+=1;

            }
        }
        cout << "The sum of column number " << i+1  << " is" << " " <<  sumcol << endl;
    }

    return 0;
}