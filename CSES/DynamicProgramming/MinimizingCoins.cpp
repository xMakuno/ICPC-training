#include<bits/stdc++.h>
#define INF 1e9
using namespace std;


int dp(int s, int i, vector<int> &c, vector<vector<int>> &memo){
    cout << s << " " << c[i] << endl;
    if(s == 0){
        return 0;
    }
    if(i == c.size()){
        return INF;
    }
    if(memo[s][i] != INF){
        return memo[s][i];
    }
    if(s >= c[i]){
        memo[s][i] = min(1 + dp(s-c[i],i,c, memo), dp(s,i+1,c, memo));
    }else{
        memo[s][i] = dp(s,i+1,c, memo);
    }
    return memo[s][i];
}

int main(){
    int n, s;
    cin >> n >> s;
    vector<int> coins(n);
    for(int i = 0; i < n;++i){
        cin >> coins[i];
    }
    sort(coins.rbegin(), coins.rend());
    /* for(int i = 0; i < n; ++i){
        cout << coins[i] << " \n"[i == n-1];
    } */
    vector<vector<int>> memo(s+1, vector<int>(n+1, INF));
    for(int i = 0; i <= n; ++i){
        memo[0][i]=0;
    }
    for(int i = 1; i <=s; ++i){
        memo[i][0]=-1;
    }
    dp(s,1,coins,memo);
    cout << (memo[s][n] == INF ? -1 : memo[s][n]) << endl;
    /* for(int i = 0; i <= s; ++i){
        cout << memo[i] << " \n"[i == s];
    } */
    return 0;
}