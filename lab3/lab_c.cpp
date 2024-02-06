#include <iostream>
using namespace std;

int main(){
    int n;
    int counter=0;
    int max=-9999999999;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if (a[i]>max){
            max=a[i];
        }
    }
    cout << max;
}