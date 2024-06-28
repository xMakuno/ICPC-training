#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        string problem;
        cin >> problem;
        vector<queue<int>> dp;
        int ptr = 0;
        while(ptr < n-1){
            queue<int> q;
            for(int i = 0; i < n; ++i){
                string temp = "";
                temp += problem[i];
                if(ptr == i){
                    temp += problem[i+1];
                    i += 2;
                }
                q.push(stoi(temp));
            }
            dp.push_back(q);
            ptr++;
        }
        ll ans = INT_MAX;
        for(int i = 0; i < n-1; ++i){
            ll sum = 0;
            bool first = true;
            while(!dp[i].empty()){
                if(first){
                    sum += dp[i].front();
                    dp[i].pop();
                    first = false;
                }else{
                    sum = min((ll) sum*dp[i].front(), (ll) sum+dp[i].front());
                    dp[i].pop();
                }
            }
            ans = min(ans, sum);
        }
        cout << ans << '\n';
    }
    return 0;
}