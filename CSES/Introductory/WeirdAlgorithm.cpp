#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    cout << n;
    while(n > 1){
        cout  << " ";
        if(!(n&1)){
            // cout << "even" << '\n';
            n = n / 2;
        }else{
            // cout << "odd" << '\n';
            n=3*n+1;
        }
        cout << n;
    }
    cout << '\n';
    return 0;
}