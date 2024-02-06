#include <iostream>
using namespace std;

int main(){
    long long n, target;
    long long index=0;
    long long b=0;
    long long c=0;
    cin >> n >> target;
    long long a[n];
    for(long long i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==target){
            index=i;
        }
        else if(a[i]<target){
            b=n;

        }
        else if(a[i]>target){
            b=i;
            break;
        }

    }
    if(index!=0){
        cout << index << endl;
    }
    else if (b!=0){
        cout << b << endl;
    }
    else if (b<0){
        cout << 0 << endl;
    }
}