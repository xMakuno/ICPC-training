#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        long long n;
        cin >> n;
        vector<int>v(n+1);
        for(int i = 0; i < n; ++i){
            string s;
            cin >> s >> v[i+1];
        }
        sort(v.begin(),v.end());
        long long ans = 0;
        for(int i = 1; i <= n; ++i){
            ans+=abs(i-v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}