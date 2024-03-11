#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0, a[2]= {0,0}, k =0, w=0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
        a[k%2]++;
        if(v[i]==1){
            ans += a[k%2];
            w = a[k%2];
            k++;
        }else{
            ans += w;
        }
    }
    cout << ans;
    return 0;
}