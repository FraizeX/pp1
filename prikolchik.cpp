#include <iostream>
#include <vector>
#include <string>

using namespace std;

int isstring(string& s){
    int ans;
    int index;
    int index2 = 0;
    for(int i = s.size(); i > -1; i--){
        char a = s[i];
        if(a >= '0' && a <= '9'){
            index = i;
            for (int j = 0; j < index + 1; j++){
                char b = s[j];
                if(b == ' '){
                    index2 = j - 1;
                    ans = index2;
                }
            }
        }
    }
    return ans;
}

int main(){
    string s;
    getline(cin, s);
    int len = isstring(s);

    for(int i = 0; i < len + 1; i++){
        char c = s[i];
        cout << c;
    }
    cout << s;

    return 0;
}