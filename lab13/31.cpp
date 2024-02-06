#include <iostream>
#include <vector>

using namespace std;

int main(){
    int max = -999999999;
    int min = 99999999;
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }

    for(int i = 0; i < n; ++i){
        if(max < v[i]){
            max = v[i];
        }
        if(min > v[i]){
            min = v[i];
        }
    }

    cout << max - min;
    return 0;
}