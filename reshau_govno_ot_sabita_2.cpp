#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int pos = 0;
    int max = -9999;
    vector<int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    vector<int> b(n);
    for(int i = 0; i < n; ++i){
        b[i] = a[i];
    }
    sort(a.begin(), a.end());
    unique(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++){
        if(a[i] > max){
            max = a[i];
            pos = i;
        }
    }
    a.erase(a.begin() + pos + 1, a.end());


    for(int i = a.size() ; i < n; i++){
        a[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
        if(a[i] == b[i]){
            cout << "Yes" << endl;
        }
        else if(a[i] != b[i]){
            cout << "No" << endl;
        }
    }

    return 0;
}