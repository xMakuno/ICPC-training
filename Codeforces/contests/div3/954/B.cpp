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
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <=m;++j){
                cout << matrix[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}