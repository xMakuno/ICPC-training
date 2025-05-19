#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> won(n);
        bool has_z = false;
        for(int i = 0; i < n; ++i){
            cin >> v[i];
            if(!v[i]){
                has_z = true;
            }
        }
        bool flag = true;
        for(int i = 0; i < n; ++i){
            int l = i-1, r = i+1;
            if(!v[i]){
                if(l >= 0){
                if(!v[l]){
                    // printf("Dies left at %d\n", i);
                    flag = false;
                    break;
                    }
                }
                if(r < n){
                    if(!v[r]){
                        // printf("Dies right at %d\n", i);
                        flag = false;
                        break;
                    }
                }
            }
        }
        cout << (flag && has_z ? "NO\n" : "YES\n");
    }
    return 0;
}