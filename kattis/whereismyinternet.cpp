#include<bits/stdc++.h>
using namespace std;

void dfs(vector<bool> &visited, vector<set<int>> &AL, int u){
    // cout << "visiting: " << u << endl;
    visited[u] = true;
    for(auto &v : AL[u]){
        if(!visited[v]){
            dfs(visited, AL, v);
        }
    }
}

int main(){
    int N, M;
    cin >> N >> M;
    vector<set<int>> AL(N+1);
    for(int i = 0; i < M; ++i){
        int u, v;
        cin >> u >> v;
        if(u != v){
            AL[u].insert(v);
            AL[v].insert(u);
        }
    }
    vector<bool> visited(N+1, false);
    dfs(visited, AL, 1);
    bool connected = true;
    for(int i = 2; i <= N; ++i){
        if(!visited[i]){
            connected = false;
            cout << i << '\n';
        }
    }
    if(connected){
        cout << "Connected\n";
    }
    return 0;
}