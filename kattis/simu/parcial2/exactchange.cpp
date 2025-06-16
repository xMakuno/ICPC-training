#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int P, n;
        cin >> P >> n;
        vector<int> coins(n);
        for (int i = 0; i < n; i++) {
            cin >> coins[i];
        }

        // Compute bounds
        int sumAll = accumulate(coins.begin(), coins.end(), 0);
        int maxC   = *max_element(coins.begin(), coins.end());
        int M = min(sumAll, P + maxC);

        // dp[i][s] = fewest coins among first i coins to make sum exactly s
        vector<vector<int>> dp(n+1, vector<int>(M+1, INF));
        dp[0][0] = 0;

        // Build the table
        for (int i = 1; i <= n; i++) {
            int c = coins[i-1];
            for (int s = 0; s <= M; s++) {
                // Option 1: skip coin i
                dp[i][s] = dp[i-1][s];
                // Option 2: take coin i (if it fits)
                if (s >= c && dp[i-1][s-c] + 1 < dp[i][s]) {
                    dp[i][s] = dp[i-1][s-c] + 1;
                }
            }
        }

        // Find the smallest payment >= P that is reachable
        for (int pay = P; pay <= M; pay++) {
            if (dp[n][pay] < INF) {
                cout << pay << " " << dp[n][pay] << "\n";
                break;
            }
        }
    }

    return 0;
}
