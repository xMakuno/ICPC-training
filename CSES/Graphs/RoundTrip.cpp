#include<bits/stdc++.h>
#define VISITED 2
#define EXPLORED 1
#define UNEXPLORED 0
using namespace std;
typedef long long ll;

void cycle(int u, vector<int> &vis, vector<int> &p, vector<vector<int>> &al){

}

int main(){
    int n, m;
    cin >> n >> m;
    // vector<set<int>> al(n+1);
    vector<vector<int>> al(n+1);
    vector<int> vis(n+1);
    vector<int> parents(n+1,-1);
    for(int i = 0; i < m; ++i){
        int u,v;
        cin >> u >> v;
        al[u].push_back(v);
        al[v].push_back(u);
        // al[u].insert(v);
        // al[v].insert(u);
    }
    queue<int> q;
    int start = -1;
    bool solved = false;
    for(int i = 1; i <= n && !solved; ++i){
        if(vis[i] == UNEXPLORED){
            
        }   
    }
    return 0;
}