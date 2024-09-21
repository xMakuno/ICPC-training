#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n;
    cin >> n;
    int ans[41];
    ans[1] = 1;
    ans[2] = 2;
    for(int i = 3; i <= n; ++i){
        ans[i] = ans[i-1] + ans[i-2];
    }
    cout << ans[n] << '\n';
    return 0;
}