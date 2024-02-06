#include <iostream>
using namespace std;

int main(){
    int n;
    n<=100000;
    int counter=0;
    int max=-1000000000;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if (a[i]>max){
            max=a[i];
            counter=i;
        }
    }
    cout << counter+1;
}