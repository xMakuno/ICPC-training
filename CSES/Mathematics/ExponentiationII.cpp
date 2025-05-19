#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll expo(ll a, ll b, ll MOD){
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
    int T = 1;
    cin >> T;
    while(T--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll d = expo(b,c, 1e9 + 6);
        cout << expo(a,d, 1e9 + 7) << endl;
    }
    return 0;
}