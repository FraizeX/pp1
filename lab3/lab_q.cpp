#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main(){
    int n;
    int count=0;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            count=i;
            break;
        }
    }
    if (count>0){
        cout << "No";
    }
    else if(count==0){
        cout << "Yes";
    }
    return 0;
}