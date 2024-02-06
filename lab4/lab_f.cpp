#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int position=0;
    int position2=0;
    int max = -999999;

    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j]>max){
                max=a[i][j];
                position=i+1;
                position2=j+1;
            }
        }
    }

    cout << position << " " << position2 << endl;
    return 0;
}