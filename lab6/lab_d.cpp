#include <iostream>
#include <vector>

using namespace std;

string numberx(const vector<int>& a, const int& x){
    string ans;
    for(size_t i = 0; i < a.size(); i++){
        if(x == a[i]){
            ans = "Yes";
            break;
        }
        else{
            ans = "No";
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;

    string ans = numberx(a, x);
    cout << ans;
    return 0;

}