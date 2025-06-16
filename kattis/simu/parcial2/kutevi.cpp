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
    vector<int> queries(k);
    for(int i = 0; i < k; ++i){
        cin >> queries[i];
    }
    bool new_angle = true;
    while(new_angle){
        new_angle=false;
        for(int i = 0; i < 360;++i){
            if(dp[i]){
                for(int j = 0; j < n; ++j){
                    if(!dp[(i+given[j]%360)]){
                        dp[(i+given[j]%360)] = true;
                        new_angle = true;
                    }
                    if(!dp[(i-given[j]+360)%360]){
                        dp[(i-given[j]+360)%360] = true;
                        new_angle = true;
                    }
                }
            }
        }
    }
    for(int j = 0; j < k;++j){
        cout << (dp[queries[j]%360] ? "YES\n" : "NO\n");
    }
    return 0;
}