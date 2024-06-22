#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n,0);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        long long sum = 0;
        int max_num = 0, ans = 0;
        for(int i = 0; i < n; ++i){
            sum += v[i];
            max_num = max(max_num, v[i]);
            if(sum == 2*max_num){
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}