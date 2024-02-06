#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int c=a&&b;
    if(a>6){
        cout << a&&b;
    }
    else if(a<b){
        cout << 0;
    }
    return 0;
}