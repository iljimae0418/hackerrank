#include <cmath>
#include <cstdio>
#include <climits> 
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
const long long INF = 2e16;  
int main() {
    long long minval = INF, maxval = -INF;   
    long long a[5]; 
    for (int i = 0; i< 5; i++){
        cin >> a[i]; 
    }
    for (int skip = 0; skip < 5; skip++){
        long long sum = 0; 
        for (int i = 0; i < 5; i++){
            if (i == skip) continue; 
            else sum += a[i];  
        }
        minval = min(minval,sum);  
        maxval = max(maxval,sum);   
    }
    cout << minval << " " << maxval << endl; 
    return 0;
}
