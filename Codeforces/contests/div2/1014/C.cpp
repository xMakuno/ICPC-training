#include<bits/stdc++.h>
#define ll long long
using namespace std;

void one(){
    ll n;
    cin >> n;
    ll sE = 0, sO = 0, o = 0, mx = -1;
    for(ll i = 0; i < n; ++i){
        ll temp;
        cin >> temp;
        mx = max(mx, temp);
        if( (temp&1) ){
            sO+=temp;
            o++;
        }else{
            sE+=temp;
        }
    }
    if(sE==0 || sO == 0){
        cout << mx << '\n';
    }else{
        cout << sE+sO-o+1 << '\n';
    }
}

int main(){
    ll T= 1;
    cin >> T;
    while(T--){
        one();
    }
    return 0;
}