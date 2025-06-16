#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> given(n);
    vector<bool> dp(360,false); // 360 -> 0
    for(int i = 0; i < n; ++i){
        cin >> given[i];
        dp[given[i]]=true;
    }
    for(int i = 1; i < 360; ++i){
        if(dp[i]){
            for(int j = 0; j < 360; ++j){
                dp[(i + j*i)%360] = true;
            }
        }
    }
    for(int i = 0; i < k; ++i){
        int temp;
        cin >> temp;
        if(dp[temp]){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}