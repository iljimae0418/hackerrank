// problem link: https://www.hackerrank.com/challenges/equal/problem
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std; 
const int INF = 987654321;  
int c[10001]; 
int solve(int k,int n){
	int ret = 0; 
	for (int i = 0; i < n; i++){
		ret += (c[i]-k)/5 + (c[i]-k)%5/2 + (c[i]-k)%5%2; 
	}
	return ret; 
}
int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	int t; 
	cin >> t;  
	while (t--){
		int n,minval = INF; 
		cin >> n; 
		for (int i = 0; i < n; i++){
			cin >> c[i];  
			minval = min(minval,c[i]); 
		}
		int ans = INF; 
		for (int i = 0; i <= 5; i++){
			ans = min(ans,solve(minval-i,n)); 
		}
		cout << ans << endl; 
	}	
	return 0;  
}
