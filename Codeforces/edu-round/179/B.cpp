#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> fibo(11);

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    fibo[1]= 1;
    fibo[2]= 2;
    for(int i = 3; i <= 10; ++i){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int T = 1;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        string ans = "";
        for(int i = 0; i < m; ++i){
            int w,l,h;
            cin >> w >> l >> h;
            if(w >= fibo[n] && h >= fibo[n] && l >= fibo[n]){
                int thresh = fibo[n] + fibo[n-1];
                if((w >= thresh || h >= thresh || l >= thresh)){
                    ans+="1";
                }else{
                    ans+="0";
                }
            }else{
                ans+="0";
            }
        }
        cout << ans << '\n';
    }
    return 0;
}