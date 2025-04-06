#include<bits/stdc++.h>
using namespace std;
int main(){
    int T = 1;
    cin >> T;
    while(T--){
        vector<int> v(3,0);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(),v.end());
        bool flag = false;
        for(int i = 0; i < 3; ++i){
            if(v[i] == v[(i+1)%3] + v[(i+2)%3] || (!(v[i]&1)) && v[(i+1)%3] == v[(i+2)%3]){
                flag = true;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}