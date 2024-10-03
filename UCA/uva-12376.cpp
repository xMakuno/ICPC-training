#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;
typedef long long ll;

pair<int, int> dfs(vector<bool> &visited, vector<vector<int>> &al, vector<int> &vals, int u, int sum){
    // cout << "Looking: " << u << '\n';
    visited[u] = true;
    int option = 0;
    for(auto &v: al[u]){   
        if(visited[v] == false && vals[option] < vals[v]){
            option = v;
        }
    }
    // cout << option << '\n';
    if(option == 0){
        return make_pair(u, sum);
    }

    return dfs(visited, al, vals, option, sum + vals[option]);
}

int main(){
    int T; cin >> T;
    for(int t = 1; t <= T; ++t){
        int n, m;
        cin >> n >> m;
        vector<int> values(n);
        for(int i = 0; i < n; ++i){
            cin >> values[i];
        }
        vector<vector<int>> AL(n);
        int u, v;
        for(int i = 0; i < m; ++i){
            cin >> u >> v;
            AL[u].push_back(v);
        }
        vector<bool> visited(n, false);
        pair<int, int> ans = dfs(visited, AL, values, 0, 0);
        printf("Case %lld: %lld %lld\n", t, ans.second, ans.first);
    }
    return 0;
}