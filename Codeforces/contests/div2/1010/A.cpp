#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<int> rows(n);
        vector<int> cols(m);
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                char c;
                cin >> c;
                if(c == '1'){
                    rows[i]++;
                    cols[j]++;
                }
            }
        }
        int r = 0, c = 0;
        for(int i = 0; i < n; ++i){
            if(rows[i]&1){
                r++;
            }
        }
        for(int i = 0; i < m; ++i){
            if(cols[i]&1){
                c++;
            }
        }
        cout << max(r,c) << endl;
    }
    return 0;
}