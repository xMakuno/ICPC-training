#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s, f;
    cin >> s >> f;
    vector<int> h(1e9+5);
    vector<pair<int, int>> v;
    int m_t =-1;
    for(int i = 0; i <= n; ++i){
        int b,e;
        cin >> b >> e;
        v.push_back({b,e});
        m_t = max(m_t,e);
    }
    for(int i = 0; i < n; ++i){
        int b = v[i].first, e = v[i].second;
        for(int j = b; j <= e; ++j){
            h[j]++;
        }
    }
    for(int i = 1; i <= m_t; ++i){
        cout << i <<  " " << h[i] << "\n";
    } 
    return 0;
}