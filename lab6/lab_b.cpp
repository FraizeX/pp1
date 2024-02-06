#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> newarray(const vector<int>& a, const vector<int>& b){
    vector<int> d(a.size());
    for(size_t i = 0; i < a.size(); i++){
        d[i] = abs(a[i] - b[i]);
    }
    return d;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    vector<int> d = newarray(a, b);

    for(int i = 0; i < n; i++){
        cout << d[i] << " ";
    }
    return 0;

}