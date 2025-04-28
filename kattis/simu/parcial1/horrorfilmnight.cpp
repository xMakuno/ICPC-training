#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int m;
    cin >> m;
    vector<int> w(m);
    for(int i = 0; i < m; ++i){
        cin >> w[i];
    }
    sort(w.begin(), w.end());
    
    return 0;
}