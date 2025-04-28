#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    sort(b.rbegin(), b.rend());
    int ans = 0;
    for(int i = 0; i < n; ++i){
        // cout << b[i] << " \n"[i==n-1];
        if(i % 3 != 2){
            ans+=b[i];
        }
    }
    cout << ans << '\n';
    return 0;
}