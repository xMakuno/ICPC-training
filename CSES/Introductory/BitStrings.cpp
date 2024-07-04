#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MOD = 1e9 + 7;
// Fast Exponentiation
ll power(ll base, ll expo) {
    ll ans = 1;
    while(expo) {
        if(expo & 1LL) {
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        expo >>= 1LL;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    /* ll ans = (ll)(pow(2,n)) % (1000000007);
    cout << ans << '\n'; */
    cout << power(2LL,n) << '\n';
    return 0;
}