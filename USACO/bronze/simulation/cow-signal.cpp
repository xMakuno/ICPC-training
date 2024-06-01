#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,k;
    string line;
    cin >> m >> n >> k;
    for(int i = 0; i < m; ++i){
        cin >> line;
        string temp = "";
        for(int c = 0; c < n; ++c){
            for(int j = 0; j < k; ++j){
                temp = temp + line[c]; 
            }
        }
        for(int j = 0; j < k; ++j){
            cout << temp << '\n';
        }
    }
    return 0;
}