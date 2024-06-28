#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n, d;
        cin >> n >> d;
        if(d <= n+ceil(n/2)){
            cout << "YES\n";
        }else if(d <= n){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}