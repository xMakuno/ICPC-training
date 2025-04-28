#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    // cin >> T;
    while(T--){
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        ll ans = 0;
        for(int i = 0; i < n-1; ++i){
            if(v[i] > x || v[i] + v[i+1] > x){
               continue; 
            }else{
                ans++;
            }
        }
        if(n > 1){
            if(v[n-1] <= x){
                ans++;
            }
            cout << ans << '\n';
        }else{
            cout << "1\n";
        }
    }
    return 0;
}