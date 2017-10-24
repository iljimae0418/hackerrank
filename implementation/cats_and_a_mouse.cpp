#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q; 
    cin >> q; 
    while (q--){
        int a,b,c; 
        cin >> a >> b >> c; 
        if (abs(c-a) == abs(c-b)) cout << "Mouse C" << endl; 
        else if (abs(c-a) < abs(c-b)) cout << "Cat A" << endl; 
        else cout << "Cat B" << endl; 
    }
    return 0;
}
