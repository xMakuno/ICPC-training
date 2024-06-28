#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    // cin >> T;
    while(T--){
        int n; 
        cin >> n;
        deque<int> v(n,0);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        while(!v.empty()){
            if(v[0] != v[1]){
                ans += v[1] - v[0];

            }
            v.pop_front();
                v.pop_front();
        }
        cout << ans << '\n';
    }
    return 0;
}