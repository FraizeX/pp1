#include <iostream>
#include <string>

using namespace std;

void isTrue(string& s){
    string word;
    for(int i = 0; i <= s.size(); ++i){
        if(i == s.size() || s[i] == ' '){
            if(!word.empty() && word.find_first_of("0123456789") == -1){
                cout << word << endl;
            }
            word = "";
        }
        else{
                word = word + s[i];
            }
    }
}

int main(){
    string s;
    getline(cin, s);
    isTrue(s);
    return 0;
}