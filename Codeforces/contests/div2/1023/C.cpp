#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> v(n);
        vector<int> pref(n+1);
        pref[0]=0;
        for(int i = 0; i < n; ++i){
            cin >> v[i];
            if(s[i]=='0'){
                pref[i+1] = pref[i];
            }else{
                pref[i+1] = pref[i];
            }
        }
        int res = v[0];
        int a = 0,b = 0;
        for(int i = 0; i < n; i++) {
            int now = 0;
            for(int j = i; j < n; j++) {
                if(now + v[j] > res){
                    a = i;
                    b = j;
                    res = now + v[i];
                }
            }
        }
        /*
        if res == k then just return the same array
        if res > k and no forgotten in the index, its impossible -> NO
        if res < k and no forgotten at all, its impossible -> NO
        if res < k and there are forgotten, find the use indexes i and j, add a quantity of (#forgotten - 1) of 1's then add the diff of k and new sum to last zero
        */
        if(res == k){
            cout << "Yes\n";
            for(int i = 0; i < n; ++i){
                cin >> v[i];
            }
        }/* else if(){

        } */
    }
    return 0;
}