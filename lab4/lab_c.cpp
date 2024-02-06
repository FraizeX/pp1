#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int counter=0;

    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(a[i][j]<0){
                counter=counter+1;
            }
        }
    }
    cout << counter;
    return 0;
}