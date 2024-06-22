#include<bits/stdc++.h>
using namespace std;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        string prob;
        cin >>  prob;
        vector<int> exercise(7,0);
        for(int i = 0; i < n; ++i){
            // cout << "Problem for " << prob[i] << " is " << prob[i] - 'A' << endl;
            exercise[prob[i] - 'A']++;
        }
        int ans = 0;
        for(int i = 0; i < 7; ++i){
            // cout << "Problems of " << char(i + 'A') << ": " << exercise[i] << " vs " << m << endl;
            if(exercise[i] < m){
                ans += m-exercise[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}