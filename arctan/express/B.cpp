#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a,b;
    cin >> a >> b;
    ll ans = a;
    for(ll i = a+1; i <= b; ++i){
        ans^= i;
    }
    cout << ans << '\n';
    return 0;
}