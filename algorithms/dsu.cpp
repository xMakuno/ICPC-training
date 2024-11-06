#include<bits/stdc++.h>
#define vb vector<bool>
#define vi vector<int>
using namespace std;
const int MAX = 2000000;
int uf[MAX];
bool internet[MAX];

int dsu_find(int a){
    return uf[a] == a ? a : uf[a] = dsu_find(uf[a]);
}

void dsu_join(int u, int v){
    if(internet[u] || internet[v]){
        internet[u] = internet[v] = true;
    }
    if( dsu_find(u) != dsu_find(v)){
        uf[u] =  dsu_find(v);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    internet[1] = true;
    for(int i = 1; i <= n; ++i){
        uf[i] = i;
    }
    for(int i=0; i < m; ++i){
        int u, v;
        cin >> u >> v;
        dsu_join(u,v);
    }
    bool connected = true;
    for(int i = 2; i <= n; ++i){
        if(!internet[i]){
            connected = false;
            cout << i << '\n';
        }
    }
    if(connected){
        cout << "Connected\n";
    }
    return 0;
}



