#include<bits/stdc++.h>
using namespace std;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        set<int> s;
        int mx = -2, mn = 1e9 + 7;
        vector<int> a(n),b(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        for(int i = 0; i < n; ++i){
            cin >> b[i];
            if(b[i] != -1){
                s.insert(a[i]+b[i]);
            }else{
                mx = max(mx, a[i]);
            }
        }
        if(s.size() > 1){
            cout << "0\n";
        }else if(mx-mn > k){
            cout << "0\n";
        }else if(s.size() == 1){
            bool f = true;
            int ans = 0;
            for(int i = 0; i < n; ++i){
                if(*s.begin()-a[i] > k || *s.begin() < a[i]){
                    f = false;
                    break;
                }
            }
            cout << int(f) << '\n';
        }else{
            if(k < mx){
                cout << "0\n";
            }else{
                cout << mn+k-mx+1 << endl;
            }
        }
    }
    return 0;
}