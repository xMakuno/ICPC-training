#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m, k;
        cin >> n >> m >> k;
        int lists[m];
        for(int i = 0; i < m; ++i){
            cin >> lists[i];
        }
        bool used[m+1];
        memset(used, false, m+1);
        if(n-k == 0){
            for(int i = 0; i < m; ++i){
                cout << "1";
            }
            cout << '\n';
        }else if(n-k > 1){
            for(int i = 0; i < m; ++i){
                cout << "0";
            }
            cout << '\n';
        }else{
            
        }
    }
    return 0;
}