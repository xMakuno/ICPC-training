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

struct Wave {
    long long start;
    long long end;
    long long fun;
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

void realShit(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<Wave> waves(N);

    // Read input and form (start, end, fun)
    // end = m + w
    for(int i = 0; i < N; i++){
        long long m, f, w;
        cin >> m >> f >> w;
        waves[i].start = m;
        waves[i].end   = m + w;
        waves[i].fun   = f;
    }

    // Sort by end time
    sort(waves.begin(), waves.end(), 
         [](const Wave &a, const Wave &b) {
             return a.end < b.end;
         });

    // We'll keep just the end times in a separate array to do fast binary search
    vector<long long> ends(N);
    for(int i = 0; i < N; i++){
        ends[i] = waves[i].end;
    }

    // dp[i] = maximum fun using the first i waves (in sorted-by-end order).
    // We'll work 1-based for convenience: dp[0] = 0, dp[i] is best up to wave i-1 in 0-based.
    vector<long long> dp(N+1, 0LL);

    for(int i = 1; i <= N; i++){
        // "i-th" wave in 1-based indexing is waves[i-1] in 0-based
        auto &wave = waves[i-1];
        // Option 1: skip wave i-1
        long long skipFun = dp[i-1];

        // Option 2: take wave i-1
        // We want to add wave.fun plus dp of the last wave j that does not conflict,
        // i.e. wave j with ends[j] <= wave.start.
        // We'll binary search for the rightmost wave whose 'end' <= wave.start.
        int j = int(upper_bound(ends.begin(), ends.begin() + (i-1),
                                wave.start) - ends.begin()) - 1;

        long long takeFun = wave.fun;
        if(j >= 0) {
            // if j >= 0, then that wave is waves[j], but in dp terms j is j+1
            takeFun += dp[j+1];
        }

        dp[i] = max(skipFun, takeFun);
    }

    // dp[N] is our answer
    cout << dp[N] << "\n";
}
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll N;
    cin >> N;
    vector<w> v(N);

    ll maxM = -1;
    for(ll i = 0; i < N; ++i){
        w wave;
        cin >> wave.m >> wave.f >> wave.w;
        v[i] = wave;
        maxM = max(maxM, wave.m);
    }   
    sort(v.begin(), v.end(),comp);
    vector<int> memo(2000007, -1);
    cout << dp(0,0,v,memo) << '\n'; */
    realShit();
    return 0;   
}