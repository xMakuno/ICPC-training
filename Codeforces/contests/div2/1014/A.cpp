#include<bits/stdc++.h>
using namespace std;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int mx = -1, mn = 1e9+5;
        for(int i=0; i<n;++i){
            int temp;
            cin >> temp;
            mx = max(mx, temp);
            mn = min(mn, temp);
        }
        cout << mx - mn << '\n';
    }
    return 0;
}