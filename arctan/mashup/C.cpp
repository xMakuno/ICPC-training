#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    // cin >> T;
    while(T--){
        int n,temp; 
        cin >> n;
        vector<int> m;
        int mn = INT_MAX, mx = -1;
        for(int i = 0; i < n; ++i){
            cin >> temp;
            mn = min(mn, temp);
            mx = max(mx, temp);
            m.push_back(temp);
        }
        int ans = n;
        for(int &x: m){
            if(x == mn || x == mx){
                ans--;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}