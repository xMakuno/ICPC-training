#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(0); */
    int T = 1;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        bool flag = true;
        int last = -1;
        for(int i = 0; i < n; ++i){
            int temp;
            cin >> temp;
            if(i!=0){
                if(abs(last-temp) != 5 && abs(last-temp) != 7){
                    flag = false;
                }
            }
            last = temp;
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}