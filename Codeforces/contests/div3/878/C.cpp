#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        ll n,k,q;
        cin >> n >> k >> q;
        ll ans = 0;
        ll chain = 0;
        vector<ll> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
            // cout << temp << " " << q << endl;
            if(v[i] <= q){
                chain++;
            }else{
                if(chain >= k){
                    ans+= (chain+1)*(chain-k+1)-(chain)*(chain+1)/2 + (k)*(k-1)/2;
                }
                chain = 0;
            }
        }
        if(v[n-1] <= q){
            if(chain >= k){
                ans+= (chain+1)*(chain-k+1)-(chain)*(chain+1)/2 + (k)*(k-1)/2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}