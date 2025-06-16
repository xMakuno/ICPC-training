#include<bits/stdc++.h>
#define INF 250000000001
using namespace std;
typedef long long ll;

ll n;

void dfs(ll u, ll &mn_i, ll &mx_i, vector<bool> &vis, vector<ll> &nodes){
    vis[u] = true;
    vector<int> pos = {-1,1};
    for(auto &d : pos){
        ll v = u + d;
        if(v < 0 || v >= n) continue;
        if(!vis[v] && nodes[u] == nodes[v]){
            mn_i = min(mn_i,v);
            mx_i = max(mx_i,v);
            // cout << mn_i << " " << mx_i << endl;
            dfs(v, mn_i, mx_i, vis, nodes);
        }
    }
}

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    cin >> T;
    while(T--){
        cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        ll ans = INF;
        vector<bool> vis(n,false);
        for(int i = 1; i <= n; ++i){
            if(vis[i-1]) continue;
            ll mn_i = i-1;
            ll mx_i = i-1;
            dfs(i-1,mn_i,mx_i,vis, v);
            // cout << mn_i << " " << mx_i << endl;
            ans = min(ans, ((mn_i)*v[mn_i]) + (n-(mx_i+1))*v[mx_i]);
        }
        cout << ans << '\n';
    }
    return 0;
}