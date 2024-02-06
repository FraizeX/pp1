#include <iostream>
using namespace std;

int main(){
    int n;
    int counter1=1,counter2=0,counter3=1;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%10==0){
            counter1=counter1*a[i];
        }
        else if((a[i]/10)%10==0){
            counter3=counter3*a[i];
        }
        int prod=counter1*counter3;
    }
    int prod=counter1*counter3;
    while (prod>=10){
        prod=prod/10;
        counter2=counter2+1;
    }
    if(counter2==0){
        cout << 0;
    }
    
    if(counter2>=8){
        cout << counter2-2;
    }
    else if(counter2>0){
        cout << counter2-1;
    }
    return 0;
}