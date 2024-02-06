#include <iostream>
#include <vector>

using namespace std;

bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string removevowels(const string& s){
    string ans = "";
    int counter = 0;
    for(size_t i = 0; i < s.size(); i++){
        char c = s[i];
        if(!isvowel(c)){
            ans += c;
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);
    string ans = removevowels(s);
    cout << ans;

    return 0;

}