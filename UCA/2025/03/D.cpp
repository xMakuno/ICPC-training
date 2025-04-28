#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct event{
    int index;
    int value;
    vector<int> nodes;
};

int dfs(int u, vector<int> &vis, vector<vector<int>> &al){
    vis[u] = 0;
    int alone = 1, choice = 0; // Condition that the longest path is just the node itself with size = 1
    for(auto&v: al[u]){
        if(vis[v] < 0){
            int temp = dfs(v, vis, al) + 1;
            if(temp > alone){
                alone = temp;
                choice = v;
            }
        }
    }
    vis[u] = choice;
    return alone;
}

int main(){
    /* for(auto it = events.begin(); it != events.end(); ++it){
        pair<int, int> e = *it;
        printf("value: %d has id: %d\n", e.first, e.second);
    } */
    int n;
    cin >> n;
    map<int, int> events;
    for(int i = 1; i <= n; ++i){
        int temp;
        cin >> temp;
        if(events.count(temp) == 0){
            events[temp] = i;
        }
    }
    int max_n = (*(--events.end())).first;
    vector<bool> primes(max_n+1, true);
    unordered_map<int, vector<int>> wal;
    primes[1] = false;
    int p = 2;
    while(p * p <= max_n){
        if(primes[p]){
            wal[p] = vector<int>(); // Weird AL that is only about primes
            if(events.count(p) > 0){ // If the prime is in the events list, add it to WAL
                wal[p].push_back(p);
            }
            for(int i = p*p; i <= n; ++i){
                if(events.count(i) > 0){
                    wal[p].push_back(i);
                }
                primes[i] = false;
            }
        }
    }
    vector<int> vis(n+1,-1);
    for(auto it = wal.begin(); it != wal.end(); ++it){
        
    }
    
    /* 
    // DFS TEST ENVIRONMENT
    int n, e;
    cin >> n >> e;
   
    
    
    vector<vector<int>> al(n+1);
    vector<int> vis(n+1,-1);
    for(int i = 0; i < e; ++i){
        int u,v;
        cin >> u >> v;
        al[u].push_back(v);
    }
    cout << "dfs result: " << dfs(4,vis,al) << "\n";
    for(int i = 1; i <= n; ++i){
        printf("Node %d: ",i);
        for(auto &x : al[i]){
            cout << x <<" ";
        }
        cout << '\n';
    }
    for(int i = 1; i <= n; ++i){
        cout << i << " " << vis[i] << '\n';
    } */
    return 0;
}

/*
8 5
4 5
5 1
5 3
1 3
6 3
*/