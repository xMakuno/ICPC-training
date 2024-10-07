#include<bits/stdc++.h>
#define pii pair<int, int>
#define vb vector<bool>
#define vvi vector<vector<int>>
using namespace std;
typedef long long ll;


int dfs(vb &visited, vvi &al, int u, int counter){
    cout << "looking: " << u << '\n';
    visited[u] = true;
    for(auto v : al[u]){
        // cout << "sees: " << v << '\n';
        if(!visited[v]){
            return dfs(visited, al, v, ++counter);
        }
    }
    return ++counter;
}

int main(){
    int T = 1;
    cin >> T;
    for(int t = 1; t <= T; ++t){
        int n;
        cin >> n;
        vvi al(n+1);
        for(int i = 0; i < n; ++i){
            int u, v;
            cin >> u >> v;
            al[u].push_back(v);
        }
        vb visited(n+1,false);
        int ans = 1e7, mx = -1;
        // cout << "visited hahahahahha: " << visited[1] << '\n';
        for(int i = 1; i <= n; ++i){
            if(!visited[i]){
                cout << "start of dfs: " << i << '\n'; 
                int possible = dfs(visited, al, i, 0);
                if(possible >= mx){
                    ans = min(ans, i);
                    mx = possible;
                }
            }
        }
        printf("Case %lld: %lld\n", t, ans);
    }
    return 0;
}