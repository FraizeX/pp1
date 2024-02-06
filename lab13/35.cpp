#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int max = -999999;
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<int> result;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(j != i){
                result.push_back(gcd(arr[i], arr[j]));
            }
        }
    }

    for(int i = 0; i < result.size(); ++i){
        if(max < result[i]){
            max = result[i];
        }
    }
    
    cout << max;
    return 0;
}