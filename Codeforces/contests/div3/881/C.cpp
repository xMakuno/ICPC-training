#include<bits/stdc++.h>
using namespace std;
int main(){
    int t =1;
    cin >> t;
    while(t--){
        long long n, sum = 1;
        cin >> n;
        while(n > 1){
            sum += n;
            n = n >> 1;
        }
        cout << sum << '\n';
    }
    return 0;
}