#include <iostream>
#include <vector>

using namespace std;

string validstring(const string& s){
    string ans;
    int sum = 0;
    int counter = 0;
    for(size_t i = 0; i < s.size(); i++){
        char a = s[i];
        char b = s[(s.size())-1];
        int last = b - '0';
        int digit = a - '0';
        sum += digit;
        if(sum % last == 0){
            ans = "Yes";
        }
        else{
            ans = "No";
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    string ans = validstring(s);
    cout << ans;

    return 0;

}