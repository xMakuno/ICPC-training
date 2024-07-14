#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e3 + 5;
int n, visited[MAX], adj[MAX][MAX];

void bfs(int start){
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(int i = 1; i <= n;++i){
			if(adj[x][i] == !visited[i]){
				visited[i] = true;
				q.push(i);
			}
		}
	}
}

int main(){
	
	return 0;
}
