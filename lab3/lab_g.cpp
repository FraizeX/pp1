#include <iostream>
using namespace std;

int main(){
    long long n;
    long long max=-999999999;
    long long min=99999999;
    cin >> n;
    long long a[n];
    for(long long i=0; i<n; i++){
        cin>>a[i];
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    for(long long i=0; i<n; i++){
        if(a[i]==max){
            a[i]=min;
        }
        cout << a[i] << " ";
    }
    return 0;
}