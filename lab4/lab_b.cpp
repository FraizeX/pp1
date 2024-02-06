#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int max3 = -10000;
    int max = -1000000;
    int max2 = -1000000;

    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max2 = max;
                max = a[i][j];
            }
             else if (a[i][j] > max2 && a[i][j] < max) {
                max2 = a[i][j];
            }
        }
    }
    if(max2 == -1000000){
        cout << 0;
    }
    else{
        cout << max2;
    }
    return 0;
}