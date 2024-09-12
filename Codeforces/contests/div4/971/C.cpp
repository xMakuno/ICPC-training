#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//WA
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int x, y, k;
        cin >>  x >> y >> k;
        int ans = (ceil(max(x+k-1,y+k-1)/k)*2);
        ans = max(ans,0);
        if(x > y){
            cout << ans - 1 << '\n'; 
        }else{
            cout << ans << '\n';
        }
    }
    return 0;
}