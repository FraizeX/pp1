#include <iostream>
#include <string>

using namespace std;

int summa(string& s){
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        int arr = c - '0';
        sum += arr;
    }
    return sum;
}

int main(){
    string s;
    getline(cin, s);
    int sum = summa(s);
    cout << sum;
    return 0;

}