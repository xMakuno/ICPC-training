#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    cin >> Q;
    vector<pll> queries(Q);
    ll mx = -1;
    for(int i = 0; i < Q; ++i){
        cin >> queries[i].first >> queries[i].second;
        mx = max(mx,queries[i].second);
    }
    vector<ll> memo(mx+1), pref(mx+1);
    memo[0]=0;
    memo[1]=1;
    pref[0]=0;
    pref[1]=1;
    for(int i = 2; i <= mx; ++i){
        if(i%2==0){
            memo[i] = 1+ memo[i/2];
        }else{
            memo[i] = 1+ memo[i-1];
        }
        // printf("memo in %lld is: %lld\n", i, memo[i]);
        pref[i] = pref[i-1] + memo[i];
    }
    for(int i = 0; i < Q; ++i){
        auto xd = queries[i];
        if(xd.first != xd.second){
            cout << pref[xd.second] - pref[xd.first-1] << '\n';
        }else if (xd.first == 0){
            cout << pref[xd.second] << '\n';
        }
        else{
            cout << memo[xd.first] << '\n';
        }
    }
    return 0;
}
/*

0 8
0 1 2 3 4 5 6 7 8 ... 1e12
0 1 3 3 3



5
0 8
5 7
9 9
2 10
6 13

2
0 8
5 7
*/