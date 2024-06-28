#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int x, y;
        cin >> x >> y;
        if( x >= 0 && y >=-1){
            cout <<"YES\n";
        }else if( x < 0 && (x < y)){
            cout <<"YES\n";
        }else{
            cout <<"NO\n";
        }
    }
    return 0;
}