#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> h(n);
        for(int i = 0; i < n; ++i){
            cin >> h[i];
        }
        int i = 0;
        bool flag = true;
        while(i < n-1){
            int req = max(0,h[i+1]-k);
            if(req <= h[i]){
                m+=h[i]-req;
                i++;
            }else{
                int diff = req-h[i];
                if(diff > m){
                    flag = false;
                    break;
                }
                m-=diff;
                i++;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}