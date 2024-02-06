#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string s,t;
    cin >> s >> t;
    int len = s.size();
    int len1 = t.size();

    if (-1 == s.find(t)){
        cout << "NO";
    }
    else{
        cout << "YES";
    }


    return 0;
}