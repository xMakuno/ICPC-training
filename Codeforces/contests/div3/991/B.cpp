#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        ll zero = 0, one = 0;
        for(int i = 0; i < n; ++i){
            int temp;
            cin >>  temp;
            if(i&1){
                one+=temp;
            }else{
                zero+=temp;
            }
        }
        ll zc = ((n+1)/2);
        ll oc = (n)/2;
        // cout << zc << " " << oc << endl;
        if(zero % zc == 0 && one % oc == 0){
            // cout << zero/zc << " " << one/oc << endl; 
            if(zero/zc == one/oc){
                cout << "YES\n";
            }else{
                cout << "NO\n";
            }
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}