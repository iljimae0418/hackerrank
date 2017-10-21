// problem link: https://www.hackerrank.com/challenges/coin-change/problem
#include <iostream>
#include <cstdlib>
#include <cstring> 
#include <algorithm>
using namespace std; 
typedef long long ll;  
int c[55]; // set of coins 
int n,m; 
ll cache[255][55]; 
ll solve(int i,int pre){
	if (i == 0) return 1;  
	ll &ret = cache[i][pre];  
	if (ret != -1) return ret;
	ret = 0;  
	for (int j = pre; j < m; j++){
		if (i-c[j] >= 0){
			ret += solve(i-c[j],j); 
		}
	}
	return ret;  
}
int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL);  
	cin >> n >> m; 
	for (int i = 0; i < m; i++){
		cin >> c[i]; 
	}
	memset(cache,-1,sizeof(cache));  
	cout << solve(n,0) << endl; 
	return 0; 
}
