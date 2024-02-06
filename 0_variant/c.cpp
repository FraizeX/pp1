#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> miniPeaks(int n, vector <int> a){
    vector<int> d;
    for(int i = 1; i < n; ++i){
        if(a[i] > a[i-1] && a[i] > a[i+1]){
            d.push_back(a[i]);
        }
    }
    return d;
}

int main(){
    int n;
    cin >> n;
    int max = -99999;
    vector <int> a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        if(a[i] > max){
            max = a[i];
        }
    }

    vector<int> d = miniPeaks(n, a);
    for(int i = 0; i < d.size(); ++i){
        if(d[i] <= max){
            cout << d[i] << " ";
        }
        else{
            cout << "";
            break;
        }
    }
    return 0;

}