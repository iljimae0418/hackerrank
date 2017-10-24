#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll; 


int main() {
    ll sum = 0,num;  
    int n; 
    cin >> n; 
    for (int i = 0; i < n; i++){
        cin >> num; 
        sum += num; 
    }
    cout << sum << endl; 
    return 0;
}
