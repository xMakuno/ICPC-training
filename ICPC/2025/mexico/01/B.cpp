#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<pair<int, int>> cw = {{1,0},{0,1},{-1,0},{0,-1}};
vector<pair<int, int>> aw = {{-1,0},{0,1},{1,0},{0,-1}};

int main(){
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> grid[i][j];
        }
    }
    vector<pair<int,int>> starts = {{0,0}, {0,n-1}, {n-1, 0}, {n-1, n-1}};
    int x = 0, y = 0;
    int mx = grid[x][y];
    int cur = grid[x][y];
    int turn = 0;
    x+=starts[turn].first;
    y+=starts[turn].second;
    turn++;
    while(x < n && y < n){
        cur += grid[x][y];
        if(cur < 0) cur = 0;
        mx = max(mx, cur);
        if(x == n - 1 || y == n-1){
            turn++;
            turn = turn % 4;
        }
    }
    cout << mx << endl;
    return 0;
}