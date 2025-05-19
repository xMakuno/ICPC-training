#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

}

int dr[] = {0,1,0,-1};
int dc[] = {1,0,-1,0};

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll T = 1;
    cin >> T;
    for(int test = 1; test <= T; ++test){
        int high, wide;
        cin >> high >> wide;
        vector<vector<int>> maze(high, vector<int>(wide));
        for(int i = 0; i < high; ++i){
            for(int j = 0; j < wide; ++j){
                char c;
                cin >> c;
                if(c == '#'){
                    maze[i][j] = 0;
                }else{
                    maze[i][j] = 1;
                }
            }
        }
        // cout << "puta\n";
        vector<vector<int>> dist(high, vector<int>(wide));
        vector<vector<pair<int,int>>> parent(high, vector<pair<int,int>>(wide));
        vector<vector<bool>> visited(high, vector<bool>(wide));
        int regions = 0;
        int max_region = -1;
        for(int row = 0; row < high; ++row){
            for(int col = 0; col < wide; ++col){
                if(maze[row][col] && !visited[row][col]){
                    vector<pair<int,int>>leaves;
                    regions++;
                    queue<pair<int,int>> q;
                    q.push({row,col});
                    visited[row][col] = true;
                    int size = 0;
                    while(!q.empty()){    
                        auto cell = q.front();
                        q.pop();
                        visited[cell.first][cell.second] = true;
                        // cout << cell.first << " " << cell.second << endl;
                        size++;
                        int neighbors = 0;
                        bool leaf = true;
                        for(int i = 0; i < 4; ++i){
                            int nr = cell.first+dr[i], nc = cell.second+dc[i];
                            if(nr < 0 || nr >= high || nc < 0 || nc >= wide){
                                continue;
                            }
                            auto pp = parent[cell.first][cell.second];
                            /* if(pp.first != nr && pp.second != nc){
                                neighbors++;
                            } */
                            if(maze[nr][nc] && !visited[nr][nc] &&  pp.first != nr && pp.second != nc){
                                leaf = false;
                                q.push({nr,nc});
                                dist[nr][nc] = dist[cell.first][cell.second]+ 1;
                                parent[nr][nc] = {cell.first, cell.second};
                            }/* else if(maze[nr][nc]){
                                
                            } */
                        }
                        if(leaf){
                            leaves.push_back({cell.first,cell.second});
                        }
                    }
                    max_region=max(max_region,size);
                    for(int i = 0; i < leaves.size(); ++i){
                        printf("leaf in (%d,%d) ",leaves[i].first,leaves[i].second);
                    }
                }
            }
        }
        // printf("Case %d: %d %d %d\n");
        printf("Case %d: %d %d\n",test,regions,max_region);
    }
}
/*
1
11 11
#.......#..
..#.#.#...#
#.#.#.#####
..#.#.#....
.#########.
...........
.####.####.
....#.##.#.
###.#.#..#.
.#..#.#.##.
...##.#....




3
11 11
#.......#..
..#.#.#...#
#.#.#.#####
..#.#.#....
.#########.
...........
.####.####.
....#.##.#.
###.#.#..#.
.#..#.#.##.
...##.#....
11 11
#...#...#..
..#.#.#...#
#.#.#.#####
..#.#.#....
.#########.
.#.........
.####.####.
....#.##.#.
###.#.#..#.
.#..#.#.##.
...##.#....
11 11
#...#...#..
..#.#.#...#
#.#.#.#####
..#.#.#....
.##########
.#.........
.####.####.
....#.####.
###.#.#..#.
.#..#.#.##.
...##.#....
*/