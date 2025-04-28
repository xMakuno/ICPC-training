#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a;
    cin >> n >> a;
    vector<int> e(n);
    for(int i = 0; i < n;++i){
        cin >> e[i];
    }
    sort(e.begin(),e.end());
    int ans = 0;
    for(int i = 0; i < n; ++i){
        if(a > e[i]){
            a-=e[i]+1;
            ans++;
        }else{
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}