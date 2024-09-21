#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i =0; i < n; ++i){
        for(int j = 0; j < n;++j){
            cin >> matrix[i][j];
        }
    }
    if(matrix[0][0] < matrix[0][1]){
        if(matrix[0][0] < matrix[1][0]){
            cout << 0 << "\n";
        }else{
            cout << 3 << "\n";
        }
    }else{
        if(matrix[0][0] < matrix[1][0]){
            cout << 1 << "\n";
        }else{
            cout << 2 << "\n";
        }
    }
    
    return 0;
}