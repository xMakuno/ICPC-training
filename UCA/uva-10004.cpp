#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int,int>
#define vpii vector<pii>
#define vvi vector<vi>
#define vb vector<bool>
using namespace std;

bool dfs(vb &visited, vvi &AL, vi& colors, int u){
    visited[u] = true;
    for(auto &v : AL[u]){
        if(!visited[v]){
            colors[v] = colors[u]^0^1;
            return dfs(visited, AL, colors, v);
        }else{
            if(colors[u] == colors[v]) return false;
        }
    }
    return true;
}

int main(){
    int n;
    while(cin >> n && (n != 0)){
        int edges;
        cin >> edges;
        vb visited(n, false);
        vi color(n,-1); 
        vvi AL(n);
        for(int i = 0; i < edges; ++i){
            int u, v;
            cin >> u >> v;
            AL[u].push_back(v);
            AL[v].push_back(u);
        }
        // start dfs at node 0 with color 0
        color[0] = 1;
        if(dfs(visited, AL, color, 0)){
            cout << "BICOLORABLE.\n";
        }else{
            cout << "NOT BICOLORABLE.\n";
        }
    }
    return 0;
}