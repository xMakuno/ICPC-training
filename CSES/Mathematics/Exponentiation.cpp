#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MOD = 1e9 +7;

ll expo(ll a, ll b){
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
        ll a,b;
        cin >> a >> b;
        cout << expo(a,b) << endl;
    }
    return 0;
}