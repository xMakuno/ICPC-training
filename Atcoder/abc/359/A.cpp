#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int T = 1;
    cin >> T;
    int ans = 0;
    while(T--){
        string in;
        string taka = "Takahashi";
        cin >> in;
        if(in ==  taka){
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}