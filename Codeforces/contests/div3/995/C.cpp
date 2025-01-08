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
        set<int> mex;
        for(int i = 1; i <= n; ++i){
            mex.insert(i);
        }
        for(int i = 0; i < k; ++i){
            int temp;
            cin >> temp;
            mex.erase(temp);
        }
        int mex = *(mex.begin()++);
        
    }
    return 0;
}