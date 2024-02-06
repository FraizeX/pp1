#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string s;
    getline(cin, s);
    int len = s.size();
    int capital = 0;
    int small = 0;
    for (int i = 0; i < len; i++){
        char a = s[i];
        if (isupper(a)){
            capital++;
        }
        else if (islower(a)){
            small++;
        }
    }

    cout << small << " " << capital << endl;

    return 0;
}