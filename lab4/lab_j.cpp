#include <iostream>
#include <cmath>
#include <math.h>
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
        for (int j = 0; j < m; j++){
            int value = i+j;
            int even=a[i][j]+1;
            int odd=a[i][j]-1;
            if(value%2==0){
                a[i][j]=even;
            }
            else if(value%2!=0){
                a[i][j]=odd;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}