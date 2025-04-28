#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        multiset<int> ms;
        vector<int> v(10,0);
        for(int i = 0; i < 10; ++i){
            char c;
            cin >> c;
            v[c-'0']++;
            ms.insert(c-'0');
        }
        string ans = "";
        for(int i=9; i>=0; --i){
            auto it = ms.upper_bound(i-1);
            ans+=to_string(*it);
            ms.erase(it);
        }
        cout << ans << '\n';
    }
    return 0;
}