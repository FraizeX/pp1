#include <iostream>
using namespace std;

int main(){
    int n=110;
    int counter1=0,counter2=0;
    if (n%10==0){
        counter1=counter1+1;
        if ((n/100)%10==0){
            counter1=counter1+1;
        }
    }
    cout << counter1;
    return 0;
}