#include <iostream>
#include <string>

using namespace std;

string chnglttr(string& s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] + 1;
        }
    }
    return s;
}

int main(){
    string s;
    getline(cin, s);
    cout << chnglttr(s);
}
