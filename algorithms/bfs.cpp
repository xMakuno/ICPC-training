#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	int u, v;
	vector<tuple<int, int, int>> E;
	// Start receiving edges
	for(int i = 0; i < N-1; ++i){
		cin >> u >> v;
		if( u > v) swap(u,v);
		E.push_back({u, v, 1});
	}
	cout << "Edges:\n";
	for(int i = 0; i < N-1; ++i){
		cout << "Start: " << get<0>(E[i]);
		cout << " - End: " << get<1>(E[i]);
		cout << '\n';
	}
	return 0;
}
