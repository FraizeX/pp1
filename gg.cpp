#include <iostream>
#include <map>
#include <iomanip>
using namespace std;
int main(){
    int n; cin>>n;
    map<string, float> m;
    map<string, int> m1;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        int a; cin>>a;
        m[s]+=a;
        m1[s]++;
    }
    for(map<string, float>::iterator it=m.begin(); it!=m.end(); it++){
        it->second/=m1[it->first];
    }
    for(map<string, float>::iterator it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<": "<<fixed<<setprecision(3)<<it->second<<endl;
    }
    return 0;
}