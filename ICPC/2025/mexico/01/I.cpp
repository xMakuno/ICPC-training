#include <bits/stdc++.h>
using namespace std;

void dfs(int u, int p, vector<bool> &vis, vector<vector<int>> &al, map<int, int> colors[], map<int, int> queries[], vector<int> &ans) {
    vis[u] = true;
    for (auto &v : al[u]) {
        if (!vis[v] && v != p) {
            dfs(v, u, vis, al, colors, queries, ans);
            if (colors[u].size() < colors[v].size()) swap(colors[u], colors[v]);
            for (auto &it : colors[v]) {
                colors[u][it.first] += it.second;
            }
        }
    }
    for (auto &[i, k] : queries[u]) {
        ans[i] = colors[u][k];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    
    map<int, int> colors[n + 1];
    for (int i = 1; i <= n; ++i) {
        int temp;
        cin >> temp;
        colors[i][temp] = 1;
    }

    vector<vector<int>> al(n + 1);
    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        al[u].push_back(v);
        al[v].push_back(u);
    }

    map<int, int> queries[n + 1];
    vector<int> ans(q);
    for (int i = 0; i < q; ++i) {
        int x, k;
        cin >> x >> k;
        queries[x][i] = k;
    }

    vector<bool> visited(n + 1, false);
    dfs(1, 0, visited, al, colors, queries, ans);

    for (int a : ans) {
        cout << a << '\n';
    }

    return 0;
}