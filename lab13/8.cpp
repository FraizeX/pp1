#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int x; 
        cin >> x;
        if(v.empty()) v.push_back(x);
        else if(find(v.begin(), v.end(), x) == v.end()) v.push_back(x);
    }

    if(v[0] != v[1]){
        do{
            for(int i = 0; i < v.size(); ++i){
                cout << v[i] << " ";
            }
            cout << endl;
        } 
        while(next_permutation(v.begin(), v.end()));
    }
    else{
        cout << v[0] << " ";
    }
    return 0;
}