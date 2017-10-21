#include <iostream>
#include <cstdlib>
#include <cstring> 
#include <algorithm>
using namespace std; 
long long dp[255]; 
long long c[55]; // set of coins 
int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);  
	int n,m; 
	cin >> n >> m; 
	for (int i = 0; i < m; i++){
		cin >> c[i]; 
	}
	dp[0] = 1; 
	for (int i = 0; i < m; i++){
		for (int j = c[i]; j <= n; j++){
			dp[j] += dp[j-c[i]]; 
		}
	}
	cout << dp[n] << endl; 
	return 0; 
}
