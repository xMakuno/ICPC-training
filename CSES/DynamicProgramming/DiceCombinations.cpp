#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    vector<ll> memo(n+1);
    memo[0] = 1;
    for(int i = 1; i <= n;++i){
        for(int j = 1; j<=6; ++j){
            if(j <= i){
                memo[i] = (memo[i] + memo[i-j]) % 1000000007;
            }else{
                break;
            }
        }
    }
    cout << memo[n] << '\n';
    return 0;
}