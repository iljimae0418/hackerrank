#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 100005;  
int candy[maxn],rating[maxn]; 
int main() {
    int n; 
    cin >> n; 
    for (int i = 0; i < n; i++){
        cin >> rating[i];
        candy[i] = 1;  
    }
    for (int i = 1; i < n; i++){
        if (rating[i] > rating[i-1]) candy[i] = candy[i-1]+1;  
    }
    for (int i = n-2; i >= 0; i--){
        if (rating[i] > rating[i+1]) candy[i] = max(candy[i],candy[i+1]+1);  
    }
    long long sum = 0; 
    for (int i = 0; i < n; i++){
        sum += (long long)(candy[i]); 
    }
    cout << sum << endl; 
    return 0;
}
