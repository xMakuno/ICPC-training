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
        
    }
    return 0;
}