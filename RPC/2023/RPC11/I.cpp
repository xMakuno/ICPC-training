#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = 0, t;
    int a[2] = {0,0};
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> t;
        if( t == 1){
            swap(a[0],a[1]);
            a[1]++;
            ans += a[1];
        }else{
            a[0]++;
            ans += a[1];
        }
    }
    cout << ans << '\n';
}

int main(){
    solve();
    return 0;
}