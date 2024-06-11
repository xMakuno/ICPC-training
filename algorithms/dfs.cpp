#include<bits/stdc++.h>
using namespace std;

void dfs(vector<set<int>> &graph, vector<bool> &v,  int target){
	if(v[target]) return;
	v[target] = true;
	set<int> neighbors = graph[target];
	for(const int &n : neighbors){
		dfs(graph, v, n);
	}
}

int main(){
	int n;
	cin >> n;
	//Since there is at most 1 edge between node u and v
	vector<set<int>> neighbor(n+1);
	// Begin Adjancency List
	int u, v;
	for(int i = 1; i < n; ++i){
		cin >> u >> v;
		neighbor[u].insert(v);
		neighbor[v].insert(u);	
	}
	/*for(int i = 1; i <= n; ++i){
		cout << "\nNode " << i << " -> ";
		for(const int &v: thing[i]){
			cout << v << " ";
		}
	}*/
	// Visited Vector
	vector<bool> visited(n+1,0);
	// Start node 1
	dfs(neighbor, visited, 1);
	for(int i = 1; i < n; ++i){
		cout << "\nNode " << i << " is set to: " << visited[i];
	}
	return 0;
}
