#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool dfs(int u, int color, vector<int> &vis, vector<vector<int>> &al){
    vis[u] = color;
    bool flag = true;
    for(auto &v : al[u]){
        if(vis[v] == 0){
            dfs(v, (color^1^2), vis, al);
        }else if(vis[v] == color){
            flag=false;
            break;
        }
    }
    return flag;
}
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> al(n+1);
    vector<int> vis(n+1);
    for(int i = 0; i < m; ++i){
        int u, v;
        cin >> u >> v;
        al[u].push_back(v);
        al[v].push_back(u);
    }
    bool bip = true;
    queue<int> q;
    for(int i = 1; i <= n && bip; ++i){
        if(vis[i] == 0){
            q.push(i);
            vis[i] = 1;
            while(!q.empty() && bip){
                int u = q.front();
                q.pop();
                for(auto &v : al[u]){
                    if(vis[v] == 0){
                        vis[v] = vis[u]^1^2;
                        q.push(v);
                    }else if(vis[v] == vis[u]){
                        bip = false;
                        break;
                    }
                }
            }
        }
    }

    if(bip){
        for(int i = 1; i <= n; ++i){
            cout << vis[i] << " ";
        }
        cout << '\n';
    }else{
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}