#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int T = 1;
    cin >> T;
    while(T--){
        string a, b;
        cin >> a >> b;
        int ans = a.size() + b.size();
        int start = 0, max_shared = -1;
        while(start < b.size()){
            int shared = 0;
            int ptr = start;
            for(int i = 0; i < a.size(); ++i){
                if(a[i] == b[ptr]){
                    ptr++;
                    shared++;
                }
            }
            max_shared = max(max_shared, shared);
            start++;
        }
        
        cout << ans - max_shared << '\n';
    }
    return 0;
}