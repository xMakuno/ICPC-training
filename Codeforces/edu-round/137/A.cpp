#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; ++i){
            int temp;
            cin >>  temp;
        }
        n = 10 - n;
        int ans = 3*n*(n-1);
        cout << ans << '\n';
    }
    return 0;
}