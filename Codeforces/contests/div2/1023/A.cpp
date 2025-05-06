#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n);
        set<int> s;
        for(int i = 0; i < n; ++i){
            cin >> v[i];
            s.insert(v[i]);
        }
        if(s.size() == 1){
            cout << "No\n";
        }else{
            cout << "Yes\n";
            int mx = *(--s.end());
            for(int i = 0; i < n; ++i){
                if(mx == v[i]){
                    cout << "2 ";
                }else{
                    cout << "1 ";
                }
            }
            cout << '\n';
        }
    }
    return 0;
}