#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define INF 987654321
#pragma GCC optimize ("-O3")
int main() {
    // O(n^2) suffices 
    int l,r; 
    cin >> l >> r; 
    int maxval = -INF;  
    for (int i = l; i <= r; i++){
        for (int j = i; j <= r; j++){
            maxval = max(maxval,i^j); 
        }
    }
    cout << maxval << endl; 
    return 0;
}
