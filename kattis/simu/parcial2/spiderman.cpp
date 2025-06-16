#include<bits/stdc++.h>
#define INF 1e9+7
using namespace std;
typedef long long ll;
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> d(n+1);
        int sum =0;
        for(int i = 1; i <= n; ++i){
            cin >> d[i];
            sum+=d[i];
        }
        vector<vector<int>> dp(n+1, vector<int>(sum+1, INF));
        vector<vector<char>> move(n+1, vector<char>(sum+1,'U'));
        dp[0][0] = 0;
        for(int i = 0; i < n; ++i){
            // cout << "TURN: " << i << endl;
            for(int h = 0; h <= sum; ++h){
                if(dp[i][h] == INF) continue;
                int up = h + d[i+1];
                // cout << "up index: " << up << endl;
                int u_comp = max(dp[i][h], up);
                if(dp[i+1][up] == INF || dp[i+1][up] > u_comp){
                    dp[i+1][up] = u_comp;
                    move[i+1][up] = 'U';
                }
                // cout << "curent height: " << h << endl;
                if(h >= d[i+1]){
                    int down = h - d[i+1];
                    // cout << "down index: " << down << "\n";
                    if(dp[i+1][down] == INF || dp[i+1][down] > dp[i][h]){
                        // cout << "puta\n";
                        dp[i+1][down]=dp[i][h];
                        move[i+1][down]='D';
                    }
                }
            }
        }
        if(dp[n][0]!= INF){
            int x = n;
            int y = 0;
            stack<char> s;
            while(!(x == 0 && y == 0)){
                s.push(move[x][y]);
                if(move[x][y] == 'D'){
                    y+=d[x];    
                }else{
                    y-=d[x];
                }
                x--;
            }
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }
            cout << '\n';
        }else{
            cout << "IMPOSSIBLE\n";
        }
    }
    return 0;
}