#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> numbas(n);
        map<int, int> highest_p;
        vector<bool> xor_shit(n);
        vector<int> powa(32,0);
        for(int i = 0; i < n; ++i){ 
            cin >> numbas[i];
        }
        if(n > 20){
            cout << "0\n";
        }else{
            ll ans = 1e9 + 7;
            for(ll i = 1; i <= (1 << n)-2; ++i){
                ll x = 0;
                ll y = 0;
                for(ll j = 0; j < n; ++j){
                    if( i & (1 << j) ){
                        x|=numbas[j];
                    }else{
                        y^=numbas[j];
                    }
                }
                ans = min(ans, x*y);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}