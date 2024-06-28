#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    // cin >> T;
    while(T--){
        int n,temp; 
        cin >> n;
        multiset<int> m;
        int mn = INT_MAX, mx = -1;
        for(int i = 0; i < n; ++i){
            cin >> temp;
            mn = min(mn, temp);
            mx = max(mx, temp);
            m.insert(temp);
        }
        if(m.size() <= 2){
            cout << "0\n";
        }else{
            cout << n - m.count(mn) - m.count(mx) << '\n';
        }
    }
    return 0;
}