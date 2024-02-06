#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i] >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i = 0; i < n; ++i){
        cout << a[i] << " " << b[i] << endl;
    }
    return 0;
}