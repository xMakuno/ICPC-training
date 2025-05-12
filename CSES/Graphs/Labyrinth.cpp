#include<bits/stdc++.h>
using namespace std;
int dr[] = {0,1,0,-1};
int dc[] = {1,0,-1,0};
struct coord{
    int x;
    int y;
    char move;
};
 
char directions(int i){
    if(i == 0){
        // cout << "Right\n";
        return 'R';
    }else if(i == 1){
        // cout << "Down\n";
        return 'D';
    }else if( i == 2){
        // cout << "Left\n";
        return 'L';
    }else{
        // cout << "Up\n";
        return 'U';
    }
}
 
 
 
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
            temp+=c;
        }
        grid[i] = temp;
    }
    vector<vector<int>> visited(n, vector<int>(m, 0));
    vector<vector<coord>> parent(n, vector<coord>(m));    
    queue<pair<int,int>> q;
    // visited[ix][iy] = 0;
    q.push({ix,iy});
    bool solved = false;
    while(!q.empty() && !solved){
        auto node = q.front();
        q.pop();
        for(int i = 0; i < 4; ++i){
            int nx = node.first + dr[i], ny = node.second + dc[i];
            if(nx >= n || nx < 0 || ny >= m || ny < 0){
                continue;
            }
 
            if(grid[nx][ny] == '.' && visited[nx][ny] == 0){
                directions(i);
                visited[nx][ny]=visited[node.first][node.second]+1;
                parent[nx][ny].x = node.first;
                parent[nx][ny].y = node.second;
                parent[nx][ny].move = directions(i);
                q.push({nx,ny});
            }else if(grid[nx][ny] == 'B'){
                visited[fx][fy] = visited[node.first][node.second]+1;
                parent[nx][ny].x = node.first;
                parent[nx][ny].y = node.second;
                parent[nx][ny].move = directions(i);
                solved = true;
            }
        }
    }
    
 
    if(visited[fx][fy] == 0){
        cout << "NO\n";
    }else{
        cout << "YES\n";
        cout << visited[fx][fy] << '\n';
        int cx = fx, cy = fy;
        stack<char> st;
        // cout << ix << " " << iy << endl;
        while(cx != ix || cy != iy){
            // cout << cx << " " << cy << endl;
            coord thing = parent[cx][cy];
            st.push(thing.move);
            cx = thing.x;
            cy = thing.y;
        }
        while(!st.empty()){
            cout << st.top();
            st.pop(); 
        }
        cout << endl;
    }
    return 0;
}
