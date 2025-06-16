#include<bits/stdc++.h>
#define INF 1e9
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int c;
        cin >> c;
        vector<int> coins(c+1);
        int turbo = -1, sum = 0;
        for(int i = 1; i <= c; ++i){
            cin >> coins[i];
            turbo=max(turbo,coins[i]);
            sum+= coins[i];
        }
        vector<vector<pair<int,int>>> dp(c+1, vector<pair<int,int>>(sum+turbo+1,{INF, 0}));
        for(int i = 1; i <= n; ++i){
            dp[i][0] = {0,0};
        }
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= sum+turbo+1; ++j){
                
            }
        }
    }
    return 0;

}