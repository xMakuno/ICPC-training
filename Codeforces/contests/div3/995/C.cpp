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
        if(n-k == 0){
            for(int i = 0; i < k; ++i){
                int temp;
                cin >> temp;
            }
            for(int i = 0; i < m; ++i){
                cout << "1";
            }
            cout << '\n';
        }else if(n-k > 1){
            for(int i = 0; i < k; ++i){
                int temp;
                cin >> temp;
            }
            for(int i = 0; i < m; ++i){
                cout << "0";
            }
            cout << '\n';
        }else{
            set<int> mex;
            for(int i = 1; i <= n; ++i){
                mex.insert(i);
            }
            for(int i = 0; i < k; ++i){
                int temp;
                cin >> temp;
                mex.erase(temp);
            }
            int M = *(mex.begin()++);
            for(int i = 0; i < m; ++i){
                if(i+1 == M){
                    cout << "1";
                }else{
                    cout << "0";
                }
            }
            cout << '\n';
        }
    }
    return 0;
}