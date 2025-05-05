#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<string> grid(n);
    int ix, iy,fx,fy;
    for(int i = 0; i < n; ++i){
        string temp = "";
        for(int j = 0; j < m; ++j){
            char c;
            cin >> c;
            if(c == 'A'){
                ix = i; iy = j;
            }else if(c == 'B'){
                fx = i; fy = j;
            }
        }
    }
    vector<vector<int>> visited(n, vector<int>(m, 0));
    queue<pair<int,int>> q;
    q.push({ix,iy});
    int dr[] = {0,1,0,-1};
    int dc[] = {1,0,-1,0};
    bool solved = false;
    while(!q.empty() || solved){
        auto node = q.front();
        q.pop();
        for(int i = 0; i < 4; ++i){
            int nx = node.first + dr[i], ny = node.second + dc[i];
            if(nx >= n || nx < 0 || ny >= m || ny < 0){
                continue;
            }
            if(grid[nx][ny] == '.' && visited[nx][ny] == 0){
                
            }
        }
    }
    return 0;
}