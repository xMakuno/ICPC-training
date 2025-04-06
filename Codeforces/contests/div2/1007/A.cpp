#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        ll N;
        cin >> N;
        if(N % 3 == 1){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}