#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD = 1e9 + 7;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> coins(n+1), memo(x+1);
    for(int i = 0; i < n; ++i){
        cin >> coins[i+1];
    }
    memo[0] = 1;
        for(int j = 1; j <=n; ++j){
    for(int i = 1; i <= x; ++i){
            if(i>=coins[j]){
                memo[i] = (memo[i]+memo[i-coins[j]])%MOD;
            }
        }
    }
    cout << memo[x] << '\n';
    return 0;
}