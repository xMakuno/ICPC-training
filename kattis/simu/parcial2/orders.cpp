#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    // cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> items(n+1);
        for(int i = 1; i<=n; ++i){
            cin >> items[i];
        }
        int o;
        cin >> o;
        vector<int> orders(o);
        int turbo = -1;
        for(int i = 0; i < o; ++i){
            cin >> orders[i];
            turbo = max(turbo, orders[i]);
        }
        vector<vector<int>> dp(n+1,vector<int>(turbo+1,0)); // dp[item][sum]
        for(int i = 1; i <= n; ++i){
            dp[i][0]=1;
        }
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= turbo; ++j){
                if(j >= items[i]){
                    dp[i][j] = min(2, dp[i-1][j] + dp[i][j-items[i]]);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        for(auto &x : orders){
            // cout << x << " ";
            if(dp[n][x] == 0){
                cout << "Impossible\n";
            }else if(dp[n][x] == 2){
                cout << "Ambiguous\n";
            }else{
                // cout << "Yay\n";
                stack<int> st;
                int amount = x;
                int thing = n;
                while(amount != 0 && thing != 0){
                    if(dp[thing][amount] == dp[thing-1][amount]){
                        thing--;
                    }else if(dp[thing][amount] == dp[thing][amount-items[thing]]){
                        st.push(thing);
                        amount-=items[thing];
                    }
                }
                while(!st.empty()){
                    cout << st.top() << " ";
                    st.pop();
                }
                cout << '\n';
            }
        }
    }
    return 0;
}