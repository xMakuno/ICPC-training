#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll total = 0;
        for(int i = 0; i < n; ++i){
            cin >> v[i];
            total+= v[i];
        }
        ll mn = 1e9 + 7, mx = -1;
        for(int i = 0; i < n; ++i){
            mn = min(mn, v[i]);
            mx = max(mx, v[i]);
        }
        ll diff = mx - mn;
        if(diff > k + 1){
            cout << "Jerry\n";
            continue;
        }else{
            ll f = 0;
            for(int i = 0; i < n; ++i){
                if(v[i]==mx){
                    f++;
                }
            }
            if(diff == k+1 && f > 1){
                cout << "Jerry\n";
            }else if(total&1){
                cout << "Tom\n";
            }else{
                cout << "Jerry\n";
            }
        }
    }
    return 0;
}