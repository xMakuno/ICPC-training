#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
using namespace std;

struct w{
    ll m;
    ll f;
    ll w;
};

bool comp(w a, w b){
    return a.m < b.m;
}

ll dp(ll idx, ll t, vector<w> &waves, vector<int> &memo){
    if(idx >= waves.size()){
        return 0;
    }
    if(memo[t] != -1){
        return memo[t];
    }
    if(waves[idx].m < t){
        memo[t] = dp(idx+1,t, waves, memo);
        return memo[t];
    }else{
        memo[t] = max(dp(idx+1,waves[idx].m + waves[idx].w, waves, memo)+waves[idx].f, 
            dp(idx+1, t, waves, memo));
        return memo[t];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll N;
    cin >> N;
    vector<w> v(N);
    for(ll i = 0; i < N; ++i){
        w wave;
        cin >> wave.m >> wave.f >> wave.w;
        v[i] = wave;
    }   
    sort(v.begin(), v.end(),comp);
    vector<int> memo(1e7, -1);
    cout << dp(0,0, v, memo) << '\n';
    return 0;   
}