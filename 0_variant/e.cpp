#include <iostream>
#include <vector>

using namespace std;

vector<int> accumulating_sum(int n, vector<int> a){
    vector<int> d = a;
    for(int i = 0; i < n; ++i){
        d[0] = a[0];
        d[i+1] = d[i] + a[i+1];
    }
    return d;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    vector<int> d = accumulating_sum(n, a);
    for(int i = 0; i < n; ++i){
        cout << d[i] << " ";
    }
    return 0;
}