#include<bits/stdc++.h>
using namespace std;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        deque<int> dn(n), dm(m);
        for(int i = 0; i < n; ++i){
            cin >> dn[i];
        }
        for(int i = 0; i < m; ++i){
            cin >> dm[i];
        }
        vector<int> b_match(m);
        int j = n-1;
        for(int i = m-1; i >= 0; --i){
            while(j>=0 && dn[j] < dm[i]){
                j--;
            }
            b_match[i] = j--;
        }
        /* for(int i = 0; i < m; ++i){
            cout << b_match[i] << " \n"[i==m-1];
        } */
        vector<int> f_match(m);
        j = 0;
        for(int i = 0; i < m; ++i){
            while(j<n && dn[j] < dm[i]){
                j++;
            }
            f_match[i] = j++;
        }
        /* for(int i = 0; i < m; ++i){
            cout << f_match[i] << " \n"[i==m-1];
        } */
    }
    return 0;
}