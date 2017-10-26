#include <iostream>
#include <cstdlib>
#include <vector> 
#include <algorithm>
using namespace std; 
typedef long long ll; 
const int node = 100010 ; 
vector<int> adj[node]; 
const int mod = 1e9+7; 
int memo[node][2][2];  
int done[node][2][2];  
int cc = 1;  
ll g(int s,int p,int c,int cur,int ally);  
ll f(int s,int p,int cur,int ally){
	ll res = 0; 	
	res = g(s,p,0,cur,ally);  
	return res; 
}
ll g(int s,int p,int c,int cur,int ally){
	// the number of different valid trees we can root at 
	// the parent of t (whose parent is s).  
	ll ret = 0; 
	if (c == adj[s].size()){
		return ally; 
	}
	int t = adj[s][c];  
	if (t == p){ // ignore back edge to parent of current node
		ret = g(s,p,c+1,cur,ally); // skip 
		return ret; 
	}
	if (done[t][cur][ally] == cc){
		return memo[t][cur][ally];  
	}
	done[t][cur][ally] = cc; 
	// for each child, we make it ally with its parent 
	// and start independent sub-tree dp  
	ret = f(t,s,cur,1)*g(s,p,c+1,cur,1);  
	ret %= mod; 
	// or we make them different 
	ll temp = f(t,s,1-cur,0)*g(s,p,c+1,cur,ally);  
	temp %= mod; 
	ret += temp; 
	ret %= mod; 
	return memo[t][cur][ally] = ret; 
}
int main(){
	int n; 
	cin >> n; 
	for (int i = 1; i <= n; i++){
		adj[i].clear();  
	}
	for (int i = 0; i < n-1; i++){
		int a,b; 
		cin >> a >> b;  
		adj[a].push_back(b); 
		adj[b].push_back(a);  
	}
	cc++;  
	ll res = f(1,0,0,0); 
	res += f(1,0,1,0); 
	res %= mod; 
	cout << res << endl; 
	return 0; 
}
