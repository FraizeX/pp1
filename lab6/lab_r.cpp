#include <iostream>
#include <string>

using namespace std;

string capital(string& s){
    string ans = s;
    for(int i = 0; i < s.size(); i++){
        if(islower(ans[i])){
            ans[i] = toupper(ans[i]);
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    string ans = capital(s);
    cout << ans;
    return 0;

}