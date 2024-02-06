#include <iostream>

using namespace std;

int sum(string& s){
    int ans;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        if(isdigit(c)){
            int digit = c - '0';
            ans += digit;
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    cout << sum(s);
}