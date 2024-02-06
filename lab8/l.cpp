#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int ans = 0;
    int pos = 0;
    int max = -9999;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        
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

    for(int i = 0; i < a.size(); i++){
        ans++;
    }
    
    cout << ans;
    return 0;
}