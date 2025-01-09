#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n, x, y;
        cin >> n >> x >> y;
        ll arr[n], sum = 0;
        for(ll i = 0; i < n; ++i){
            ll temp;
            cin >> temp;
            arr[i] = temp;
            sum += temp;
        }
        //cout << "sum: " << sum << endl;
        ll ans = 0;
        for(ll i = 0; i < n-1; ++i){
            if(sum - arr[i] < x){
                continue;
            }
            for(ll j = i+1; j < n; ++j){
                ll thing = sum - arr[i] - arr[j];
                if( thing >= x && thing <= y){
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}