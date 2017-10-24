#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map> 
#include <algorithm>
using namespace std;
// using reverse iterator for map 

int main() {
    int n; 
    cin >> n; 
    map<int,int> mp; 
    for (int i = 0; i < n; i++){
        int x; 
        cin >> x; 
        mp[x]++;  
    }
    map<int,int>::reverse_iterator rit = mp.rbegin(); 
    cout << rit->second << endl; 
    return 0;
}
