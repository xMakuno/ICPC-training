#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> v(n,0);
    cin >> v[0];
    for(int i = 1; i < n; i++){
        cin >> v[i];
        if(v[i-1] > v[i]){
            ans += (v[i-1] - v[i]);
            v[i] = v[i-1];
        }
    }
    if(v[v.size()-2] > v[v.size()-1]){
         ans += v[v.size()-2] > v[v.size()-1];
    }
    cout << ans << '\n';
    return 0;
}