#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a=sqrt(n);
    if(a*a==n){
        cout << "Yes" << endl;
    }
    else if(a*a!=n){
        cout << "No" << endl;
    }
    return 0;
}