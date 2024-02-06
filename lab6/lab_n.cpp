#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > newarray(const vector< vector<int> >& a){
    int n = a.size();
    int m = a[0].size();
    vector< vector<int> > d(m, vector<int> (n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            d[j][i] = a[i][j];
        }
    }
    return d;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector< vector<int> > a(n, vector<int> (m));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    vector< vector<int> > d = newarray(a);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}