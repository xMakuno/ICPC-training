#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b){
    return (b == 0 ? a : gcd(b, a%b));
}

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll mn = 5001;
        for(int i = 0; i <n; ++i){
            cin >> v[i];
            mn = min(mn, v[i]);
        }

        ll g = v[0];
        priority_queue<int> pq;
        for(int i = 0; i < n; ++i){
            g = gcd(g, v[i]);
            mn = min(mn,v[i]);
        }
        ll cnt = 0;
        for(int i = 0; i < n; ++i){
            if(v[i] == g){
                cnt++;
            }
            if(v[i] != mn){
                pq.push(v[i]);
            }
        }
        if(g == 1){
            cout << n-cnt << endl;
            continue;
        }
        ll ans = 0;
        while(!pq.empty()){
            ans++;
            ll temp = pq.top(); pq.pop();
            ll neo = gcd(temp, mn);
            if(neo != g){
                pq.push(neo);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}