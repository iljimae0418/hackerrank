#include <iostream>
#include <cstdlib>
using namespace std;
// x xor x = 0
// x xor 0 = x 
// use this fact  
int main(){
	int n; 
	cin >> n;
	int unique_int = 0; 
	for (int i = 0; i < n; i++){
		int x; 
		cin >> x;  
		unique_int ^= x; 
	}
	cout << unique_int << endl; 
	return 0; 
}
