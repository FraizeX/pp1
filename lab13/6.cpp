#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int up = 0;
    int dwn = 0;
    string s;
    cin >> s;
    vector<char> vec(s.size());
    for(int i = 0; i < s.size(); ++i){
        vec[i] = s[i];
        if(isupper(vec[i])){
            up++;
        }
        if(islower(vec[i])){
            dwn++;
        }
    }

    cout << dwn << " " << up;
    return 0;
}