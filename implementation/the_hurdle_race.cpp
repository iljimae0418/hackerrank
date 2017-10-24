#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k; 
    cin >> n >> k; 
    vector<int> a(n); 
    int maxval = k; 
    for (int i = 0; i < n; i++){
        cin >> a[i];  
        maxval = max(maxval,a[i]);  
    }
    cout << maxval-k << endl; 
    return 0;
}
