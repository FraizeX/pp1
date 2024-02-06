#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N;
    int a=-1;
    cin >> N;
    while(N>pow(2,a)){
        a=a+1;
        if(pow(2,a)>N){
            break;
        }
        cout << pow(2,a) << " ";
    }
    return 0;
}