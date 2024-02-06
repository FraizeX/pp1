#include <iostream>
using namespace std;

int main(){
    int n;
    int counter=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if (a[i]>0){
            counter+=1;
        }
    }
    cout << counter;
}