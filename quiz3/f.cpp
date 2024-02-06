#include <iostream> 
#include <string>

using namespace std;

void newstr(string& s){
    string ans;
    string digits;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        if(islower(c)){
            ans += c;
        }
    }
    cout << ans;
}

int main(){
    string s;
    getline(cin, s);
    newstr(s);
}