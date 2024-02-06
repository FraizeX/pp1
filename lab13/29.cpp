#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    char l;
    int n;

    cin >> s;
    cin >> l >> n;
    
    int count = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == l){
            ++count;
        }
    }

    if(count == n){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}