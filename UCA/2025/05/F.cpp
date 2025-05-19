#include<bits/stdc++.h>
#define MAX_N 300000
using namespace std;
typedef long long ll;
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    // vector<vector<int>> matrix(MAX_N, vector<int>(MAX_N));
    int T = 1;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        int ans;
        if(n > m){
            ans= min(m,n-m)+m;
            cout << ans << '\n';
            for(int i = 1; i <= n; ++i){
                int c = i; 
                for(int j = 1; j <= m; ++j){
                    if(c > 0){
                        cout << c << " \n"[j==m];
                    }else{
                        cout << 1 << " \n"[j==m];
                    }
                    c--;
                }
            }
        }else{
            if(m > n){
                ans = min(n,m-n)+n;
            }else{
                ans = m;
            }
            int move = 0;
            cout << ans << '\n';
            for(int i = 1; i <= n; ++i){
                for(int j = 1; j <= m; ++j){
                    cout << (j - move <= 0 ? 1 : j - move )<< " \n"[j == m];
                }
                move++;
            }
            /* for(int i = 0; ){

            }  */
        }
    }
    return 0;
}