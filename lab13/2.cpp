#include <iostream>
#include <vector>

using namespace std;

int main(){
    int sum = 0;
    int max = -9999999;
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i){
        if(v[i] > max){
            max = v[i];
        }
        sum += v[i];
    }

    cout << sum << " " << max;
    return 0;
}