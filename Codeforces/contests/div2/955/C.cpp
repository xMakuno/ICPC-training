#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n, l, r;
        cin >> n >> l >> r;
        int ans = 0, sum = 0, temp;
        for(int i = 0; i < n; ++i){
            cin >> temp;
            sum += temp;
            // cout << "Sum is: " << sum << endl;
            if((sum <= r  && sum >= l) || (temp<= r && temp >=l)){
                ans++;
                sum = 0;
            }
            if(sum > r){
                sum = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}