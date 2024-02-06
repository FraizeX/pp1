#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int N;
    int a=0;
    cin >> N;
    while(N>pow(a,2)){
        a=a+1;
        if(pow(a,2)>N){
            break;
        }
        cout << pow(a,2) << endl;
    }
    return 0;
}