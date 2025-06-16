#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


void dfs(int u, int p, vector<int>&sub, vector<vector<int>> &al){
    sub[u] = 1;
    for(auto &v : al[u]){
        if(v != p){
            dfs(v,u,sub,al);
            sub[u]+=sub[v];
        }
    }
}

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    // cin >> T;
    while(T--){
        int n; 
        cin >> n;
        vector<vector<int>> al(n+1);
        for(int i = 2; i <= n; ++i){
            int temp;
            cin >> temp;
            al[i].push_back(temp);
            al[temp].push_back(i);
        }
        vector<int> subor(n+1, 0);
        dfs(1,0, subor, al);
        for(int i = 1; i <= n; ++i){
            cout << subor[i]-1 << " \n"[i == n];
        }
    }
    return 0;
}