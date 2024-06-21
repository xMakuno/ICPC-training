#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<int> x(n+1,0); // top to bottom
        vector<int> y(m+1,0); // left to right
        string grid;
        int x_i = 10e9, x_f = -1;
        int y_i = 10e9, y_f = -1;
        for(int i = 0; i < n; ++i){
            cin >> grid;
            for(int j = 0; j < m; ++j){
                if(grid[j] == '#'){
                    x_i = (x_i < i+1) ? x_i : i+1; x_f = (x_f > i+1) ? x_f : i+1;
                    y_i = (y_i < j+1) ? y_i : j+1; y_f = (y_f > j+1) ? y_f : j+1;
                }
            }
        }
        cout << (x_i + x_f)/2 << " "  << (y_i+y_f)/2 << '\n';
    }
    return 0;
}