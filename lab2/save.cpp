#include <iostream>
using namespace std;

int main(){
    int n;
    int counter1=1,counter2=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==0){
            counter1=counter1+1;
        }
    }
    cout << counter1;
    return 0;
}