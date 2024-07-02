#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    ll factor = 3;
    for(ll k = 1; k <=n; ++k){
        if(k==1){
            cout << "0\n";
        }else{
            ll ans = k + (k-2)*(k-2);
            cout << ans*factor << '\n';
            factor+=k+2;
        }
    }
    return 0;
}