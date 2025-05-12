#include<bits/stdc++.h>
#define ll long long
#define INF 1e16 + 7
#define vl vector<ll>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll K;
    cin >> K;
    vector<ll> ing(K);
    for(ll i = 0; i < K; ++i){
        cin >> ing[i];
    }
    ll N;
    cin >> N;
    vector<vector<ll>> orders(K, vector<ll>(N+1));
    vector<ll> total(K);
    for(ll i = 1; i <= N; ++i){
        for(ll j = 0; j < K; ++j){
            cin >> orders[j][i];
            total[j]+=orders[j][i];
            orders[j][i]+=orders[j][i-1];  
        }
    }
    /* for(ll i = 1; i <= N; ++i){
        for(ll j = 0; j < K; ++j){
            cout << orders[j][i] << " ";
        }
        cout << endl;
    } */

    vector<ll> days(K);
    ll mn = INF;
    for(ll i = 0; i < K; ++i){
        if(total[i] != 0){
            days[i]=(ll) (ing[i]/total[i]);
            mn = min(days[i], mn);  
        }else{
            days[i]=INF;
        }
        // cout << total[i] << " \n"[i == K-1];
    }
    mn++;
    ll ans = INF;
    for(ll i = 0; i < K; ++i){
        if(days[i] + 1 != mn || total[i] == 0){
            continue;
        }
        ll mod = ing[i] % total[i];
        auto x = upper_bound(orders[i].begin(), orders[i].end(), mod);
        ll thing = x - orders[i].begin();
        // cout << "mod: " << mod << " thing: " << thing << "\n";
        ans = min(ans, thing);
    }
    cout << mn << " " << ans << endl;
    return 0;
}