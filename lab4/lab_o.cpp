#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int position = 0;
    int max = -99999;

    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if (max < a[j][j]){
                max = a[j][j];
                position = j+1;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << position << ";" << position;

    return 0;
}