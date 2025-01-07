#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        int s[n], m[n];
        for(int i = 0; i < n; i++){
            cin >> m[i];
        }
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        int a = 0, b = 1, ans = 0;
        while(a < n-1){
            // cout <<  "a: " <<  a << " b: " << b << endl;
            if(m[a] > s[b]){
                ans+= m[a]-s[b];
            }
            a++; b++;
        }
        ans+=m[a];   
        cout <<  ans << '\n';
    }
    return 0;
}