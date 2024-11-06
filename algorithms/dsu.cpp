#include<bits/stdc++.h>
#define vi vector<int>
#define pii pair<int, int>
#define vvi vector<vi>
#define vb vector<bool>
#define vpii vector<pii>

using namespace std;

const int MAX = 2e5;

int uf[MAX];

int dsu_find(int a){
    return uf[a] == a ? a : uf[a] = dsu_find(uf[a]);
}

void dsu_join(int a, int b){
    if(dsu_find(a) != dsu_find(b)){
        uf[a] = dsu_find(b);
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    for(int i=1; i <= n; ++i){
        uf[i] = i;
    }
    for(int i = 0; i < m; ++i){
        int u,v;
        cin >> u >> v;
        dsu_join(u,v);
    }
    for(int i = 1; i <= n;++i){
        cout << uf[i] << " ";
    }
    cout << '\n';
    return 0;
}