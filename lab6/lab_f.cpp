#include <iostream>
#include <vector>

using namespace std;

string validstring(const string& s, const int& n){
    string ans;
    int counter = 0;
    for(size_t i = 0; i < s.size(); i++){
        char a = s[i];
        if(isdigit(a)){
            counter++;     
        }
        if (counter == n){
            ans = "YES";
            break;
        }
        else{
            ans = "NO";
        }
    }
    return ans;
}

int main(){
    int n;
    string s;
    cin >> s >> n;
    string ans = validstring(s ,n);
    cout << ans;

    return 0;

}