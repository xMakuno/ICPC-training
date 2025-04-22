#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int T = 1;
    cin >> T; 
    while(T--){
        ll n, k;
        cin >> n >> k;
        deque<ll> ships(n);
        for(int i = 0; i < n; ++i){
            cin >> ships[i];
        }
        while(ships.size()>1 && k){
            ll m = min(ships.front(), ships.back());
            if(k >= 2*m){
                ships.front() -= m;
                ships.back() -= m;
                k-=2*m;
            }else{
                ships.front() -= (k/2) + (k&1);
                ships.back() -= (k/2);
                k=0;
            }
            if(ships.front() == 0){
                ships.pop_front();

            }
            if(ships.back() == 0){
                ships.pop_back();
            }
        }
        ll ans = n - ships.size();
        cout << ans + (ships.size() && ships.front() <= k) << '\n';
    }
    return 0;
}