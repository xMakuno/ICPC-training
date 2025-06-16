#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int last = -1;
    int ans = 0;
    for(int i = 0; i < n;++i){
        if(last != v[i]){
            ans++;
            last = v[i];
        }
    }
    cout << ans << endl;
    return 0;
}