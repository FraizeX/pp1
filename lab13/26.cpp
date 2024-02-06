#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    float gpa = 0;
    float total = 0;
    float n;
    cin >> n;
    vector< vector<float> > v(n, vector<float>(4));
    for(int i = 0; i < n; ++i){
        for(float j = 0; j < 4; ++j){
            cin >> v[i][j];
            total += v[i][3];
        }
    }

    for(int i = 0; i < n; ++i){
        if(v[i][0] + v[i][1] >= 30 && v[i][2] >= 20){
            int gp = 0;
            gp += ((v[i][0] + v[i][1] + v[i][2]) - 50) / 5;
            gpa += (((gp + 3) * v[i][3]) / 3) / total;
        }
        else{
            gpa += 0;
        }
    }
    cout << setprecision(6)<< gpa;
    return 0;
}