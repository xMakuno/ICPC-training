#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void dfs(vector<bool> &visited, map<char, set<char>> &al, char u){
    cout << "infinite";
    visited[u - 'A'] = true;
    for(auto v : al[u]){
        dfs(visited, al, v);
    }

}

int main(){
    int T;
    cin >> T;
    while(T--){
        char max_vertex;
        cin >> max_vertex;
        int size = max_vertex - 'A' + 1;
        map<char, set<char>> AL;
        cout << "llegue aqui";
        for(int i = 0; i < size; ++i){
            char u, v;
            cin >> u >> v;
            AL[u].insert(v);
            AL[v].insert(u);
        }
        vector<bool> visited(size,false);
        int components = 0;
        for(int i = 0; i < size; ++i){
            if(!visited[i]){
                components++;
                dfs(visited, AL, char(i +'A'));
            }
        }
        cout << components << '\n';
    }
    return 0;
}