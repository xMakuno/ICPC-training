#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll T = 1;
    cin >> T;
    while(T--){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        set<ll> s;
        s.insert(a + b);
        s.insert(c - b);
        s.insert(d - c);
        cout << 4 - s.size() << '\n';
    }
    return 0;
}