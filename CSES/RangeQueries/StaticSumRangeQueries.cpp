#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n, q;
    cin >> n >> q;
    vector<ll> v(n),pref(n+1);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        pref[i+1] = pref[i] +  v[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        if(l == r){
            cout << v[l-1] << endl;
        }else{
            cout << pref[r] - pref[l-1] << '\n'; 
        }
    }
    return 0;
}