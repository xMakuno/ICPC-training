#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> ans;
    string S;
    int m, n, k;
    cin >> m >> n >> k;
    for(int i = 0; i < m; ++i){
        cin >> S;
        string temp = "";
        int counter = k;
        for(int j = 0; i < n; ++j){
            while(counter--){
                temp += S[j];
            }
        }
        ans.push_back(temp);
    }
    for(int i = 0; i < m; ++i){
        cout << ans[i] << '\n';
    }
    return 0;
}