#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int max = -999999;
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; ++i){
        vec[0] = 0;
        vec[1] = 1;
        vec[i] = vec[i-1] + vec[i-2];
    }

    for(int i = 0; i < n; ++i){
            if(max < vec[i]){
                max = vec[i];
            }
        }

    if(n == 1){
        cout << 0;
    }
    if(n == 2){
        cout << 1;
    }
    else if(n > 1){
        cout << max;
    }
    return 0;
}