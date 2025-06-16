#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9 + 7;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int>  coins(n+1);
    for(int i = 1; i <= n; ++i){
        cin >> coins[i];
    }
    vector<int> dp(x+1);
    dp[0] = 1;
    for(int j = 1; j <= n; ++j){
        for(int i = 1; i <= x; ++i){
            if(i - coins[j] >= 0){
                dp[i] = (dp[i] + dp[i - coins[j]]) % MOD;
            }
        }
    }
    cout << dp[x] << "\n";
    return 0;
}