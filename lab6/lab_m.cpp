#include <iostream>
#include <vector>

using namespace std;

vector<int> newarray(const vector<int>& a){
    vector<int> d(a.size());
    for(int i = 0; i < a.size(); i++){
       d[i] = a[i];
    }
    return d;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    vector<int> d = newarray(a);

    for(int i = n - 1; i > -1; i--){
        cout << d[i] << " ";
    }
    return 0;

}