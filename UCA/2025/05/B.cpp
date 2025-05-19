#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(int u, int p, int &c, vector<bool> &vis, vector<vector<int>>&al, vector<int> &nodes){
    vis[u] = true;
    for(auto &v : al[u]){
        if(!vis[v]){
            dfs(v, u, c, vis, al, nodes);
        }
    }
    if(nodes[u] == 1 && p != -1){
        nodes[p] ^=1^0;
        c++;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> nodes(n+1);
        int ones = 0;
        for(int i = 1; i <= n; ++i){
            cin >> nodes[i];
            ones+=nodes[i];
        }
        vector<vector<int>> al(n+1); 
        for(int i = 1; i < n; ++i){
            int u, v;
            cin >> u >> v;
            al[u].push_back(v);
            al[v].push_back(u);
        }
        if(ones%2){
            cout << "-1\n";
        }else{
            vector<bool> visited(n+1);
            int ans = 0;
            dfs(1,-1,ans,visited,al,nodes);
            cout << ans << '\n';
        }
    }
    return 0;
}