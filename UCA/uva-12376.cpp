#include<bits/stdc++.h>
#define vi vector<int>
using namespace std;
typedef long long ll;

int main(){
    int T; cin >> T;
    for(int t = 1; t <= T; ++t){
        //solve();
        int n, m;
        // 6 6
        cin >> n >> m;
        vi values(n,0);
        // 0 8 9 2 7 5
        for(int i = 0; i <n; ++i){
            cin >> values[i];
        }
        vector<vector<int>> AL(m);
        for(int i = 0; i < m; ++i){
            int u, v;
            cin >> u >> v;
            // al @ 5 -> 4, and so on
            AL[u].push_back(v);
        }
        // ya procese todo
        int ans = 0, option;
        queue<int> q; q.push(0);
        while(!q.empty()){
            int u = q.front(); q.pop();
            int greed = -1;
            for(int &v : AL[u]){
                if(greed < values[v]){
                    greed = values[v];
                    option = v;
                }
            }
            ans += greed;
            // si llega a una "leaf"
            if(AL[option].size() > 0){
                q.push(option);
            }
        }
        // printf("Case %d: %d %d\n", t, ans, option);
        cout << "Case " << t << ": " << ans << " " << option << '\n';
    }
    return 0;
}