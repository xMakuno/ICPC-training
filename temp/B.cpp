#include<bits/stdc++.h>
using namespace std;

int check(vector<int> v, int val){
    int mx = -1;
    for(int x: v){
        if(x >= val){
            mx = max(mx, x);
        }
    }
    return mx;
}

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        int matrix[n+1][m+1];
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <=m;++j){
                cin >> matrix[i][j];
            }
        }
        int i = 1, j = 1;
        while( i < n+1 && j < m+1){
            if(i == 1 && j == 1){
                vector<int> neighbors;
                neighbors.push_back(matrix[i+1][j]);
                neighbors.push_back(matrix[i][j+1]);
                int flag = check(neighbors, matrix[i][j]);
                if(flag != -1){
                    matrix[i][j] = flag;
                }
            }
            if(i == 1){
                vector<int> neighbors;
                neighbors.push_back(matrix[i+1][j]);
                neighbors.push_back(matrix[i][j+1]);
                neighbors.push_back(matrix[i][j-1]);
                int flag = check(neighbors, matrix[i][j]);
                if(flag != -1){
                    matrix[i][j] = flag;
                }
            }
            if(j == 1){
                vector<int> neighbors;
                neighbors.push_back(matrix[i+1][j]);
                neighbors.push_back(matrix[i][j+1]);
                neighbors.push_back(matrix[i-1][j]);
                int flag = check(neighbors, matrix[i][j]);
                if(flag != -1){
                    matrix[i][j] = flag;
                }
            }else{
                vector<int> neighbors;
                neighbors.push_back(matrix[i+1][j]);
                neighbors.push_back(matrix[i][j+1]);
                neighbors.push_back(matrix[i-1][j]);
                neighbors.push_back(matrix[i][j-1]);
                int flag = check(neighbors, matrix[i][j]);
                if(flag != -1){
                    matrix[i][j] = flag;
                }
            }
            i++; j++;
        }
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <=m;++j){
                cout << matrix[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}