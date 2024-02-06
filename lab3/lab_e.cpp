#include <iostream>
using namespace std;

int main(){
    long long n;
    long long counter=0;
    cin >> n;
    long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        counter=counter+a[i];
    }
    cout << counter;
}