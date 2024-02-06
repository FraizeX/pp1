#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int sum = 0;
    int last;
    string s;
    cin >> s;
    vector<char> v(s.size());
    for(int i = 0; i < s.size(); ++i){
        v[i] = s[i];
        sum += v[i] - '0';
        last = v[s.size() - 1] - '0';
    }

    for(int i = 0; i < s.size(); ++i){
        if(sum % last == 0){
            cout << "Yes";
            break;
        }
        else{
            cout << "No";
            break;
        }
    }
    return 0;
}