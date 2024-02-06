#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n-(i+1); j++){
            cout << "." << "";
        }
        cout << i+1 << "";
        if(i==0){
            cout << "";
        }
        else if (i!=0){
            for(int k=0; k<i; k++){
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}