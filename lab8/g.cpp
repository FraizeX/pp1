#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int max = -99999;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if(max < a[i]){
            max = a[i];
        }
    }

    int k;
    cin >> k;
    int counter = 0;

    for(int i = 0; i < n; i++){
        for(int j = 2; j <= sqrt(max); j++){
            if(a[i] % j == 0 && a[i] != j){
                a[i] = 0;
                break;
            }
        }
        if(a[i] != 0 && a[i] > k){
            counter++;
        }
    }
    cout << counter;
    return 0;
}