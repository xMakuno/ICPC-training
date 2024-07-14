#include<bits/stdc++.h>
using namespace std;
const int MAX = 2e5 + 5;
vector<int> adj[MAX];
int visited[MAX];

void dfs(int x){
	if(visited[x]) return;
	visited[x] = true;
	for(int to : adj[x]){
		dfs(to);
	}
}

int main(){
	
	return 0;
}
