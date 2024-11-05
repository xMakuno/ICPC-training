#include<bits/stdc++.h>
#define pii pair<int, int>
#define vb vector<bool>
#define vi vector<int>
#define vvi vector<vi>
using namespace std;
typedef long long ll;

int dfs(vi &visited, vvi &al, int u){
    int ans = 1;
    for(auto &v : al[u]){
        if(visited[v] == 0){
            ans = max(ans, 1 + dfs(visited, al, v));
        }else{
            ans = max(ans, visited[v] +1 );
        }
    }
    // printf("Node %d returns %d\n", u, ans);
    visited[u] = ans;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
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
        vi visited(n+1,0);
        int res = -1, node = 1e9;
        for(int i = 1; i <= n; ++i){
            if(visited[i] == 0){
                int thing = dfs(visited, al, i);
                if(thing > res){
                    res = thing;
                    node = i;
                }else if(res == thing){
                    node = min(node, i);
                }
            }
        }
        cout << "Case " << t << ": " << node << '\n';
    }
    return 0;
}

/*
1
10
3 6
6 1
9 8
4 3
3 8
10 9
1 10
6 10
7 3
7 10

 */