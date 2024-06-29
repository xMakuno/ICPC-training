#include<bits/stdc++.h>
using namespace std;
#define YES cout << "YES\n";
#define NO cout << "NO\n";
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        ll n, d;
        cin >> n >> d;
        ll x = (n-1)/2;
        if( n >= (x+ (d+x)/(x+1)) ){
            YES
        }else{
            NO
        }

    }
    return 0;
}