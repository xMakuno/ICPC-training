#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<int> v(k);
        for(int i = 0; i < k; ++i){
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        ll ans = 0;
        while(v.size() > 1){
            int mn = v[v.size()-1];
            ans += 2*mn -1;
            v.pop_back();
        }
        cout << ans << '\n';
    }
    return 0;
}