#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vl vector<ll>
using namespace std;
const int dr[] = {1,0,-1,0};
const int dc[] = {0,1,0,-1};
const int& INF = 1e9+7;

int main(){
    ll N,M;
    cin >> N >> M;
    vector<string> grid(N);
    vb r1(M, false);
    vector<vb> visited(N, r1);
    vl r2(M, INF);
    vector<vl> bfs(N, r2);
    for(ll i = 0; i < N; ++i){
        cin >> grid[i];
    }
    queue<pair<ll,ll>> q;
    q.push({0,0});
    visited[0][0] = true;
    bfs[0][0] = 0;
    while(!q.empty()){
        pair<ll,ll> curr = q.front();
        q.pop();
        visited[curr.first][curr.second] = true;
        ll s = grid[curr.first][curr.second]-'0';
        if(s == 0) continue;
        for(ll i = 0; i < 4;++i){
            ll x = curr.first + s*dr[i];
            ll y = curr.second + s*dc[i];
            if(x < 0 || x >= N){
                // cout << "X overflow\n";
                continue;
            }
            if(y < 0 || y >= M){
                // cout << "Y overflow\n";
                continue;
            }
            if(!visited[x][y]){
                q.push({x,y});
                visited[x][y]=true;
            }
            bfs[x][y] = min(bfs[x][y], bfs[curr.first][curr.second]+1);
            
            
        }
    }

    /* for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            cout << bfs[i][j] << " ";
        }
        cout << endl;
    } */
    if(bfs[N-1][M-1] != INF){
        cout << bfs[N-1][M-1] << endl;
    }else{
        cout << "IMPOSSIBLE\n";
    }
    return 0;
}