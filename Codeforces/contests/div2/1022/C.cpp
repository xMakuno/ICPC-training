#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<bool> &vis, vector<vector<int>> &al){
    vis[u]=true;
    for(auto &v : al[u]){
        if(!vis[v]){
            dfs(v,vis,al);
        }
    }
}

void s(){
    int n;
    cin >> n;
    vector<int> b(n);
    vector<pair<int,int>> sb(n);
    for(int i = 0; i < n; ++i){
        cin >> b[i];
        sb[i].first = b[i];
        sb[i].second = i;
    }
    vector<vector<int>> al(n);
    vector<bool> visited(n);
    for(int i = 0; i < n; ++i){
        int neo1 = i-1, neo2 = i +1;
        if(neo1>=0){
            if(b[i]>=b[neo1]){
                al[i].push_back(neo1);
            }
        }
        if(neo2<n){
            if(b[i]>=b[neo2]){
                al[i].push_back(neo2);
            }
        }
    }
    int ans = 0;
    sort(sb.rbegin(),sb.rend()); 
    for(int i = 0; i < n; ++i){
        if(!visited[sb[i].second]){
            ans++;
            dfs(sb[i].second, visited, al);
        }
    }
    cout << ans << '\n';
}

int main(){
    int T;
    cin >> T;
    while(T--){
        s();
    }
    return 0;
}