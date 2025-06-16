#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> flowers(n);
        for(int i = 0; i < n; ++i){
            cin >> flowers[i];
        }
        vector<int> decay(n);
        decay[n-1] = 0;
        for(int i = n-2; i >= 0; --i){
            if(flowers[i] <= flowers[i+1]){
                decay[i] = decay[i+1] +1;
            }else{
                decay[i] = 0;
            }
        }
        int max_time = 0;
        for (int i = 0; i < n; ++i) {
            max_time = max(max_time, flowers[i] + decay[i]);
        }
        cout << max_time << '\n';
    }
    return 0;
}