#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int x;
        cin >> x;
        int ans = 2;
        if(x == 3){
            ans = 3;
        }
        cout << ans << '\n';
    }
    return 0;
}