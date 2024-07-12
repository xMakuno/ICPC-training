#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll T = 1;
    cin >> T;
    while(T--){
        ll y,x;
        cin >> y >> x;
        ll mx_i = max(x,y);
        if(y > x){
            if((y & 1) == 1){
                cout << (mx_i-1) * (mx_i-1) + x << '\n';
            }else{
                cout << (mx_i-1) * (mx_i-1) + (2*y-x) << '\n';
            }
        }else{
            if((x & 1) == 0){
                cout << (mx_i-1) * (mx_i-1) + y << '\n';
            }else{
                cout << (mx_i-1) * (mx_i-1) + (2*x-y) << '\n';
            }
        }
    }
    return 0;
}