#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;++i){
        cin >> v[i];
    }
    int mx = v[0];
    int cur = v[0];
    for(int i = 1; i < n; ++i){
        cur += v[i];
        if(cur < 0) cur = 0;
        mx = max(cur, mx);
    }
    cout << mx << endl;
    return 0;
}