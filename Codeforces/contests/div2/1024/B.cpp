#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
            v[i] = abs(v[i]);
        }
        int target = v[0];
        sort(v.begin(),v.end());
        int pos = find(v.begin(),v.end(),target)-v.begin();
        if(pos <= n/2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}