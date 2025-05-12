#include<bits/stdc++.h>
#define INF 1e9
using namespace std;

// TLE
void BU(){
    int n, s;
    cin >> n >> s;
    vector<int> coins(n+1);
    for(int i = 1; i <= n;++i){
        cin >> coins[i];
    }
    vector<vector<int>> memo(s+1, vector<int>(n+1));
    for(int i = 1; i <= s; ++i){
        memo[i][0] = INF;
    }
    for(int i = 0; i <= n; ++i){
        memo[0][i] = 0;
    }
    for(int i = 1; i <= s; ++i){
        for(int j = 1; j <= n; ++j){
            if(coins[j] <= i){
                int take = 1+memo[i-coins[j]][j];
                int skip = memo[i][j-1];
                memo[i][j] = min(take,skip);
            }else{
                memo[i][j] = memo[i][j-1];
            }
        }
    }

    if(memo[s][n] == INF){
        cout << "-1\n";   
    }else{
        cout << memo[s][n] << endl;
    }
}

int main(){
    //BU();
    int n, s;
    cin >> n >> s;
    vector<int> coins(n);
    for(int i = 0; i < n; ++i){
        cin >> coins[i];
    }
    vector<int> memo(s+1, INF);
    memo[0] = 0;
    for(int i = 1; i<= s; ++i){
        for(int j = 0; j < n; ++j){
            int take = INF;
            if(coins[j] <= i){
                take = 1 + memo[i - coins[j]];
            }
            memo[i] = min(memo[i], take);
        }
    }
    /* for(int i = 0; i <= s; ++i){
        cout << memo[i] << " \n"[ i == s];
    } */
    if(memo[s] == INF){
        cout << "-1\n";
    }else{
        cout << memo[s] << endl;
    }
    return 0;
}