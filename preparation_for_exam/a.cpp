#include <iostream>

using namespace std;

int main(){
    int v, t;
    cin >> v;
    cin >> t;
    int prod = v * t;
    int ans = 0;

    if(prod > 0){
        if(prod > 109){
            cout << (prod) % 109;
        }
        else if(prod <= 109){
            cout << 109 - prod;
        }
    }
    else if(prod < 0){
        if(prod * -1 > 109){
            while(prod < 0){
                prod += 109;
                ans = prod;
            }
            cout << ans;
        }
        else if(prod * -1 < 109){
            cout << 109 + prod;
        }
    }

    return 0;
}