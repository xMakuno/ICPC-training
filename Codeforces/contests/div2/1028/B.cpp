#include<bits/stdc++.h>
#define MOD 998244353

#define vi vector<int>
using namespace std;
typedef long long ll;
#define vll vector<ll>

ll mod(ll x) { return ((x%MOD) +MOD)%MOD; }

ll modPow(int b, int p, int m){
    if(p == 0) return 1;
    ll ans = modPow(b,p/2,m);
    ans = mod(ans*ans);
    if(p&1) ans = mod(ans*b);
    return ans;
}

ll expo(ll a, ll b){
    long long result = 1;
    while (b) {
        if (b & 1)
            result = (result * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T = 1;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        vector<ll> p(n),q(n);
        for(int i = 0; i < n; ++i){
            cin >> p[i];
        }
        for(int i = 0; i < n; ++i){
            cin >> q[i];
        }
        ll mp = -1, mpi = -1, mq = -1, mqi = -1;
        for(int i = 0; i < n;++i){
            if(mp < p[i]){
                mpi = i;
                mp = p[mpi];
            }
            if(mq < q[i]){
                mqi = i;
                mq = q[mqi];
            }
            if(mp > mq){
                cout << ((modPow(2,p[mpi],MOD) + modPow(2,q[i-mpi],MOD))%MOD) << " ";
            }else if(mp < mq){
                cout << ((modPow(2,p[i-mqi],MOD) + modPow(2,q[mqi], MOD))%MOD) << " ";
            }else{
                if(q[i-mpi] > p[i-mqi]){
                    cout << ((modPow(2,p[mpi],MOD) + modPow(2,q[i-mpi],MOD))%MOD) << " ";
                }else{
                    cout << ((modPow(2,p[i-mqi],MOD) + modPow(2,q[mqi], MOD))%MOD) << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}