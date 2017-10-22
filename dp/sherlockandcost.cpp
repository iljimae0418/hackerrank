#include <iostream>
#include <cstdlib>
#include <cstring> 
#include <algorithm> 
using namespace std; 
const int INF = 2e9+77;  
// note that a[i] = 1 or b[i] 
// we try all possibilities 
int n; 
int b[100001];  
int cache[100001][110];  
int solve(int i,int pre){
	if (i == n) return 0; 
	if (i == 0) return max(solve(i+1,1),solve(i+1,b[i])); 
	int &ret = cache[i][pre]; 
	if (ret != -1) return ret; 
	return ret = max(solve(i+1,1)+abs(1-pre),solve(i+1,b[i])+abs(b[i]-pre));  
}
int main(){
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	int t; 
	cin >> t;  
	while (t--){
		cin >> n;  
		for (int i = 0; i < n; i++){
			cin >> b[i];  
		}
		memset(cache,-1,sizeof(cache)); 
		cout << solve(0,-1) << endl; 
	}
	return 0; 
}
