#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<vector<ll>> rotM(vector<vector<ll>> &matrix){
    vector<vector<ll>> rot(n, vector<ll>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            rot[j][n-i-1] = matrix[i][j];
        }
    }
    return rot;
}

vector<vector<ll>> transM(vector<vector<ll>> &matrix){
    vector<vector<ll>> trans(n, vector<ll>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            trans[j][i] = matrix[i][j];
        }
    }
    return trans;
}

vector<pair<int, int>> cw = {{1,0},{0,1},{-1,0},{0,-1}};
vector<pair<int, int>> aw = {{-1,0},{0,1},{1,0},{0,-1}};

int main(){
    cin >> n;
    vector<vector<ll>> grid(n, vector<ll>(n));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> grid[i][j];
        }
    }
    

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << grid[i][j] << " \n"[j==n-1];
        }
    }

    vector<vector<ll>> puto = rotM(grid);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << puto[i][j] << " \n"[j==n-1];
        }
    }
    vector<vector<ll>> puta = transM(grid);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << puta[i][j] << " \n"[j==n-1];
        }
    }
    return 0;
}