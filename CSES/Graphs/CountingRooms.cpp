#include<bits/stdc++.h>
#define ll long long
using namespace std;

int dr[] = {0,1,0,-1};
int dc[] = {1,0,-1,0};
int n, m;

void dfs(int x,int y, vector<vector<bool>> &vis, vector<string> &grid){
    // cout << x << " " << y << endl;
    vis[x][y] = true;
    for(int i = 0; i < 4; ++i){        
        int nx = x+dr[i], ny = y+dc[i];
        if(nx >= n || ny >= m || nx < 0 || ny < 0){
            continue;
        }
        if(grid[nx][ny] == '.' && !vis[nx][ny]){
            dfs(nx,ny, vis, grid);
        }
    }
}

int main(){
    cin >> n >> m;
    vector<string> grid(n);
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for(int i = 0; i < n; ++i){
        cin >> grid[i];
    }
    /* for(int i = 0; i < n; ++i){
        cout << grid[i] << '\n';
    } */
    int ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            // cout << i << " " << j << " " << grid[i][j] << endl;
            if(grid[i][j] == '.' && !visited[i][j]){
                dfs(i,j,visited,grid);
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}