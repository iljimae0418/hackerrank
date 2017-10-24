#include <iostream>
using namespace std; 
#pragma GCC optimize ("-O3")
int setbits(long long n){
	// how many 1s are there in the binary representation of n?  
	int count = 0;  
	while (n){
		n &= (n-1); 
		count++; 
	}
	return count;  
}
int main(){
	int t; 
	cin >> t; 
	while (t--){
		long long n;
		cin >> n; 
		if (setbits(n-1) & 1){
			// if number of 1s in binary representation of n is divisible by 2 
			cout << "Louise" << endl; 
		}else{
			cout << "Richard" << endl; 
		}
	}
	return 0; 
}
